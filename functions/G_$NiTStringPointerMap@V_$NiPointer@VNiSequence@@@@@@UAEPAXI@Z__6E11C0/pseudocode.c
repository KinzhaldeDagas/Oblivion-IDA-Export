_DWORD *__thiscall NiTStringPointerMap<NiPointer<NiSequence>>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<NiPointer<NiSequence>>::~NiTStringPointerMap<NiPointer<NiSequence>>(this); /*0x6e11c3*/
  if ( (a2 & 1) != 0 ) /*0x6e11cd*/
    FormHeapFree((unsigned int)this); /*0x6e11d0*/
  return this; /*0x6e11da*/
}
