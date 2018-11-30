class HardDisk : public Product
{
    int speedRPM;

protected:
    void printParams(std::ostream& os) const;
    ...
}
