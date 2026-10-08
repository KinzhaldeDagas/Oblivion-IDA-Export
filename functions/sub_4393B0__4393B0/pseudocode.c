// QueuedModel scalar deleting destructor/release path for file-backed queued model resources.
QueuedMagicItem *__thiscall sub_4393B0(QueuedMagicItem *this, char a2)
{
  int v3; // eax
  unsigned int v5; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 0xA); /*0x4393b3*/
  if ( v3 ) /*0x4393b8*/
    InterlockedDecrement((volatile LONG *)(v3 + 4)); /*0x4393be*/
  v5 = *((_DWORD *)this + 8); /*0x4393c7*/
  *(_DWORD *)this = &QueuedFileEntry::`vftable'; /*0x4393c8*/
  FormHeapFree(v5); /*0x4393ce*/
  QueuedMagicItem::~QueuedMagicItem(this); /*0x4393d8*/
  if ( (a2 & 1) != 0 ) /*0x4393e2*/
    FormHeapFree((unsigned int)this); /*0x4393e5*/
  return this; /*0x4393ef*/
}
