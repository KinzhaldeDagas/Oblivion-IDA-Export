char __cdecl sub_481890(int a1, float *a2, float *a3, float a4, int a5, char a6)
{
  int v6; // esi

  if ( !a1 ) /*0x481899*/
    return 0; /*0x481915*/
  if ( !a5 || 0.0 == a4 ) /*0x4818af*/
    return 0; /*0x48191a*/
  if ( a6 ) /*0x4818b5*/
  {
    v6 = *(_DWORD *)(a1 + 0x14); /*0x4818b8*/
    if ( v6 ) /*0x4818bd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x4818c3*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x4818d9*/
      *(_DWORD *)(a1 + 0x14) = 0; /*0x4818db*/
    }
    NiPick_ExecuteAndSort((_WORD *)a1, &g_zeroNiPoint3.x, &g_zeroNiPoint3.x, 0); /*0x4818f0*/
  }
  return sub_47FBD0(a1, a2, a3, a4, a5); /*0x481913*/
}
