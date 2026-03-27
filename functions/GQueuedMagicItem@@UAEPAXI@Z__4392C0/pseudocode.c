QueuedMagicItem *__thiscall QueuedMagicItem::`scalar deleting destructor'(QueuedMagicItem *this, char a2)
{
  QueuedMagicItem::~QueuedMagicItem(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
