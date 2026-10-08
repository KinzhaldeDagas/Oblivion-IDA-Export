_DWORD *__thiscall NiTStringPointerMap<NiPointer<NiTexture>>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiPointer<NiTexture>>::~NiTStringPointerMap<NiPointer<NiTexture>>(this); /*0x4a24d3*/
  if ( (a2 & 1) != 0 ) /*0x4a24dd*/
    FormHeapFree((unsigned int)this); /*0x4a24e0*/
  return this; /*0x4a24ea*/
}
