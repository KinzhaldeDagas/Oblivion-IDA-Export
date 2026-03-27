BSReference *__thiscall BSReference::`scalar deleting destructor'(BSReference *this, char a2)
{
  BSReference::~BSReference(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
