OB_stString28_010201A0 *__cdecl sub_6F2E30(
        OB_stString28_010201A0 *source,
        OB_stString28_010201A0 *a2,
        OB_stString28_010201A0 *a3)
{
  int v3; // esi
  int v4; // edi

  v3 = (int)source; /*0x6f2e36*/
  if ( source == a2 ) /*0x6f2e3c*/
    return a3; /*0x6f2e6b*/
  v4 = (int)a3; /*0x6f2e3f*/
  do /*0x6f2e63*/
  {
    OB_stString28_AssignSubstring_010201A0( /*0x6f2e4a*/
      (OB_stString28_010201A0 *)v4,
      (const OB_stString28_010201A0 *)v3,
      0,
      0xFFFFFFFF);
    sub_6F2610((char **)(v4 + 0x1C), (char **)(v3 + 0x1C)); /*0x6f2e56*/
    v3 += 0x2C; /*0x6f2e5b*/
    v4 += 0x2C; /*0x6f2e5e*/
  }
  while ( (OB_stString28_010201A0 *)v3 != a2 ); /*0x6f2e63*/
  return (OB_stString28_010201A0 *)v4; /*0x6f2e68*/
}
