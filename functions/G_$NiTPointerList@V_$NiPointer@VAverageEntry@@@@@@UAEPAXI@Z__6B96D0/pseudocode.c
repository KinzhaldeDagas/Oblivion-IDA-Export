NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiPointer<AverageEntry>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiPointer<AverageEntry>>::~NiTPointerList<NiPointer<AverageEntry>>(this); /*0x6b96d3*/
  if ( (a2 & 1) != 0 ) /*0x6b96dd*/
    FormHeapFree((unsigned int)this); /*0x6b96e0*/
  return this; /*0x6b96ea*/
}
