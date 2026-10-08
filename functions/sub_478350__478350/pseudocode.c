void __thiscall sub_478350(_DWORD *this, int a2)
{
  int v3; // esi

  v3 = *(this + 0x2E); /*0x478354*/
  if ( v3 != a2 ) /*0x478361*/
  {
    if ( v3 ) /*0x478365*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x47836b*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x478381*/
    }
    *(this + 0x2E) = a2; /*0x478385*/
    if ( a2 ) /*0x47838b*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x478391*/
  }
}
