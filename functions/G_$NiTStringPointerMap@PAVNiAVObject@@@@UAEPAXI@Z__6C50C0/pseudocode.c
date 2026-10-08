_DWORD *__thiscall NiTStringPointerMap<NiAVObject *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiAVObject *>::~NiTStringPointerMap<NiAVObject *>(this); /*0x6c50c3*/
  if ( (a2 & 1) != 0 ) /*0x6c50cd*/
    FormHeapFree((unsigned int)this); /*0x6c50d0*/
  return this; /*0x6c50da*/
}
