ExtraDroppedItemList *__thiscall ExtraDroppedItemList::`scalar deleting destructor'(
        ExtraDroppedItemList *this,
        char a2)
{
  ExtraDroppedItemList::~ExtraDroppedItemList(this); /*0x42af63*/
  if ( (a2 & 1) != 0 ) /*0x42af6d*/
    FormHeapFree((unsigned int)this); /*0x42af70*/
  return this; /*0x42af7a*/
}
