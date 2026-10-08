_DWORD *__cdecl sub_77D1F0(_DWORD *a1)
{
  _DWORD *result; // eax
  bool v2; // zf

  result = a1; /*0x77d1f0*/
  v2 = a1[2] >= 0; /*0x77d1f4*/
  a1[5] = 8; /*0x77d1fb*/
  a1[6] = 1; /*0x77d202*/
  if ( !v2 ) /*0x77d209*/
    a1[5] = 0x18; /*0x77d20b*/
  return result; /*0x77d212*/
}
