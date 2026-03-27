#554 *__fastcall MiddleHighProcess::`scalar deleting destructor'(#554 *this, int a2, char a3)
{
  MiddleHighProcess::~MiddleHighProcess(this, a2);
  if ( (a3 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
