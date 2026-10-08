char __cdecl sub_933240(int a1, __int128 *a2, int a3, int *a4, const void **a5)
{
  int v5; // ebx
  _OWORD *v7; // eax
  __int128 v8; // xmm0
  int v9; // ebx
  int v10; // eax
  char v11; // al
  bool v12; // cl
  const void *v13; // ecx
  int v14; // eax
  int v15; // ecx
  char result; // al
  int v17; // [esp+18h] [ebp-28h] BYREF
  bool v18; // [esp+1Ch] [ebp-24h]
  __m128 v19; // [esp+20h] [ebp-20h] BYREF
  float v20[4]; // [esp+30h] [ebp-10h] BYREF

  v5 = a3; /*0x93324a*/
  a5[1] = 0; /*0x933254*/
  if ( a3 > 0 ) /*0x93325b*/
  {
    do /*0x933294*/
    {
      if ( a5[1] == (const void *)((unsigned int)a5[2] & 0x3FFFFFFF) ) /*0x93326d*/
        sub_8A6EE0(a5, 0x10); /*0x933272*/
      v7 = (char *)*a5 + 0x10 * (_DWORD)a5[1]; /*0x933284*/
      a5[1] = (char *)a5[1] + 1; /*0x933287*/
      v8 = *a2++; /*0x93328a*/
      --v5; /*0x933290*/
      *v7 = v8; /*0x933291*/
    }
    while ( v5 ); /*0x933294*/
  }
  v9 = a1; /*0x933296*/
  if ( *(_BYTE *)(a1 + 1) ) /*0x933299*/
    sub_92E860(a5, v20, &v19); /*0x9332ab*/
  v10 = (int)a5[1]; /*0x9332b3*/
  if ( v10 > 1 ) /*0x9332b9*/
    sub_92B640((int)*a5, 0, v10 - 1, (int (__cdecl *)(char *, int, __int128 *))sub_92C9B0); /*0x9332c7*/
  sub_92DCA0(*(float *)(a1 + 4), (int)a5, &v17); /*0x9332d9*/
  if ( *(_BYTE *)(a1 + 2) ) /*0x9332de*/
  {
    if ( v17 < 0x12C ) /*0x9332f0*/
      sub_92FBD0((int *)a5, 0.001); /*0x9332f8*/
  }
  v11 = 1; /*0x933303*/
  LOBYTE(v17) = 1; /*0x933305*/
  v12 = 0; /*0x933309*/
  while ( !v12 || v11 ) /*0x933316*/
  {
    v13 = a5[1]; /*0x933318*/
    v18 = v11 == 0; /*0x93331d*/
    v14 = 0; /*0x933324*/
    if ( (int)v13 > 0 ) /*0x933328*/
    {
      v15 = 0; /*0x93332a*/
      do /*0x93333f*/
      {
        *(_DWORD *)((char *)*a5 + v15 + 0xC) = 0; /*0x933332*/
        ++v14; /*0x933339*/
        v15 += 0x10; /*0x93333a*/
      }
      while ( v14 < (int)a5[1] ); /*0x93333f*/
    }
    a4[2] = 0; /*0x933344*/
    sub_932D60(a1, (int *)a5, 0, (int)a5[1] + 0xFFFFFFFF, a4); /*0x933350*/
    sub_930FC0((int)a4, a5); /*0x933357*/
    sub_92EB50((int)a5); /*0x93335d*/
    sub_92DE30(a4, 0, (int)a5[1] + 0xFFFFFFFF, a1, (float *)&v17); /*0x933372*/
    sub_92EB50((int)a5); /*0x933378*/
    v11 = v17; /*0x93337d*/
    v12 = v18; /*0x933381*/
    v9 = a1; /*0x933385*/
  }
  result = *(_BYTE *)(v9 + 1); /*0x93338d*/
  if ( result ) /*0x933392*/
    return sub_92EA40(a5, (int *)v20, &v19); /*0x93339f*/
  return result; /*0x9333a7*/
}
