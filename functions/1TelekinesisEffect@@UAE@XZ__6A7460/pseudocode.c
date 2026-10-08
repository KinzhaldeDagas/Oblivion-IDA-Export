void __thiscall TelekinesisEffect::~TelekinesisEffect(ActiveEffect *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 0xF); /*0x6a7489*/
  if ( v2 ) /*0x6a7496*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6a749c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6a74b2*/
  }
  ActiveEffect::~ActiveEffect(this); /*0x6a74be*/
}
