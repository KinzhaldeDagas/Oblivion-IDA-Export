NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<TallGrassGroup *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<TallGrassGroup *>::~NiTPointerList<TallGrassGroup *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
