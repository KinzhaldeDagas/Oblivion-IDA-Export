OB_stString28_010201A0 *__cdecl sub_6F24A0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  OB_stString28_010201A0 *result; // eax

  for ( i = a1; i != a2; i += 0xB ) /*0x6f24ac*/
  {
    *i = *a3; /*0x6f24b9*/
    i[1] = a3[1]; /*0x6f24be*/
    i[2] = a3[2]; /*0x6f24c6*/
    i[3] = a3[3]; /*0x6f24d2*/
    result = OB_stString28_AssignSubstring_010201A0( /*0x6f24d5*/
               (OB_stString28_010201A0 *)(i + 4),
               (const OB_stString28_010201A0 *)(a3 + 4),
               0,
               0xFFFFFFFF);
  }
  return result; /*0x6f24e3*/
}
