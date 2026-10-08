NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<TallGrassGroup *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<TallGrassGroup *>::~NiTPointerList<TallGrassGroup *>(this); /*0x7c3573*/
  if ( (a2 & 1) != 0 ) /*0x7c357d*/
    FormHeapFree((unsigned int)this); /*0x7c3580*/
  return this; /*0x7c358a*/
}
