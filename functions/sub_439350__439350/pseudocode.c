QueuedMagicItem *__thiscall sub_439350(QueuedMagicItem *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 8); /*0x439356*/
  *(_DWORD *)this = &QueuedFileEntry::`vftable'; /*0x439357*/
  FormHeapFree(v4); /*0x43935d*/
  QueuedMagicItem::~QueuedMagicItem(this); /*0x439367*/
  if ( (a2 & 1) != 0 ) /*0x439371*/
    FormHeapFree((unsigned int)this); /*0x439374*/
  return this; /*0x43937e*/
}
