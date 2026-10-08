OB_stString28_010201A0 *__cdecl sub_6F1670(_DWORD *a1, _DWORD *a2)
{
  OB_stString28_010201A0 *result; // eax

  result = (OB_stString28_010201A0 *)a1; /*0x6f1691*/
  if ( a1 ) /*0x6f16a7*/
  {
    *a1 = *a2; /*0x6f16af*/
    a1[7] = 0xF; /*0x6f16bb*/
    a1[6] = 0; /*0x6f16c2*/
    *((_BYTE *)a1 + 8) = 0; /*0x6f16ca*/
    return OB_stString28_AssignSubstring_010201A0( /*0x6f16ce*/
             (OB_stString28_010201A0 *)(a1 + 1),
             (const OB_stString28_010201A0 *)(a2 + 1),
             0,
             0xFFFFFFFF);
  }
  return result; /*0x6f16d3*/
}
