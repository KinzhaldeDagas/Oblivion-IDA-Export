_DWORD *__cdecl sub_6F2970(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // eax

  v3 = a2; /*0x6f2976*/
  if ( a1 == a2 ) /*0x6f297c*/
    return a3; /*0x6f29ba*/
  v4 = a3; /*0x6f297f*/
  do /*0x6f29b2*/
  {
    v5 = v3[0xFFFFFFF5]; /*0x6f2983*/
    v3 += 0xFFFFFFF5; /*0x6f2986*/
    v4 += 0xFFFFFFF5; /*0x6f2989*/
    *v4 = v5; /*0x6f298c*/
    v4[1] = v3[1]; /*0x6f2991*/
    v4[2] = v3[2]; /*0x6f2999*/
    v4[3] = v3[3]; /*0x6f29a8*/
    OB_stString28_AssignSubstring_010201A0( /*0x6f29ab*/
      (OB_stString28_010201A0 *)(v4 + 4),
      (const OB_stString28_010201A0 *)(v3 + 4),
      0,
      0xFFFFFFFF);
  }
  while ( v3 != a1 ); /*0x6f29b2*/
  return v4; /*0x6f29b7*/
}
