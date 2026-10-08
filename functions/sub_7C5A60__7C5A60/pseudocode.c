void __thiscall sub_7C5A60(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x50); /*0x7c5a64*/
  if ( v3 != a2 ) /*0x7c5a71*/
  {
    if ( v3 ) /*0x7c5a75*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7c5a7b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7c5a91*/
    }
    *(this + 0x50) = a2; /*0x7c5a95*/
    if ( a2 ) /*0x7c5a9b*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x7c5aa1*/
  }
}
