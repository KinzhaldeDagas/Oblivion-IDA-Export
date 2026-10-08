_DWORD *__cdecl sub_6F2930(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v4; // edi
  int v5; // eax

  v3 = a2; /*0x6f2936*/
  if ( a1 == a2 ) /*0x6f293c*/
    return a3; /*0x6f2968*/
  v4 = a3; /*0x6f293f*/
  do /*0x6f2960*/
  {
    v5 = *(_DWORD *)(v3 - 0x20); /*0x6f2943*/
    v3 -= 0x20; /*0x6f2948*/
    v4 += 0xFFFFFFF8; /*0x6f2950*/
    *v4 = v5; /*0x6f2957*/
    OB_stString28_AssignSubstring_010201A0( /*0x6f2959*/
      (OB_stString28_010201A0 *)(v4 + 1),
      (const OB_stString28_010201A0 *)(v3 + 4),
      0,
      0xFFFFFFFF);
  }
  while ( v3 != a1 ); /*0x6f2960*/
  return v4; /*0x6f2965*/
}
