unsigned int *__thiscall NiTPointerMap<unsigned int,TESGrassAreaParam * *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,TESGrassAreaParam * *>::~NiTPointerMap<unsigned int,TESGrassAreaParam * *>(this); /*0x4c4be3*/
  if ( (a2 & 1) != 0 ) /*0x4c4bed*/
    FormHeapFree((unsigned int)this); /*0x4c4bf0*/
  return this; /*0x4c4bfa*/
}
