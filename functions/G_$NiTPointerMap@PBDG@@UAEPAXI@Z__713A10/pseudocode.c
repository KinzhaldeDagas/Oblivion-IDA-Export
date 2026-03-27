unsigned int *__thiscall NiTPointerMap<char const *,unsigned short>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,unsigned short>::~NiTPointerMap<char const *,unsigned short>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
