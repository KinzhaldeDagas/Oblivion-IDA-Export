void __thiscall QueuedHelmet::~QueuedHelmet(QueuedHelmet *this)
{
  int v2; // esi
  int v3; // esi
  int v4; // esi

  v2 = *((_DWORD *)this + 0xB);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v3 = *((_DWORD *)this + 0xA);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  v4 = *((_DWORD *)this + 9);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 8)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  QueuedMagicItem::~QueuedMagicItem(this);
}
