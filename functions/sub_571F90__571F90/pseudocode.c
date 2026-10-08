float *__cdecl sub_571F90(char a1)
{
  float *result; // eax
  float *v2; // eax

  result = (float *)unk_B3A6A4; /*0x571fb1*/
  if ( !unk_B3A6A4 ) /*0x571fb1*/
  {
    if ( a1 ) /*0x571fbe*/
    {
      v2 = (float *)FormHeapAlloc(0x15F0u); /*0x571fc5*/
      if ( v2 ) /*0x571fdb*/
      {
        result = sub_571E80(v2); /*0x571fdf*/
        unk_B3A6A4 = (int)result; /*0x571fe4*/
      }
      else
      {
        unk_B3A6A4 = 0; /*0x571ffb*/
        return 0; /*0x571ff9*/
      }
    }
  }
  return result; /*0x571fe9*/
}
