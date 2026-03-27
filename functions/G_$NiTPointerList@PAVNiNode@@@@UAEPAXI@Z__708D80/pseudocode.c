NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<NiNode *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<NiNode *>::~NiTPointerList<NiNode *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
