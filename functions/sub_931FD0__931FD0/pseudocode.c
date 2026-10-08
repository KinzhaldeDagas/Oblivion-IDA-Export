void __cdecl sub_931FD0(int a1, int *a2, __m128 *a3, __int16 a4, unsigned __int16 *a5, __m128 *a6, float *a7, int a8)
{
  unsigned __int16 *v8; // edi
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  float v15; // [esp+0h] [ebp-10h]
  int v16; // [esp+4h] [ebp-Ch]
  int v17; // [esp+8h] [ebp-8h]
  unsigned __int16 *v18; // [esp+Ch] [ebp-4h]

  if ( a2[2] != 1 ) /*0x931fdd*/
  {
    v16 = *a2; /*0x931ff1*/
    v8 = (unsigned __int16 *)(a2[1] + 8 * a5[1]); /*0x931ffa*/
    v17 = a2[1]; /*0x931ffe*/
    v18 = v8; /*0x932002*/
    do /*0x93209c*/
    {
      if ( *v8 == a4 ) /*0x932018*/
        v15 = 4.0; /*0x93201a*/
      else
        v15 = sub_92D8F0(a1, (float *)(v16 + 0x10 * *v8), a3, a6->m128_f32, a7); /*0x93204d*/
      v9 = *(_DWORD *)(a8 + 4); /*0x932051*/
      v10 = v9 + 1; /*0x932057*/
      v11 = *(_DWORD *)(a8 + 8) & 0x3FFFFFFF; /*0x93205a*/
      if ( v11 < v9 + 1 ) /*0x932061*/
      {
        v12 = 2 * v11; /*0x932063*/
        if ( v10 >= v12 ) /*0x932067*/
          v12 = v9 + 1; /*0x932069*/
        sub_8A6E40((const void **)a8, v12, 8); /*0x93206f*/
      }
      v13 = *(_DWORD *)a8 + 8 * v9; /*0x93207d*/
      *(_DWORD *)(a8 + 4) = v10; /*0x932080*/
      *(_DWORD *)v13 = v8; /*0x932083*/
      *(float *)(v13 + 4) = v15; /*0x932085*/
      v8 = (unsigned __int16 *)(v17 + 8 * *(unsigned __int16 *)(v17 + 8 * v8[2] + 2)); /*0x932095*/
    }
    while ( v8 != v18 ); /*0x93209c*/
    v14 = *(_DWORD *)(a8 + 4); /*0x9320a2*/
    if ( v14 > 1 ) /*0x9320aa*/
      sub_92CC50(*(_DWORD *)a8, 0, v14 - 1, (int (__cdecl *)(char *, int, int *))sub_92CA50); /*0x9320b8*/
    sub_931240(a1, a2, (int)a3, a5, a6, a7, (float **)a8); /*0x9320df*/
  }
}
