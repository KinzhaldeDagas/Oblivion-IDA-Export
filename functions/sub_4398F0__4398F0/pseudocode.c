QueuedMagicItem *__thiscall sub_4398F0(QueuedMagicItem *this, char a2)
{
  int v3; // eax
  unsigned int v5; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 0xA);
  if ( v3 )
    InterlockedDecrement((volatile LONG *)(v3 + 0xC));
  v5 = *((_DWORD *)this + 8);
  *(_DWORD *)this = &QueuedFileEntry::`vftable';
  FormHeapFree(v5);
  QueuedMagicItem::~QueuedMagicItem(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
