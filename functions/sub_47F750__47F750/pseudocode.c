int __cdecl sub_47F750(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  unsigned __int16 v4; // ax

  if ( !a1 || !a2 )
    return 0;
  v2 = sub_700010(a1, (int)dword_B3CD7C);
  v3 = v2;
  if ( v2 && (v4 = sub_47C710((int)v2, a2), v4 != word_A7A160) )
    return *(char *)(0x30 * v4 + v3[0xF] + 0x10);
  else
    return 0;
}
