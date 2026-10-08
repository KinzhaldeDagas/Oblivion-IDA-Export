_DWORD *__cdecl sub_6F28A0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a1; /*0x6f28a6*/
  if ( a1 == a2 ) /*0x6f28ac*/
    return a3; /*0x6f28d7*/
  v4 = a3; /*0x6f28af*/
  do /*0x6f28cf*/
  {
    *v4 = *v3; /*0x6f28c0*/
    OB_stString28_AssignSubstring_010201A0( /*0x6f28c2*/
      (OB_stString28_010201A0 *)(v4 + 1),
      (const OB_stString28_010201A0 *)(v3 + 1),
      0,
      0xFFFFFFFF);
    v3 += 8; /*0x6f28c7*/
    v4 += 8; /*0x6f28ca*/
  }
  while ( v3 != a2 ); /*0x6f28cf*/
  return v4; /*0x6f28d4*/
}
