double __cdecl sub_536460(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax

  if ( a1 ) /*0x536466*/
    v1 = *(_DWORD *)(a1 + 0xC); /*0x536468*/
  else
    v1 = 0; /*0x53646d*/
  if ( !v1 ) /*0x536471*/
    return 1.0; /*0x5364a0*/
  v2 = *(_DWORD *)(v1 + 8); /*0x536473*/
  if ( v2 && (v3 = v2 + 0x14) != 0 ) /*0x53647d*/
    return *(float *)(4 * ((*(_DWORD *)(v3 + 0x1C) >> 8) & 0x1F) + 0xB116E0); /*0x536488*/
  else
    return flt_B116E0[0]; /*0x536498*/
}
