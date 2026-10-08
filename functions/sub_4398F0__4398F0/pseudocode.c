QueuedMagicItem *__thiscall sub_4398F0(QueuedMagicItem *this, char a2)
{
  int v3; // eax
  unsigned int v5; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 0xA); /*0x4398f3*/
  if ( v3 ) /*0x4398f8*/
    InterlockedDecrement((volatile LONG *)(v3 + 0xC)); /*0x4398fe*/
  v5 = *((_DWORD *)this + 8); /*0x439907*/
  *(_DWORD *)this = &QueuedFileEntry::`vftable'; /*0x439908*/
  FormHeapFree(v5); /*0x43990e*/
  QueuedMagicItem::~QueuedMagicItem(this); /*0x439918*/
  if ( (a2 & 1) != 0 ) /*0x439922*/
    FormHeapFree((unsigned int)this); /*0x439925*/
  return this; /*0x43992f*/
}
