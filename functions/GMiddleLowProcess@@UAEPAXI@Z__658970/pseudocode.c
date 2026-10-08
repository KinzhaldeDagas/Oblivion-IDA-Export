#555 *__thiscall MiddleLowProcess::`scalar deleting destructor'(#555 *this, char a2)
{
  MiddleLowProcess::~MiddleLowProcess(this); /*0x658973*/
  if ( (a2 & 1) != 0 ) /*0x65897d*/
    FormHeapFree((unsigned int)this); /*0x658980*/
  return this; /*0x65898a*/
}
