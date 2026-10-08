// QueuedTreeModel destructor. Releases held object/ref at +0x28, frees queued path at +0x20, then chains to QueuedFileEntry destructor.
QueuedMagicItem *__thiscall sub_439880(QueuedMagicItem *this, char a2)
{
  int v3; // eax
  unsigned int v5; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &QueuedTreeModel::`vftable'; /*0x439883*/
  v3 = *((_DWORD *)this + 0xA); /*0x439889*/
  if ( v3 ) /*0x43988e*/
    InterlockedDecrement((volatile LONG *)(v3 + 4)); /*0x439894*/
  v5 = *((_DWORD *)this + 8); /*0x43989d*/
  *(_DWORD *)this = &QueuedFileEntry::`vftable'; /*0x43989e*/
  FormHeapFree(v5); /*0x4398a4*/
  QueuedMagicItem::~QueuedMagicItem(this); /*0x4398ae*/
  if ( (a2 & 1) != 0 ) /*0x4398b8*/
    FormHeapFree((unsigned int)this); /*0x4398bb*/
  return this; /*0x4398c5*/
}
