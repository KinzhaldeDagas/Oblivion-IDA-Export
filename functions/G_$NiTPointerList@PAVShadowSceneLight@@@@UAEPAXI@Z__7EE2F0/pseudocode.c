NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<ShadowSceneLight *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<ShadowSceneLight *>::~NiTPointerList<ShadowSceneLight *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
