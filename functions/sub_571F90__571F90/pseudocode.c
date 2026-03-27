float *__cdecl sub_571F90(char a1)
{
  float *result; // eax
  float *v2; // eax

  result = (float *)dword_B3A6A4;
  if ( !dword_B3A6A4 )
  {
    if ( a1 )
    {
      v2 = (float *)FormHeapAlloc(0x15F0u);
      if ( v2 )
      {
        result = sub_571E80(v2);
        dword_B3A6A4 = (int)result;
      }
      else
      {
        dword_B3A6A4 = 0;
        return 0;
      }
    }
  }
  return result;
}
