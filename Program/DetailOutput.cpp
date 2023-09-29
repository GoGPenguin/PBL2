#include "DetailOutput.h"

DetailOutput::DetailOutput()
{

}

DetailOutput::~DetailOutput()
{

}
DetailOutput::DetailOutput(const string& detailOutputId,const string& OutputId,const string& productId,const string& detailInputId,const string& CustomerId, int Count)
{
    this->detailOutputId = detailOutputId;
    this->OutputId = OutputId;
    this->productId = productId;
    this->detailInputId = detailInputId;
    this->CustomerId = CustomerId;
    this->Count = Count;
}

const string& DetailOutput::getDetailOutputId()
{
    return this->detailOutputId;
}
void DetailOutput::setDetailOutputId(const string& s)
{
    this->detailOutputId = s;
}
const string& DetailOutput::getOutputId()
{
    return this->OutputId;
}
void DetailOutput::setOutputId(const string& s)
{
    this->OutputId = s;
}

const string& DetailOutput::getProductId()
{
    return this->productId;
}
void DetailOutput::setProductId(const string& s)
{
    this->productId = s;
}
const string& DetailOutput::getDetailInputId()
{
    return this->detailInputId;
}
void DetailOutput::setDetailInputId(const string& s)
{
    this->detailInputId = s;
}

const string& DetailOutput::getCustomerId()
{
    return this->CustomerId;
}
void DetailOutput::setCustomerId(const string& s)
{
    this->CustomerId = s;
}

int DetailOutput::getCount()
{
    return this->Count;
}
void DetailOutput::setCount(int x)
{
    this->Count = x;
}
