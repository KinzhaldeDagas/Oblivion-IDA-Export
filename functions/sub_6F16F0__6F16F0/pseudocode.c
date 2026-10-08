OB_stString28_010201A0 *__cdecl sub_6F16F0(_DWORD *a1, _DWORD *a2)
{
  OB_stString28_010201A0 *result; // eax

  result = (OB_stString28_010201A0 *)a1; /*0x6f1711*/
  if ( a1 ) /*0x6f1727*/
  {
    *a1 = *a2; /*0x6f172f*/
    a1[1] = a2[1]; /*0x6f1734*/
    a1[2] = a2[2]; /*0x6f173a*/
    a1[3] = a2[3]; /*0x6f1740*/
    a1[0xA] = 0xF; /*0x6f174d*/
    a1[9] = 0; /*0x6f1754*/
    *((_BYTE *)a1 + 0x14) = 0; /*0x6f175c*/
    return OB_stString28_AssignSubstring_010201A0( /*0x6f1760*/
             (OB_stString28_010201A0 *)(a1 + 4),
             (const OB_stString28_010201A0 *)(a2 + 4),
             0,
             0xFFFFFFFF);
  }
  return result; /*0x6f1765*/
}
