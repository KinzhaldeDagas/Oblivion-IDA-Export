unsigned int *__thiscall NiTMap<char const *,TESForm *>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTMap<char const *,TESForm *>::~NiTMap<char const *,TESForm *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
