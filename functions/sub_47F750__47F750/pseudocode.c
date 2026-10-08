int __cdecl sub_47F750(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  unsigned __int16 v4; // ax

  if ( !a1 || !a2 ) /*0x47f75f*/
    return 0; /*0x47f79f*/
  v2 = sub_700010(a1, (int)&stru_B3CD7C); /*0x47f767*/
  v3 = v2; /*0x47f76c*/
  if ( v2 && (v4 = sub_47C710((int)v2, a2), v4 != word_A7A160) ) /*0x47f784*/
    return *(char *)(0x30 * v4 + v3[0xF] + 0x10); /*0x47f797*/
  else
    return 0; /*0x47f787*/
}
