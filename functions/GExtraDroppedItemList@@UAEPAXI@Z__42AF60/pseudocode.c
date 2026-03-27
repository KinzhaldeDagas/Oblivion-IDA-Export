ExtraDroppedItemList *__thiscall ExtraDroppedItemList::`scalar deleting destructor'(
        ExtraDroppedItemList *this,
        char a2)
{
  ExtraDroppedItemList::~ExtraDroppedItemList(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
