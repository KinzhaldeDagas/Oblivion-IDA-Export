float *__stdcall sub_6E4000(int a1, char a2, int a3, float a4, int a5)
{
  float *v5; // eax

  v5 = (float *)FormHeapAlloc(0x44u);
  if ( v5 )
    return sub_6EAE20(v5, a2, a4, a5);
  else
    return 0;
}
