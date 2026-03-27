QueuedMagicItem *__thiscall sub_439350(QueuedMagicItem *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 8);
  *(_DWORD *)this = &QueuedFileEntry::`vftable';
  FormHeapFree(v4);
  QueuedMagicItem::~QueuedMagicItem(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
