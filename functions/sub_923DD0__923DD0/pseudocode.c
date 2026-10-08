_DWORD *__cdecl sub_923DD0(int a1, unsigned int a2, int a3, const void **a4)
{
  unsigned int v5; // esi
  _DWORD *v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebp
  int v11; // edx
  const void **v12; // eax
  int v13; // ecx
  _DWORD *v14; // edx
  double v15; // st7
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  _DWORD *result; // eax
  int v20; // [esp+Ch] [ebp-18h] BYREF
  int v21; // [esp+10h] [ebp-14h]
  _DWORD v22[4]; // [esp+14h] [ebp-10h] BYREF
  float v23; // [esp+28h] [ebp+4h]
  BOOL v24; // [esp+2Ch] [ebp+8h]
  _DWORD *v25; // [esp+2Ch] [ebp+8h]
  unsigned int v26; // [esp+30h] [ebp+Ch]

  v5 = a2; /*0x923de0*/
  v20 = *(_DWORD *)(a1 + 0x48); /*0x923de4*/
  v6 = *(_DWORD **)(a1 + 8); /*0x923dee*/
  v26 = a2 + 4 * a3; /*0x923df1*/
  if ( a2 < v26 ) /*0x923df5*/
  {
    do /*0x923f14*/
    {
      v7 = *(_DWORD *)(*(_DWORD *)v5 + 0x24); /*0x923e05*/
      v8 = *(_DWORD *)(*(_DWORD *)(v7 + 4) + 0x50); /*0x923e0b*/
      v9 = *(_DWORD *)(*(_DWORD *)(v7 + 8) + 0x50); /*0x923e16*/
      v10 = (_DWORD *)(v7 + 4); /*0x923e1c*/
      v8 += 0x10; /*0x923e1f*/
      v9 += 0x10; /*0x923e22*/
      v24 = *(_BYTE *)(*(_DWORD *)v5 + 0x18) == 4; /*0x923e25*/
      v6[5] = *(_DWORD *)(a1 + 0xC) + *(_DWORD *)(v8 - 8); /*0x923e2f*/
      v11 = *(_DWORD *)(a1 + 0xC) + *(_DWORD *)(v9 - 8); /*0x923e35*/
      v6[7] = v8; /*0x923e38*/
      v6[8] = v9; /*0x923e3b*/
      v6[6] = v11; /*0x923e3e*/
      v6[9] = *(_DWORD *)v5; /*0x923e43*/
      v6[0xA] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v5 + 0x24) + 0x18); /*0x923e4e*/
      v12 = a4; /*0x923e51*/
      if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x923e63*/
      {
        sub_8A6EE0(a4, 0xC); /*0x923e68*/
        v12 = a4; /*0x923e6d*/
      }
      v13 = (int)*v12 + 0xC * (_DWORD)v12[1]; /*0x923e7c*/
      v12[1] = (char *)v12[1] + 1; /*0x923e83*/
      *(_DWORD *)v13 = *(_DWORD *)v5; /*0x923e8f*/
      v14 = (_DWORD *)(0x10 * v24 + a1 + 0x2C); /*0x923e91*/
      *(_DWORD *)(v13 + 4) = *v14; /*0x923e97*/
      v15 = *(float *)(*v10 + 0x34); /*0x923e9d*/
      v23 = *(float *)(v10[1] + 0x34); /*0x923ea6*/
      v25 = v14; /*0x923eae*/
      if ( v15 >= v23 ) /*0x923eb7*/
        v15 = v23; /*0x923ebb*/
      *(float *)(v13 + 8) = v15; /*0x923ebf*/
      v16 = *v14; /*0x923ec2*/
      v17 = *(_DWORD *)v5; /*0x923ec4*/
      v21 = v16; /*0x923ec6*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, int *))(**(_DWORD **)(v17 + 0xC) + 0x1C))( /*0x923ed5*/
        *(_DWORD *)(v17 + 0xC),
        v6,
        &v20);
      v18 = v21; /*0x923edc*/
      *(_DWORD *)(a1 + 0x48) = v20; /*0x923ee4*/
      *v25 = v18; /*0x923ee7*/
      (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(*(_DWORD *)v5 + 0xC) + 0x20))( /*0x923ef5*/
        *(_DWORD *)(*(_DWORD *)v5 + 0xC),
        v22);
      v5 += 4; /*0x923f0c*/
      *(_DWORD *)(a1 + 0x4C) += 4 * v22[3]; /*0x923f11*/
    }
    while ( v5 < v26 ); /*0x923f14*/
  }
  result = *(_DWORD **)(a1 + 0x2C); /*0x923f1b*/
  *result = 0x400; /*0x923f1f*/
  **(_DWORD **)(a1 + 0x3C) = 0x400; /*0x923f29*/
  return result; /*0x923f1e*/
}
