NiTPointerList__BSImageSpaceShader *__thiscall NiTList<TESObjectCELL *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<TESObjectCELL *>::~NiTList<TESObjectCELL *>(this); /*0x4cfab3*/
  if ( (a2 & 1) != 0 ) /*0x4cfabd*/
    FormHeapFree((unsigned int)this); /*0x4cfac0*/
  return this; /*0x4cfaca*/
}
