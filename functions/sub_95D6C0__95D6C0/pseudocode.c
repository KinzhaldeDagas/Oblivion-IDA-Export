char __cdecl sub_95D6C0(float *a1, float *a2, int a3, int a4)
{
  int v4; // eax
  char v5; // bl
  float *v7; // eax

  v4 = *(_DWORD *)(a4 + 0xE0);
  v5 = 0;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)a3 == 1 && *(_DWORD *)(a3 + 4) == 1 && *(_WORD *)(a3 + 0x24) )
      return 1;
    if ( v4 < *(unsigned __int16 *)(a4 + 0xB6) )
    {
      v7 = *(float **)(*(_DWORD *)(a4 + 0xB0) + 4 * v4);
      if ( v7 )
      {
        if ( sub_95D540(a1, a2, a3, v7) )
          return 1;
      }
    }
  }
  return v5;
}
