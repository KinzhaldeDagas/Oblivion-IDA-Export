unsigned int *__thiscall NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::~NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
