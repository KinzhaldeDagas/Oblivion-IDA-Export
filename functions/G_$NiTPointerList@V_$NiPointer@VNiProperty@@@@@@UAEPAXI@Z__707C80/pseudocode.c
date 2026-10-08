NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiPointer<NiProperty>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiPointer<NiProperty>>::~NiTPointerList<NiPointer<NiProperty>>(this); /*0x707c83*/
  if ( (a2 & 1) != 0 ) /*0x707c8d*/
    FormHeapFree((unsigned int)this); /*0x707c90*/
  return this; /*0x707c9a*/
}
