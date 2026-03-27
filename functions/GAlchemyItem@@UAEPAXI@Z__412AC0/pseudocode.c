AlchemyItem *__thiscall AlchemyItem::`scalar deleting destructor'(AlchemyItem *this, char a2)
{
  AlchemyItem::~AlchemyItem(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
