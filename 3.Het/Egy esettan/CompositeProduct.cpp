#include "CompositeProduct.h"
#include "ProductFactory.h"

using namespace std;

CompositeProduct::CompositeProduct():
    Product() { }

void CompositeProduct::AddPart(Product* product)
{
    parts.push_back(product);
}

CompositeProduct::~CompositeProduct()
{
    for(unsigned i = 0; i < parts.size(); i++)
        delete parts[i];
    parts.clear();
}

void CompositeProduct::printParams(std::ostream& os) const
{
    Product::printParams(os);
    os << endl << "    Items: ";
    for (unsigned int i = 0; i < parts.size(); ++i)
    {
        os << endl << "    " <<i << ". :";
        parts[i]->Print(os);
    }
}

void CompositeProduct::writeParamsToStream(std::ostream& os) const
{
    Product::writeParamsToStream(os);
    os << ' ' << parts.size();

    for (unsigned i=0; i < parts.size(); i++)
        os << endl << *parts[i];
}

void CompositeProduct::loadParamsFromStream(std::istream& is)
{
    Product::loagParamsFromStream(is);
    int itemCount;
    is >> itemCount;

    for (int i = 0; i < itemCount; ++i)
    {
        Product* product = ProductFactory::GetInstance()->ReadAndCreateProduct(is);
        if (product)
        {
            is >> *product;
            AddPart(product);
        }
    }
}
