NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiPointer<ShadowSceneLight>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiPointer<ShadowSceneLight>>::~NiTPointerList<NiPointer<ShadowSceneLight>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
