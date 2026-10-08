unsigned int *__thiscall NiTPointerMap<char const *,NiPointer<NiTexture>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,NiPointer<NiTexture>>::~NiTPointerMap<char const *,NiPointer<NiTexture>>(this); /*0x4a2373*/
  if ( (a2 & 1) != 0 ) /*0x4a237d*/
    FormHeapFree((unsigned int)this); /*0x4a2380*/
  return this; /*0x4a238a*/
}
