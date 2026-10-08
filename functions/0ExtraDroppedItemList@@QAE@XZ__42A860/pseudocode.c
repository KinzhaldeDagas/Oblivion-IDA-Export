ExtraDroppedItemList *__thiscall ExtraDroppedItemList::ExtraDroppedItemList(ExtraDroppedItemList *this)
{
  *((_BYTE *)this + 4) = 0x42; /*0x42a864*/
  *((_DWORD *)this + 2) = 0; /*0x42a868*/
  *(_DWORD *)this = &ExtraDroppedItemList::`vftable'; /*0x42a86b*/
  *((_DWORD *)this + 3) = 0; /*0x42a871*/
  *((_DWORD *)this + 4) = 0; /*0x42a874*/
  return this; /*0x42a877*/
}
