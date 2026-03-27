NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiPointer<NiSourceTexture>>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiPointer<NiSourceTexture>>::~NiTPointerList<NiPointer<NiSourceTexture>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
