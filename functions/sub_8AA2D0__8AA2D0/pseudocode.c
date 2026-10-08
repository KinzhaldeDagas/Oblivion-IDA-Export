_WORD *__cdecl sub_8AA2D0(_WORD *a1)
{
  _WORD *result; // eax

  if ( a1 ) /*0x8aa2d7*/
  {
    result = sub_8A6740(a1, 1); /*0x8aa2e1*/
    *(_DWORD *)a1 = &off_A97A98; /*0x8aa2e6*/
  }
  return result; /*0x8aa2ec*/
}
