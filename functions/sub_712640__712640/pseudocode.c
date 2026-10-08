unsigned int __stdcall sub_712640(int *a1)
{
  int v1; // edx
  unsigned int result; // eax
  unsigned int v3; // edi
  unsigned int i; // esi
  int v5; // ecx

  v1 = *a1; /*0x71264b*/
  *((_WORD *)a1 + 0xC) = a1[6] & 0xFFE1 | 0xE; /*0x712655*/
  result = (*(int (**)(void))(v1 + 8))(); /*0x71265d*/
  v3 = result; /*0x71265f*/
  if ( result ) /*0x712663*/
  {
    result = *(unsigned __int16 *)(result + 0xB6); /*0x712665*/
    for ( i = 0; result > i; ++i ) /*0x712671*/
    {
      v5 = *(_DWORD *)(v3 + 0xB0); /*0x712677*/
      if ( *(_DWORD *)(v5 + 4 * i) ) /*0x71267d*/
        sub_712640(*(int **)(v5 + 4 * i)); /*0x712687*/
      result = *(unsigned __int16 *)(v3 + 0xB6); /*0x71268c*/
    }
  }
  return result; /*0x71269b*/
}
