void __thiscall QueuedCreature::~QueuedCreature(QueuedCreature *this)
{
  int v2; // esi
  int v3; // esi
  int v4; // eax
  int v5; // esi

  v2 = *((_DWORD *)this + 0xC);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 8)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v3 = *((_DWORD *)this + 0xB);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  v4 = *((_DWORD *)this + 0xA);
  if ( v4 )
    InterlockedDecrement((volatile LONG *)(v4 + 4));
  v5 = *((_DWORD *)this + 9);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 8)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  QueuedMagicItem::~QueuedMagicItem(this);
}
