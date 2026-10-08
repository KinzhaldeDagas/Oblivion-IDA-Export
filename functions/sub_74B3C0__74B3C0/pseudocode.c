char __thiscall sub_74B3C0(float *this, int a2, int a3, NiPoint3 *a4, NiPoint3 *a5)
{
  int v7; // eax
  int v9; // ebx
  int v10; // esi
  int v11; // esi
  int v12; // ebx
  int v13; // eax
  _DWORD *v14; // ebx
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  unsigned __int16 *v19; // eax
  float y; // edx
  float z; // eax
  double v22; // st7
  double v23; // st7
  __int64 v24; // [esp+18h] [ebp-60h] BYREF
  float v25; // [esp+20h] [ebp-58h]
  NiPoint3 v26; // [esp+24h] [ebp-54h] BYREF
  float v27; // [esp+30h] [ebp-48h] BYREF
  float v28; // [esp+34h] [ebp-44h]
  float v29; // [esp+38h] [ebp-40h]
  NiPoint3 v30; // [esp+3Ch] [ebp-3Ch] BYREF
  float v31[3]; // [esp+48h] [ebp-30h] BYREF
  float v32[3]; // [esp+54h] [ebp-24h] BYREF
  int v33; // [esp+60h] [ebp-18h] BYREF
  float v34; // [esp+64h] [ebp-14h]
  float v35; // [esp+68h] [ebp-10h]
  int v36[3]; // [esp+6Ch] [ebp-Ch] BYREF
  int v37; // [esp+7Ch] [ebp+4h]
  float v38; // [esp+7Ch] [ebp+4h]
  float v39; // [esp+7Ch] [ebp+4h]
  float v40; // [esp+7Ch] [ebp+4h]
  float v41; // [esp+80h] [ebp+8h]
  int v42; // [esp+80h] [ebp+8h]

  if ( !a3 ) /*0x74b3cd*/
    return 0; /*0x74b3cd*/
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x10))(a3) ) /*0x74b3d7*/
    return 0; /*0x74b3d7*/
  v7 = *(_DWORD *)(a2 + 8); /*0x74b3e1*/
  if ( !v7 ) /*0x74b3e6*/
    return 0; /*0x74b3e9*/
  v9 = *(unsigned __int16 *)(v7 + 8); /*0x74b3f7*/
  LODWORD(v24) = v9; /*0x74b3fb*/
  v41 = (double)rand() / dbl_A3D5A8; /*0x74b412*/
  v24 = (__int64)(v41 * (double)v9); /*0x74b437*/
  v10 = v24; /*0x74b43b*/
  if ( (int)v24 >= v9 - 1 ) /*0x74b445*/
    v10 = v9 - 1; /*0x74b447*/
  v11 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 0xC) + 0x2C * v10; /*0x74b453*/
  if ( !*(_WORD *)(v11 + 0x1E) ) /*0x74b456*/
    return sub_74B220(this, a2, (NiPoint3 *)a3, (int)a4, a5); /*0x74b46e*/
  v12 = *(unsigned __int16 *)(v11 + 0x1E); /*0x74b47d*/
  v24 = (__int64)(sub_53D460() * (double)v12); /*0x74b4a7*/
  v13 = v24; /*0x74b4ab*/
  if ( (int)v24 >= v12 - 1 ) /*0x74b4b5*/
    v13 = v12 - 1; /*0x74b4b7*/
  v14 = *(_DWORD **)(a3 + 0xB8); /*0x74b4b9*/
  if ( !v14 ) /*0x74b4c1*/
    return 0; /*0x74b4c6*/
  if ( *(_WORD *)(v11 + 0x22) ) /*0x74b4cf*/
  {
    v15 = *(_DWORD *)(v11 + 0x14); /*0x74b4d6*/
    LODWORD(v24) = *(unsigned __int16 *)(v15 + 2 * v13); /*0x74b4dd*/
    v16 = *(unsigned __int16 *)(v15 + 2 * v13 + 2); /*0x74b4e1*/
    v17 = *(unsigned __int16 *)(v15 + 2 * v13 + 4); /*0x74b4e6*/
    v18 = v24; /*0x74b4eb*/
  }
  else
  {
    v19 = (unsigned __int16 *)(*(_DWORD *)(v11 + 0x14) + 6 * v13); /*0x74b4f7*/
    v18 = *v19; /*0x74b4fa*/
    v16 = v19[1]; /*0x74b4fd*/
    v17 = v19[2]; /*0x74b501*/
  }
  v37 = v16; /*0x74b50d*/
  v42 = v17; /*0x74b51c*/
  sub_74A390((float *)&v24, v32, a3, v14, v11, v18); /*0x74b523*/
  sub_74A390(&v26.x, (float *)&v33, a3, v14, v11, v37); /*0x74b53c*/
  sub_74A390(&v27, (float *)v36, a3, v14, v11, v42); /*0x74b555*/
  v30.x = v26.x + *(float *)&v24; /*0x74b56b*/
  v30.y = v26.y + *((float *)&v24 + 1); /*0x74b577*/
  v30.z = v25 + v26.z; /*0x74b583*/
  v31[0] = v30.x + v27; /*0x74b58f*/
  v31[1] = v28 + v30.y; /*0x74b59b*/
  v31[2] = v29 + v30.z; /*0x74b5a7*/
  sub_4BF9B0(v31, &v30.x, *(float *)&dword_A46C30); /*0x74b5b5*/
  y = v30.y; /*0x74b5c2*/
  z = v30.z; /*0x74b5c6*/
  a4->x = v30.x; /*0x74b5d1*/
  a4->y = y; /*0x74b5d3*/
  a4->z = z; /*0x74b5d6*/
  if ( !*((_DWORD *)this + 0x1C) ) /*0x74b5d9*/
  {
    v30.x = *(float *)&v33 + v32[0]; /*0x74b5f0*/
    v30.y = v32[1] + v34; /*0x74b5fc*/
    v30.z = v32[2] + v35; /*0x74b608*/
    *(float *)&v33 = v30.x + *(float *)v36; /*0x74b614*/
    v34 = *(float *)&v36[1] + v30.y; /*0x74b620*/
    v35 = *(float *)&v36[2] + v30.z; /*0x74b62c*/
    sub_4BF9B0((float *)&v33, (float *)v36, *(float *)&dword_A46C30); /*0x74b63e*/
    NiPoint3_NormalizeApproximateInPlace((float *)v36); /*0x74b648*/
    v38 = NiPoint3_Length(&a5->x); /*0x74b657*/
    *a5 = *(NiPoint3 *)sub_47DA10((float *)&v33, v38, (float *)v36); /*0x74b674*/
  }
  if ( *((_DWORD *)this + 0x1D) == 3 ) /*0x74b689*/
  {
    v30.x = v26.x - *(float *)&v24; /*0x74b69d*/
    v30.y = v26.y - *((float *)&v24 + 1); /*0x74b6af*/
    v30.z = v26.z - v25; /*0x74b6c1*/
    v26.x = v27 - *(float *)&v24; /*0x74b6cd*/
    v26.y = v28 - *((float *)&v24 + 1); /*0x74b6d5*/
    v26.z = v29 - v25; /*0x74b6dd*/
    v39 = sub_53D460(); /*0x74b6e6*/
    NiPoint3::MutliplyByValue(&v30, v39); /*0x74b6f6*/
    v40 = sub_53D460() * (1.0 - v39); /*0x74b70f*/
    NiPoint3::MutliplyByValue(&v26, v40); /*0x74b71a*/
    v27 = v30.x + *(float *)&v24; /*0x74b727*/
    v28 = v30.y + *((float *)&v24 + 1); /*0x74b733*/
    v29 = v30.z + v25; /*0x74b73f*/
    v30.x = v27 + v26.x; /*0x74b74b*/
    v22 = v28; /*0x74b753*/
    a4->x = v30.x; /*0x74b757*/
    v30.y = v22 + v26.y; /*0x74b75d*/
    v23 = v29; /*0x74b765*/
    a4->y = v30.y; /*0x74b769*/
    v30.z = v23 + v26.z; /*0x74b770*/
    a4->z = v30.z; /*0x74b778*/
  }
  sub_74A0A0(this, (NiPoint3 *)a3, a4, a5); /*0x74b780*/
  return 1; /*0x74b3e8*/
}
