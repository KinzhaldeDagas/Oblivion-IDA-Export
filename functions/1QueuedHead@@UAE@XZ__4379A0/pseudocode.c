void __thiscall QueuedHead::~QueuedHead(QueuedHead *this)
{
  int v2; // esi
  int v3; // esi

  v2 = *((_DWORD *)this + 0xA); /*0x4379ca*/
  if ( v2 ) /*0x4379dd*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x4379e3*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4379f5*/
  }
  v3 = *((_DWORD *)this + 9); /*0x4379f7*/
  if ( v3 ) /*0x437a01*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x437a07*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x437a19*/
  }
  QueuedMagicItem::~QueuedMagicItem(this); /*0x437a25*/
}
