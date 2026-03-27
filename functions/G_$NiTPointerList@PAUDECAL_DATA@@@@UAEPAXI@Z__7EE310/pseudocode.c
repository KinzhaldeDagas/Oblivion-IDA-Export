NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<DECAL_DATA *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<DECAL_DATA *>::~NiTPointerList<DECAL_DATA *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
