void Product::loadParamsFromStream(istream& is)
{
    is >> name;
    is >> initialPrice;

    char buff[9];
    is.width(9);
    is >> buff;
    if (strlen(buff) != 8)
        throw range_error("Invalid time format.");

    char workBuff[5];
    tm t;
    int year;
    strncpy(workBuff, buff, 4); workBuff[4] = '\0';
    year = atoi(workBuff); t.tm_year = year - 1900;
    strncpy(workBuff, &buff[4], 2); workBuff[2] = '\0';
    t.tm_mon = atoi(workBuff) - 1;
    strncpy(workBuff, &buff[6], 2); workBuff[2] = '\0';
    t.tm_mday = atoi(workBuff);
    t.tm_hour = t.tm_min = t.tm_sec = 0;
    t.tm_isdst = -1;

    dateOfAcquistion = mktime(&t);
}

//Globális operátorok
istream& operator>>(istream& is, Product& product)
{
    product.loadParamsFromStream( is );
    return is;
}

ostream& operator<<(ostream& os, const Product& product)
{
    os << product.GetCharCode();
    product.writeParamsToStream(os);
    return os;
}
