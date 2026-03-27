NiTPointerList__BSImageSpaceShader *__thiscall NiTList<TESObjectREFR *>::`scalar deleting destructor'(
        NiTPointerList__BSImageSpaceShader *this,
        char a2)
{
  NiTList<TESObjectREFR *>::~NiTList<TESObjectREFR *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
