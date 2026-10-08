NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiPointer<NiAVObject>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiPointer<NiAVObject>>::~NiTPointerList<NiPointer<NiAVObject>>(this); /*0x7d5493*/
  if ( (a2 & 1) != 0 ) /*0x7d549d*/
    FormHeapFree((unsigned int)this); /*0x7d54a0*/
  return this; /*0x7d54aa*/
}
