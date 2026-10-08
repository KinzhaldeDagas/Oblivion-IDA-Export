unsigned int *__thiscall NiTPointerMap<char const *,Tile::BuildStorage *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<char const *,Tile::BuildStorage *>::~NiTPointerMap<char const *,Tile::BuildStorage *>(this); /*0x584d73*/
  if ( (a2 & 1) != 0 ) /*0x584d7d*/
    FormHeapFree((unsigned int)this); /*0x584d80*/
  return this; /*0x584d8a*/
}
