void __cdecl sub_931FD0(int a1, int *a2, __m128 *a3, __int16 a4, unsigned __int16 *a5, float *a6, float *a7, int a8)
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

  if ( a2[2] != 1 )
  {
    v16 = *a2;
    v8 = (unsigned __int16 *)(a2[1] + 8 * a5[1]);
    v17 = a2[1];
    v18 = v8;
    do
    {
      if ( *v8 == a4 )
        v15 = 4.0;
      else
        v15 = sub_92D8F0(a1, (float *)(v16 + 0x10 * *v8), a3, a6, a7);
      v9 = *(_DWORD *)(a8 + 4);
      v10 = v9 + 1;
      v11 = *(_DWORD *)(a8 + 8) & 0x3FFFFFFF;
      if ( v11 < v9 + 1 )
      {
        v12 = 2 * v11;
        if ( v10 >= v12 )
          v12 = v9 + 1;
        sub_8A6E40((const void **)a8, v12, 8);
      }
      v13 = *(_DWORD *)a8 + 8 * v9;
      *(_DWORD *)(a8 + 4) = v10;
      *(_DWORD *)v13 = v8;
      *(float *)(v13 + 4) = v15;
      v8 = (unsigned __int16 *)(v17 + 8 * *(unsigned __int16 *)(v17 + 8 * v8[2] + 2));
    }
    while ( v8 != v18 );
    v14 = *(_DWORD *)(a8 + 4);
    if ( v14 > 1 )
      sub_92CC50(*(_DWORD *)a8, 0, v14 - 1, (int (__cdecl *)(char *, int, int *))sub_92CA50);
    sub_931240(a1, a2, (int)a3, a5, a6, a7, (float **)a8);
  }
}
