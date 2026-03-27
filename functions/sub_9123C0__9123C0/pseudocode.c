int __userpurge sub_9123C0@<eax>(double st7_0@<st0>, int **a2, float **a3, int a4, int a5, int a6, int a7)
{
  int *v7; // edx
  int v8; // esi
  float *v10; // ecx
  unsigned __int8 v11; // c0
  unsigned __int8 v12; // c2
  int result; // eax
  __m128 v14; // [esp+10h] [ebp-20h] BYREF
  float v15; // [esp+20h] [ebp-10h]
  int v16; // [esp+24h] [ebp-Ch]
  float v17; // [esp+28h] [ebp-8h]

  v7 = *a2 + 1;
  *a2 = v7;
  v8 = *v7;
  v14 = *(__m128 *)(0x10 * (*v7 + 5) + a5);
  sub_912140(a5, v8);
  v17 = st7_0;
  v10 = *a3;
  *a3 += 4;
  v15 = *v10;
  v16 = *((_DWORD *)v10 + 1);
  if ( v11 | v12 )
  {
    if ( v10[2] > (double)*(float *)&SrcStr && v10[2] - st7_0 > flt_A9CD64 )
    {
      st7_0 = st7_0 + flt_A46B14;
      v17 = st7_0;
    }
  }
  if ( st7_0 > *(float *)&SrcStr && v10[2] < (double)*(float *)&SrcStr && st7_0 - v10[2] > flt_A9CD64 )
  {
    st7_0 = st7_0 - flt_A46B14;
    v17 = st7_0;
  }
  v10[2] = st7_0;
  sub_8F1B60(&v14, a6, a7);
  result = *(_DWORD *)(a5 + 0xB8) + 1;
  *(_DWORD *)(a5 + 0xB8) = result;
  return result;
}
