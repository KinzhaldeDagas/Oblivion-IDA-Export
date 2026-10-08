int __cdecl sub_6F2F30(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2; /*0x6f2f36*/
  if ( a1 == a2 ) /*0x6f2f3c*/
    return a3; /*0x6f2f6b*/
  v4 = a3; /*0x6f2f3f*/
  do /*0x6f2f63*/
  {
    v3 -= 0x2C; /*0x6f2f47*/
    v4 -= 0x2C; /*0x6f2f4a*/
    OB_stString28_AssignSubstring_010201A0( /*0x6f2f50*/
      (OB_stString28_010201A0 *)v4,
      (const OB_stString28_010201A0 *)v3,
      0,
      0xFFFFFFFF);
    sub_6F2610((char **)(v4 + 0x1C), (char **)(v3 + 0x1C)); /*0x6f2f5c*/
  }
  while ( v3 != a1 ); /*0x6f2f63*/
  return v4; /*0x6f2f68*/
}
