_DWORD *__cdecl sub_6F28E0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a1; /*0x6f28e6*/
  if ( a1 == a2 ) /*0x6f28ec*/
    return a3; /*0x6f2929*/
  v4 = a3; /*0x6f28ef*/
  do /*0x6f2921*/
  {
    *v4 = *v3; /*0x6f28f5*/
    v4[1] = v3[1]; /*0x6f28fa*/
    v4[2] = v3[2]; /*0x6f2902*/
    v4[3] = v3[3]; /*0x6f2911*/
    OB_stString28_AssignSubstring_010201A0( /*0x6f2914*/
      (OB_stString28_010201A0 *)(v4 + 4),
      (const OB_stString28_010201A0 *)(v3 + 4),
      0,
      0xFFFFFFFF);
    v3 += 0xB; /*0x6f2919*/
    v4 += 0xB; /*0x6f291c*/
  }
  while ( v3 != a2 ); /*0x6f2921*/
  return v4; /*0x6f2926*/
}
