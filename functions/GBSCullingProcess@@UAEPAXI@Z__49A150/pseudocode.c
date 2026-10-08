BSCullingProcess *__thiscall BSCullingProcess::`scalar deleting destructor'(BSCullingProcess *this, char a2)
{
  BSCullingProcess::~BSCullingProcess(this); /*0x49a153*/
  if ( (a2 & 1) != 0 ) /*0x49a15d*/
    FormHeapFree((unsigned int)this); /*0x49a160*/
  return this; /*0x49a16a*/
}
