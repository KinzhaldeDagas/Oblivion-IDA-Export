float *__cdecl sub_6C23C0(float a1, int a2, int a3, float *a4)
{
  if ( a1 >= 1.0 ) /*0x6c23cb*/
  {
    *a4 = *(float *)(a3 + 4); /*0x6c23e6*/
    return a4; /*0x6c23e2*/
  }
  else
  {
    *a4 = *(float *)(a2 + 4); /*0x6c23d8*/
    return (float *)a2; /*0x6c23cd*/
  }
}
