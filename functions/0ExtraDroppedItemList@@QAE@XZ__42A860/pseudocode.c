ExtraDroppedItemList *__thiscall ExtraDroppedItemList::ExtraDroppedItemList(ExtraDroppedItemList *this)
{
  *((_BYTE *)this + 4) = 0x42;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraDroppedItemList::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  return this;
}
