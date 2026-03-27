char *__thiscall sub_94D8B0(void *this)
{
  const void **v2; // eax
  const void **v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // eax
  const void **v8; // esi
  int v9; // ebp
  int v10; // eax
  int v11; // eax
  char *v12; // eax
  char *v13; // eax
  int v14; // esi
  int v15; // ebx
  int v16; // eax
  const void **v17; // esi
  int v18; // ebp
  int v19; // eax
  int v20; // eax
  char *v21; // edx
  char *v22; // eax
  int v23; // esi
  int v24; // ebx
  int v25; // eax
  const void **v26; // esi
  int v27; // ebp
  int v28; // eax
  int v29; // eax
  char *v30; // ecx
  char *v31; // eax
  int v32; // esi
  int v33; // ebx
  int v34; // eax
  const void **v35; // esi
  int v36; // edi
  int v37; // eax
  int v38; // eax
  char *v39; // eax
  char *result; // eax

  v2 = (const void **)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
  v3 = 0;
  if ( v2 )
  {
    *v2 = 0;
    v2[1] = 0;
    v2[2] = (const void *)0x80000000;
    v2[3] = 0;
    v2[4] = 0;
    v2[5] = (const void *)0x80000000;
    v3 = v2;
  }
  *((_DWORD *)this + 0x14) = v3;
  if ( ((unsigned int)v3[2] & 0x3FFFFFFF) < 5 )
  {
    v4 = 2 * ((unsigned int)v3[2] & 0x3FFFFFFF);
    if ( v4 <= 5 )
      v4 = 5;
    sub_8A6E40(v3, v4, 0x10);
  }
  v3[1] = (const void *)5;
  *(_OWORD *)(**((_DWORD **)this + 0x14) + 0x40) = *((_OWORD *)this + 7);
  sub_94D600((__m128 *)this, **((__m128 ***)this + 0x14));
  v5 = *((_DWORD *)this + 0x14);
  v6 = *(_DWORD *)(v5 + 0x10);
  v7 = *(_DWORD *)(v5 + 0x14);
  v8 = (const void **)(v5 + 0xC);
  v9 = v6 + 1;
  v10 = v7 & 0x3FFFFFFF;
  if ( v10 < v6 + 1 )
  {
    v11 = 2 * v10;
    if ( v9 >= v11 )
      v11 = v6 + 1;
    sub_8A6E40(v8, v11, 0xC);
  }
  v12 = (char *)*v8;
  v8[1] = (const void *)v9;
  v13 = &v12[0xC * v6];
  *(_DWORD *)v13 = 2;
  *((_DWORD *)v13 + 1) = 4;
  *((_DWORD *)v13 + 2) = 3;
  v14 = *((_DWORD *)this + 0x14);
  v15 = *(_DWORD *)(v14 + 0x10);
  v16 = *(_DWORD *)(v14 + 0x14);
  v17 = (const void **)(v14 + 0xC);
  v18 = v15 + 1;
  v19 = v16 & 0x3FFFFFFF;
  if ( v19 < v15 + 1 )
  {
    v20 = 2 * v19;
    if ( v18 >= v20 )
      v20 = v15 + 1;
    sub_8A6E40(v17, v20, 0xC);
  }
  v21 = (char *)*v17;
  v17[1] = (const void *)v18;
  v22 = &v21[0xC * v15];
  *(_DWORD *)v22 = 0;
  *((_DWORD *)v22 + 1) = 4;
  *((_DWORD *)v22 + 2) = 2;
  v23 = *((_DWORD *)this + 0x14);
  v24 = *(_DWORD *)(v23 + 0x10);
  v25 = *(_DWORD *)(v23 + 0x14);
  v26 = (const void **)(v23 + 0xC);
  v27 = v24 + 1;
  v28 = v25 & 0x3FFFFFFF;
  if ( v28 < v24 + 1 )
  {
    v29 = 2 * v28;
    if ( v27 >= v29 )
      v29 = v24 + 1;
    sub_8A6E40(v26, v29, 0xC);
  }
  v30 = (char *)*v26;
  v26[1] = (const void *)v27;
  v31 = &v30[0xC * v24];
  *(_DWORD *)v31 = 1;
  *((_DWORD *)v31 + 1) = 4;
  *((_DWORD *)v31 + 2) = 0;
  v32 = *((_DWORD *)this + 0x14);
  v33 = *(_DWORD *)(v32 + 0x10);
  v34 = *(_DWORD *)(v32 + 0x14);
  v35 = (const void **)(v32 + 0xC);
  v36 = v33 + 1;
  v37 = v34 & 0x3FFFFFFF;
  if ( v37 < v33 + 1 )
  {
    v38 = 2 * v37;
    if ( v36 >= v38 )
      v38 = v33 + 1;
    sub_8A6E40(v35, v38, 0xC);
  }
  v39 = (char *)*v35;
  v35[1] = (const void *)v36;
  result = &v39[0xC * v33];
  *(_DWORD *)result = 3;
  *((_DWORD *)result + 1) = 4;
  *((_DWORD *)result + 2) = 1;
  return result;
}
