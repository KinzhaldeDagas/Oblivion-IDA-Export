#553 *__thiscall LowProcess::`scalar deleting destructor'(#553 *this, char a2)
{
  LowProcess::~LowProcess(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
