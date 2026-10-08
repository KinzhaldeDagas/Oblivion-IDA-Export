_DWORD *__thiscall NiTStringPointerMap<Tile::BuildStorage *>::`scalar deleting destructor'(_DWORD *this, char a2)
{
  NiTStringPointerMap<Tile::BuildStorage *>::~NiTStringPointerMap<Tile::BuildStorage *>(this); /*0x584d93*/
  if ( (a2 & 1) != 0 ) /*0x584d9d*/
    FormHeapFree((unsigned int)this); /*0x584da0*/
  return this; /*0x584daa*/
}
