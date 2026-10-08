_DWORD *__thiscall NiTStringPointerMap<NiPointer<NiShaderLibrary>>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiPointer<NiShaderLibrary>>::~NiTStringPointerMap<NiPointer<NiShaderLibrary>>(this); /*0x77cea3*/
  if ( (a2 & 1) != 0 ) /*0x77cead*/
    FormHeapFree((unsigned int)this); /*0x77ceb0*/
  return this; /*0x77ceba*/
}
