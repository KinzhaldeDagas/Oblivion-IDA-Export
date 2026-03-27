TESSoulGem *__thiscall TESSoulGem::`scalar deleting destructor'(TESSoulGem *this, char a2)
{
  TESSoulGem::~TESSoulGem(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
