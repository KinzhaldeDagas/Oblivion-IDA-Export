unsigned int *__thiscall NiTPointerMap<int,NiPointer<NiAVObject>>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<int,NiPointer<NiAVObject>>::~NiTPointerMap<int,NiPointer<NiAVObject>>(this); /*0x6ade33*/
  if ( (a2 & 1) != 0 ) /*0x6ade3d*/
    FormHeapFree((unsigned int)this); /*0x6ade40*/
  return this; /*0x6ade4a*/
}
