void __thiscall QueuedPlayer::~QueuedPlayer(QueuedPlayer *this)
{
  int v2; // esi
  int v3; // esi

  v2 = *((_DWORD *)this + 0xF); /*0x437f6a*/
  if ( v2 ) /*0x437f7d*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 8)) ) /*0x437f83*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x437f95*/
  }
  v3 = *((_DWORD *)this + 0xE); /*0x437f97*/
  if ( v3 ) /*0x437fa1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 8)) ) /*0x437fa7*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x437fb9*/
  }
  QueuedCreature::~QueuedCreature(this); /*0x437fc5*/
}
