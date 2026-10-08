NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiPointer<NiTriBasedGeom>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiPointer<NiTriBasedGeom>>::~NiTPointerList<NiPointer<NiTriBasedGeom>>(this); /*0x7d5473*/
  if ( (a2 & 1) != 0 ) /*0x7d547d*/
    FormHeapFree((unsigned int)this); /*0x7d5480*/
  return this; /*0x7d548a*/
}
