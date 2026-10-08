_DWORD *__cdecl sub_6EDBD0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a2; /*0x6edbd6*/
  if ( a1 == a2 ) /*0x6edbdc*/
    return a3; /*0x6edc0b*/
  v4 = a3; /*0x6edbdf*/
  do /*0x6edc03*/
  {
    v3 += 0xFFFFFFF3; /*0x6edbe3*/
    v4 += 0xFFFFFFF3; /*0x6edbe6*/
    FaceGenMatrix_Assign((FaceGenMatrix *)v4, (const FaceGenMatrix *)v3); /*0x6edbec*/
    OB_stString28_AssignSubstring_010201A0( /*0x6edbfc*/
      (OB_stString28_010201A0 *)(v4 + 6),
      (const OB_stString28_010201A0 *)(v3 + 6),
      0,
      0xFFFFFFFF);
  }
  while ( v3 != a1 ); /*0x6edc03*/
  return v4; /*0x6edc08*/
}
