AlchemyItem *__thiscall AlchemyItem::`scalar deleting destructor'(AlchemyItem *this, char a2)
{
  AlchemyItem::~AlchemyItem(this); /*0x412ac3*/
  if ( (a2 & 1) != 0 ) /*0x412acd*/
    FormHeapFree((unsigned int)this); /*0x412ad0*/
  return this; /*0x412ada*/
}
