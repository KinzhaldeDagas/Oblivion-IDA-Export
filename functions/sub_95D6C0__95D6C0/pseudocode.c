char __cdecl sub_95D6C0(float *a1, float *a2, int a3, int a4)
{
  int v4; // eax
  char v5; // bl
  float *v7; // eax

  v4 = *(_DWORD *)(a4 + 0xE0); /*0x95d6c4*/
  v5 = 0; /*0x95d6cb*/
  if ( v4 >= 0 ) /*0x95d6cf*/
  {
    if ( *(_DWORD *)a3 == 1 && *(_DWORD *)(a3 + 4) == 1 && *(_WORD *)(a3 + 0x24) ) /*0x95d6e0*/
      return 1; /*0x95d6ea*/
    if ( v4 < *(unsigned __int16 *)(a4 + 0xB6) ) /*0x95d6fa*/
    {
      v7 = *(float **)(*(_DWORD *)(a4 + 0xB0) + 4 * v4); /*0x95d702*/
      if ( v7 ) /*0x95d707*/
      {
        if ( NiPick_ProcessSceneObject(a1, a2, a3, v7) ) /*0x95d715*/
          return 1; /*0x95d721*/
      }
    }
  }
  return v5; /*0x95d6e9*/
}
