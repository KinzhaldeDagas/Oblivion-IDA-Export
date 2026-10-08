_DWORD *__thiscall NiTStringMap<NiD3DGlobalConstantEntry *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringMap<NiD3DGlobalConstantEntry *>::~NiTStringMap<NiD3DGlobalConstantEntry *>(this); /*0x77ce03*/
  if ( (a2 & 1) != 0 ) /*0x77ce0d*/
    FormHeapFree((unsigned int)this); /*0x77ce10*/
  return this; /*0x77ce1a*/
}
