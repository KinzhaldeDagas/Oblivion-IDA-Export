double __cdecl sub_6BB4D0(float a1, float *a2, int a3, int a4, unsigned __int8 a5)
{
  int v6; // [esp+Ch] [ebp-14h]

  if ( !a4 )
    return flt_B3C220;
  if ( *a2 > (double)a1 )
    return a2[1];
  if ( *(float *)((char *)a2 + a5 * (a4 - 1)) < (double)a1 )
    return *(float *)((char *)a2 + a5 * (a4 - 1) + 4);
  v6 = a4;
  a4 = 0;
  return sub_6BB270(a1, a2, a3, v6, &a4, a5);
}
