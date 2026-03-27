#555 *__thiscall MiddleLowProcess::`scalar deleting destructor'(#555 *this, char a2)
{
  MiddleLowProcess::~MiddleLowProcess(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
