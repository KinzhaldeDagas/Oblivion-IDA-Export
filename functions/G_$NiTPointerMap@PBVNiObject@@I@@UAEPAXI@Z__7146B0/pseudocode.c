unsigned int *__thiscall NiTPointerMap<NiObject const *,unsigned int>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<NiObject const *,unsigned int>::~NiTPointerMap<NiObject const *,unsigned int>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
