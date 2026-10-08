// Strong-own the exact caster/source root at ShadowSceneLight+0x130.
void __thiscall sub_7C5A10(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x4C); /*0x7c5a14*/
  if ( v3 != a2 ) /*0x7c5a21*/
  {
    if ( v3 ) /*0x7c5a25*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7c5a2b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7c5a41*/
    }
    *(this + 0x4C) = a2; /*0x7c5a45*/
    if ( a2 ) /*0x7c5a4b*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x7c5a51*/
  }
}
