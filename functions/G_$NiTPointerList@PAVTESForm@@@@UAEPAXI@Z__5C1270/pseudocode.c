NiTPointerList__BSImageSpaceShader *__thiscall NiTPointerList<TESForm *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTPointerList<TESForm *>::~NiTPointerList<TESForm *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
