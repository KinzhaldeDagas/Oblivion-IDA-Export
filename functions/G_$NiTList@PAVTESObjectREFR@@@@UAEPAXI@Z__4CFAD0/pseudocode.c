NiTPointerList__BSImageSpaceShader *__thiscall NiTList<TESObjectREFR *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<TESObjectREFR *>::~NiTList<TESObjectREFR *>(this); /*0x4cfad3*/
  if ( (a2 & 1) != 0 ) /*0x4cfadd*/
    FormHeapFree((unsigned int)this); /*0x4cfae0*/
  return this; /*0x4cfaea*/
}
