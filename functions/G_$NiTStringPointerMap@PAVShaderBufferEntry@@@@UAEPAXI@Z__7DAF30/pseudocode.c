_DWORD *__thiscall NiTStringPointerMap<ShaderBufferEntry *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<ShaderBufferEntry *>::~NiTStringPointerMap<ShaderBufferEntry *>(this); /*0x7daf33*/
  if ( (a2 & 1) != 0 ) /*0x7daf3d*/
    FormHeapFree((unsigned int)this); /*0x7daf40*/
  return this; /*0x7daf4a*/
}
