OB_stString28_010201A0 *__cdecl sub_6F2460(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  OB_stString28_010201A0 *result; // eax

  for ( i = a1; i != a2; i += 8 ) /*0x6f246c*/
  {
    *i = *a3; /*0x6f2481*/
    result = OB_stString28_AssignSubstring_010201A0( /*0x6f2483*/
               (OB_stString28_010201A0 *)(i + 1),
               (const OB_stString28_010201A0 *)(a3 + 1),
               0,
               0xFFFFFFFF);
  }
  return result; /*0x6f2491*/
}
