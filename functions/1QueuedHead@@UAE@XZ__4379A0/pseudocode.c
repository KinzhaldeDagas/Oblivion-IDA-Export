void __thiscall QueuedHead::~QueuedHead(QueuedHead *this)
{
  int v2; // esi
  int v3; // esi

  v2 = *((_DWORD *)this + 0xA);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v3 = *((_DWORD *)this + 9);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  QueuedMagicItem::~QueuedMagicItem(this);
}
