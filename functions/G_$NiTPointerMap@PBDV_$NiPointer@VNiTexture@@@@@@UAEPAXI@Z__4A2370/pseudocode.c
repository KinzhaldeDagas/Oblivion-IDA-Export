unsigned int *__thiscall NiTPointerMap<char const *,NiPointer<NiTexture>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiPointer<NiTexture>>::~NiTPointerMap<char const *,NiPointer<NiTexture>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
