NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<TESForm *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<TESForm *>::~NiTPointerList<TESForm *>(this); /*0x5c1273*/
  if ( (a2 & 1) != 0 ) /*0x5c127d*/
    FormHeapFree((unsigned int)this); /*0x5c1280*/
  return this; /*0x5c128a*/
}
