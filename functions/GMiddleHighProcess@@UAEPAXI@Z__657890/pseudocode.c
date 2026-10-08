#554 *__fastcall MiddleHighProcess::`scalar deleting destructor'(#554 *this, int a2, char a3)
{
  MiddleHighProcess::~MiddleHighProcess(this, a2); /*0x657893*/
  if ( (a3 & 1) != 0 ) /*0x65789d*/
    FormHeapFree((unsigned int)this); /*0x6578a0*/
  return this; /*0x6578aa*/
}
