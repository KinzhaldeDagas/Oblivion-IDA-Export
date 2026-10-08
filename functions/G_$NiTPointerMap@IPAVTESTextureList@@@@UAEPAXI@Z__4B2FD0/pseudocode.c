unsigned int *__thiscall NiTPointerMap<unsigned int,TESTextureList *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<unsigned int,TESTextureList *>::~NiTPointerMap<unsigned int,TESTextureList *>(this); /*0x4b2fd3*/
  if ( (a2 & 1) != 0 ) /*0x4b2fdd*/
    FormHeapFree((unsigned int)this); /*0x4b2fe0*/
  return this; /*0x4b2fea*/
}
