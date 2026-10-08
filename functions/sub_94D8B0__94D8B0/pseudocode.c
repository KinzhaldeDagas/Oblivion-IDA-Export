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

  v2 = (const void **)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x94d8c2*/
  v3 = 0; /*0x94d8c5*/
  if ( v2 ) /*0x94d8c9*/
  {
    *v2 = 0; /*0x94d8cb*/
    v2[1] = 0; /*0x94d8cd*/
    v2[2] = (const void *)0x80000000; /*0x94d8d5*/
    v2[3] = 0; /*0x94d8d8*/
    v2[4] = 0; /*0x94d8db*/
    v2[5] = (const void *)0x80000000; /*0x94d8de*/
    v3 = v2; /*0x94d8e1*/
  }
  *((_DWORD *)this + 0x14) = v3; /*0x94d8e3*/
  if ( ((unsigned int)v3[2] & 0x3FFFFFFF) < 5 ) /*0x94d8f1*/
  {
    v4 = 2 * ((unsigned int)v3[2] & 0x3FFFFFFF); /*0x94d8f3*/
    if ( v4 <= 5 ) /*0x94d8f8*/
      v4 = 5; /*0x94d8fa*/
    sub_8A6E40(v3, v4, 0x10); /*0x94d903*/
  }
  v3[1] = (const void *)5; /*0x94d90b*/
  *(_OWORD *)(**((_DWORD **)this + 0x14) + 0x40) = *((_OWORD *)this + 7); /*0x94d91b*/
  sub_94D600((__m128 *)this, **((__m128 ***)this + 0x14)); /*0x94d927*/
  v5 = *((_DWORD *)this + 0x14); /*0x94d92c*/
  v6 = *(_DWORD *)(v5 + 0x10); /*0x94d92f*/
  v7 = *(_DWORD *)(v5 + 0x14); /*0x94d932*/
  v8 = (const void **)(v5 + 0xC); /*0x94d935*/
  v9 = v6 + 1; /*0x94d938*/
  v10 = v7 & 0x3FFFFFFF; /*0x94d93b*/
  if ( v10 < v6 + 1 ) /*0x94d942*/
  {
    v11 = 2 * v10; /*0x94d944*/
    if ( v9 >= v11 ) /*0x94d948*/
      v11 = v6 + 1; /*0x94d94a*/
    sub_8A6E40(v8, v11, 0xC); /*0x94d950*/
  }
  v12 = (char *)*v8; /*0x94d958*/
  v8[1] = (const void *)v9; /*0x94d95a*/
  v13 = &v12[0xC * v6]; /*0x94d960*/
  *(_DWORD *)v13 = 2; /*0x94d963*/
  *((_DWORD *)v13 + 1) = 4; /*0x94d969*/
  *((_DWORD *)v13 + 2) = 3; /*0x94d970*/
  v14 = *((_DWORD *)this + 0x14); /*0x94d977*/
  v15 = *(_DWORD *)(v14 + 0x10); /*0x94d97a*/
  v16 = *(_DWORD *)(v14 + 0x14); /*0x94d97d*/
  v17 = (const void **)(v14 + 0xC); /*0x94d980*/
  v18 = v15 + 1; /*0x94d983*/
  v19 = v16 & 0x3FFFFFFF; /*0x94d986*/
  if ( v19 < v15 + 1 ) /*0x94d98d*/
  {
    v20 = 2 * v19; /*0x94d98f*/
    if ( v18 >= v20 ) /*0x94d993*/
      v20 = v15 + 1; /*0x94d995*/
    sub_8A6E40(v17, v20, 0xC); /*0x94d99b*/
  }
  v21 = (char *)*v17; /*0x94d9a3*/
  v17[1] = (const void *)v18; /*0x94d9a5*/
  v22 = &v21[0xC * v15]; /*0x94d9ab*/
  *(_DWORD *)v22 = 0; /*0x94d9ae*/
  *((_DWORD *)v22 + 1) = 4; /*0x94d9b4*/
  *((_DWORD *)v22 + 2) = 2; /*0x94d9bb*/
  v23 = *((_DWORD *)this + 0x14); /*0x94d9c2*/
  v24 = *(_DWORD *)(v23 + 0x10); /*0x94d9c5*/
  v25 = *(_DWORD *)(v23 + 0x14); /*0x94d9c8*/
  v26 = (const void **)(v23 + 0xC); /*0x94d9cb*/
  v27 = v24 + 1; /*0x94d9ce*/
  v28 = v25 & 0x3FFFFFFF; /*0x94d9d1*/
  if ( v28 < v24 + 1 ) /*0x94d9d8*/
  {
    v29 = 2 * v28; /*0x94d9da*/
    if ( v27 >= v29 ) /*0x94d9de*/
      v29 = v24 + 1; /*0x94d9e0*/
    sub_8A6E40(v26, v29, 0xC); /*0x94d9e6*/
  }
  v30 = (char *)*v26; /*0x94d9ee*/
  v26[1] = (const void *)v27; /*0x94d9f0*/
  v31 = &v30[0xC * v24]; /*0x94d9f6*/
  *(_DWORD *)v31 = 1; /*0x94d9f9*/
  *((_DWORD *)v31 + 1) = 4; /*0x94d9ff*/
  *((_DWORD *)v31 + 2) = 0; /*0x94da06*/
  v32 = *((_DWORD *)this + 0x14); /*0x94da0d*/
  v33 = *(_DWORD *)(v32 + 0x10); /*0x94da10*/
  v34 = *(_DWORD *)(v32 + 0x14); /*0x94da13*/
  v35 = (const void **)(v32 + 0xC); /*0x94da16*/
  v36 = v33 + 1; /*0x94da19*/
  v37 = v34 & 0x3FFFFFFF; /*0x94da1c*/
  if ( v37 < v33 + 1 ) /*0x94da23*/
  {
    v38 = 2 * v37; /*0x94da25*/
    if ( v36 >= v38 ) /*0x94da29*/
      v38 = v33 + 1; /*0x94da2b*/
    sub_8A6E40(v35, v38, 0xC); /*0x94da31*/
  }
  v39 = (char *)*v35; /*0x94da39*/
  v35[1] = (const void *)v36; /*0x94da3b*/
  result = &v39[0xC * v33]; /*0x94da43*/
  *(_DWORD *)result = 3; /*0x94da47*/
  *((_DWORD *)result + 1) = 4; /*0x94da4d*/
  *((_DWORD *)result + 2) = 1; /*0x94da54*/
  return result; /*0x94da3e*/
}
