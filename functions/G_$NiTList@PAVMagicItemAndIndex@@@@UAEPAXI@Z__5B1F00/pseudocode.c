NiTPointerList__BSImageSpaceShader *__thiscall NiTList<MagicItemAndIndex *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<MagicItemAndIndex *>::~NiTList<MagicItemAndIndex *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
