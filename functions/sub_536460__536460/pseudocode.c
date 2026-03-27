double __cdecl sub_536460(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 0xC);
  else
    v1 = 0;
  if ( !v1 )
    return 1.0;
  v2 = *(_DWORD *)(v1 + 8);
  if ( v2 && (v3 = v2 + 0x14) != 0 )
    return *(float *)(4 * ((*(_DWORD *)(v3 + 0x1C) >> 8) & 0x1F) + 0xB116E0);
  else
    return flt_B116E0[0];
}
