NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiPointer<BSRenderedTexture>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiPointer<BSRenderedTexture>>::~NiTPointerList<NiPointer<BSRenderedTexture>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
