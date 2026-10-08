#553 *__thiscall LowProcess::`scalar deleting destructor'(#553 *this, char a2)
{
  LowProcess::~LowProcess(this); /*0x64acd3*/
  if ( (a2 & 1) != 0 ) /*0x64acdd*/
    FormHeapFree((unsigned int)this); /*0x64ace0*/
  return this; /*0x64acea*/
}
