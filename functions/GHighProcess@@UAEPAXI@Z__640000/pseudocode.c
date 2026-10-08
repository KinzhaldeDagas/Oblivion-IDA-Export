#552 *__thiscall HighProcess::`scalar deleting destructor'(#552 *this, char a2)
{
  HighProcess::~HighProcess(this); /*0x640003*/
  if ( (a2 & 1) != 0 ) /*0x64000d*/
    FormHeapFree((unsigned int)this); /*0x640010*/
  return this; /*0x64001a*/
}
