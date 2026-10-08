NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiPointer<ShadowSceneLight>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>(this); /*0x7c6ac3*/
  if ( (a2 & 1) != 0 ) /*0x7c6acd*/
    FormHeapFree((unsigned int)this); /*0x7c6ad0*/
  return this; /*0x7c6ada*/
}
