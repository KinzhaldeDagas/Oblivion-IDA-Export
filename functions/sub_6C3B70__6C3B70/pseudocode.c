float *__stdcall sub_6C3B70(int a1, char a2, char a3, float a4, int a5)
{
  float *v5; // eax
  float *v7; // eax

  if ( a3 ) /*0x6c3b95*/
  {
    v5 = (float *)FormHeapAlloc(0x58u); /*0x6c3b99*/
    if ( v5 ) /*0x6c3baf*/
      return sub_6C37D0(v5, a2, a4, a5); /*0x6c3bd9*/
  }
  else
  {
    v7 = (float *)FormHeapAlloc(0x30u); /*0x6c3bde*/
    if ( v7 ) /*0x6c3bf4*/
      return sub_6CBC60(v7, a2, a4, a5); /*0x6c3c1e*/
  }
  return 0; /*0x6c3bca*/
}
