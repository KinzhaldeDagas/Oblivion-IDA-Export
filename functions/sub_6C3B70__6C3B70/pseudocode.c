float *__stdcall sub_6C3B70(int a1, int a2, char a3, float a4, int a5)
{
  float *v5; // eax
  float *v7; // eax

  if ( a3 )
  {
    v5 = (float *)FormHeapAlloc(0x58u);
    if ( v5 )
      return sub_6C37D0(v5, a2, a4, a5);
  }
  else
  {
    v7 = (float *)FormHeapAlloc(0x30u);
    if ( v7 )
      return sub_6CBC60(v7, a2, a4, a5);
  }
  return 0;
}
