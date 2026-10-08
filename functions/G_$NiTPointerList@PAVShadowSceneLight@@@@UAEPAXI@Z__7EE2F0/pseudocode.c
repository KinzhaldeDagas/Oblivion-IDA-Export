NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<ShadowSceneLight *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<ShadowSceneLight *>::~NiTPointerList<ShadowSceneLight *>(this); /*0x7ee2f3*/
  if ( (a2 & 1) != 0 ) /*0x7ee2fd*/
    FormHeapFree((unsigned int)this); /*0x7ee300*/
  return this; /*0x7ee30a*/
}
