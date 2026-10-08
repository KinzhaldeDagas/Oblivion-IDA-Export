_DWORD *__thiscall NiTStringPointerMap<NiShader *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiShader *>::~NiTStringPointerMap<NiShader *>(this); /*0x77cf43*/
  if ( (a2 & 1) != 0 ) /*0x77cf4d*/
    FormHeapFree((unsigned int)this); /*0x77cf50*/
  return this; /*0x77cf5a*/
}
