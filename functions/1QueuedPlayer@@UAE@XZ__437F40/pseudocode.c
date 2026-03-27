void __thiscall QueuedPlayer::~QueuedPlayer(QueuedPlayer *this)
{
  int v2; // esi
  int v3; // esi

  v2 = *((_DWORD *)this + 0xF);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 8)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v3 = *((_DWORD *)this + 0xE);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 8)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  QueuedCreature::~QueuedCreature(this);
}
