QueuedMagicItem *__thiscall QueuedMagicItem::`scalar deleting destructor'(QueuedMagicItem *this, char a2)
{
  QueuedMagicItem::~QueuedMagicItem(this); /*0x4392c3*/
  if ( (a2 & 1) != 0 ) /*0x4392cd*/
    FormHeapFree((unsigned int)this); /*0x4392d0*/
  return this; /*0x4392da*/
}
