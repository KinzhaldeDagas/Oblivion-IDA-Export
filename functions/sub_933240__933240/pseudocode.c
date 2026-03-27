char __cdecl sub_933240(int a1, __int128 *a2, int a3, int *a4, const void **a5)
{
  int v5; // ebx
  _OWORD *v7; // eax
  __int128 v8; // xmm0
  int v9; // ebx
  int v10; // eax
  char v11; // al
  bool v12; // cl
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  char result; // al
  int v17; // [esp+18h] [ebp-28h] BYREF
  bool v18; // [esp+1Ch] [ebp-24h]
  __m128 v19; // [esp+20h] [ebp-20h] BYREF
  float v20[4]; // [esp+30h] [ebp-10h] BYREF

  v5 = a3;
  a5[1] = 0;
  if ( a3 > 0 )
  {
    do
    {
      if ( a5[1] == (const void *)((unsigned int)a5[2] & 0x3FFFFFFF) )
        sub_8A6EE0(a5, 0x10);
      v7 = (char *)*a5 + 0x10 * (_DWORD)a5[1];
      a5[1] = (char *)a5[1] + 1;
      v8 = *a2++;
      --v5;
      *v7 = v8;
    }
    while ( v5 );
  }
  v9 = a1;
  if ( *(_BYTE *)(a1 + 1) )
    sub_92E860(a5, v20, &v19);
  v10 = (int)a5[1];
  if ( v10 > 1 )
    sub_92B640((int)*a5, 0, v10 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0);
  sub_92DCA0(*(float *)(a1 + 4), (int)a5, &v17);
  if ( *(_BYTE *)(a1 + 2) )
  {
    if ( v17 < 0x12C )
      sub_92FBD0((int *)a5, 0.001);
  }
  v11 = 1;
  LOBYTE(v17) = 1;
  v12 = 0;
  while ( !v12 || v11 )
  {
    v13 = (int)a5[1];
    v18 = v11 == 0;
    v14 = 0;
    if ( v13 > 0 )
    {
      v15 = 0;
      do
      {
        *(_DWORD *)((char *)*a5 + v15 + 0xC) = 0;
        ++v14;
        v15 += 0x10;
      }
      while ( v14 < (int)a5[1] );
    }
    a4[2] = 0;
    sub_932D60(a1, (int *)a5, 0, (int)a5[1] + 0xFFFFFFFF, a4);
    sub_930FC0((int)a4, a5);
    sub_92EB50((int)a5);
    sub_92DE30(a4, 0, (int)a5[1] + 0xFFFFFFFF, a1, (float *)&v17);
    sub_92EB50((int)a5);
    v11 = v17;
    v12 = v18;
    v9 = a1;
  }
  result = *(_BYTE *)(v9 + 1);
  if ( result )
    return sub_92EA40(a5, (int *)v20, &v19);
  return result;
}
