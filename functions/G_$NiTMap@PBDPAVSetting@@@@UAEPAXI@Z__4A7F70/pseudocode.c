unsigned int *__thiscall NiTMap<char const *,Setting *>::`scalar deleting destructor'(unsigned int *this, char a2)
{
  NiTMap<char const *,Setting *>::~NiTMap<char const *,Setting *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
