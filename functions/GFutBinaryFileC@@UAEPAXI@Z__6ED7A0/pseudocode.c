FutBinaryFileC *__thiscall FutBinaryFileC::`scalar deleting destructor'(FutBinaryFileC *this, char a2)
{
  FutBinaryFileC::~FutBinaryFileC(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
