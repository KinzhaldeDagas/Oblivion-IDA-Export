char **__cdecl sub_6F31D0(OB_stString28_010201A0 *a1, int a2, OB_stString28_010201A0 *source)
{
  int i; // esi
  char **result; // eax

  for ( i = (int)a1; i != a2; i += 0x2C ) /*0x6f31dc*/
  {
    OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)i, source, 0, 0xFFFFFFFF); /*0x6f31ee*/
    result = sub_6F2610((char **)(i + 0x1C), (char **)&source[1]); /*0x6f31f7*/
  }
  return result; /*0x6f3205*/
}
