char __stdcall sub_77C370(int a1)
{
  Atmosphere *v2; // ecx
  int v3; // esi

  if ( !a1 ) /*0x77c377*/
    return 0; /*0x77c379*/
  v2 = *(Atmosphere **)(a1 + 0xBC); /*0x77c37f*/
  if ( v2 ) /*0x77c387*/
  {
    Shared_GetPointerAtOffset08(v2); /*0x77c38a*/
    v3 = *(_DWORD *)(a1 + 0xBC); /*0x77c38f*/
    if ( v3 ) /*0x77c397*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x77c39d*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x77c3b3*/
      *(_DWORD *)(a1 + 0xBC) = 0; /*0x77c3b5*/
    }
  }
  return 1; /*0x77c37b*/
}
