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
  float *v22; // eax
  double v23; // st7
  double v24; // st7
  __int64 v25; // [esp+18h] [ebp-60h] BYREF
  float v26; // [esp+20h] [ebp-58h]
  NiPoint3 v27; // [esp+24h] [ebp-54h] BYREF
  float v28; // [esp+30h] [ebp-48h] BYREF
  float v29; // [esp+34h] [ebp-44h]
  float v30; // [esp+38h] [ebp-40h]
  NiPoint3 v31; // [esp+3Ch] [ebp-3Ch] BYREF
  float v32[3]; // [esp+48h] [ebp-30h] BYREF
  float v33[3]; // [esp+54h] [ebp-24h] BYREF
  int v34; // [esp+60h] [ebp-18h] BYREF
  float v35; // [esp+64h] [ebp-14h]
  float v36; // [esp+68h] [ebp-10h]
  int v37[3]; // [esp+6Ch] [ebp-Ch] BYREF
  int v38; // [esp+7Ch] [ebp+4h]
  float v39; // [esp+7Ch] [ebp+4h]
  float v40; // [esp+7Ch] [ebp+4h]
  float v41; // [esp+7Ch] [ebp+4h]
  float v42; // [esp+80h] [ebp+8h]
  int v43; // [esp+80h] [ebp+8h]

  if ( !a3 )
    return 0;
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x10))(a3) )
    return 0;
  v7 = *(_DWORD *)(a2 + 8);
  if ( !v7 )
    return 0;
  v9 = *(unsigned __int16 *)(v7 + 8);
  LODWORD(v25) = v9;
  v42 = (double)rand() / dbl_A3D5A8;
  v25 = (__int64)(v42 * (double)v9);
  v10 = v25;
  if ( (int)v25 >= v9 - 1 )
    v10 = v9 - 1;
  v11 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 0xC) + 0x2C * v10;
  if ( !*(_WORD *)(v11 + 0x1E) )
    return sub_74B220(this, a2, (NiPoint3 *)a3, (int)a4, a5);
  v12 = *(unsigned __int16 *)(v11 + 0x1E);
  v25 = (__int64)(sub_53D460() * (double)v12);
  v13 = v25;
  if ( (int)v25 >= v12 - 1 )
    v13 = v12 - 1;
  v14 = *(_DWORD **)(a3 + 0xB8);
  if ( !v14 )
    return 0;
  if ( *(_WORD *)(v11 + 0x22) )
  {
    v15 = *(_DWORD *)(v11 + 0x14);
    LODWORD(v25) = *(unsigned __int16 *)(v15 + 2 * v13);
    v16 = *(unsigned __int16 *)(v15 + 2 * v13 + 2);
    v17 = *(unsigned __int16 *)(v15 + 2 * v13 + 4);
    v18 = v25;
  }
  else
  {
    v19 = (unsigned __int16 *)(*(_DWORD *)(v11 + 0x14) + 6 * v13);
    v18 = *v19;
    v16 = v19[1];
    v17 = v19[2];
  }
  v38 = v16;
  v43 = v17;
  sub_74A390((float *)&v25, v33, a3, v14, v11, v18);
  sub_74A390(&v27.x, (float *)&v34, a3, v14, v11, v38);
  sub_74A390(&v28, (float *)v37, a3, v14, v11, v43);
  v31.x = v27.x + *(float *)&v25;
  v31.y = v27.y + *((float *)&v25 + 1);
  v31.z = v26 + v27.z;
  v32[0] = v31.x + v28;
  v32[1] = v29 + v31.y;
  v32[2] = v30 + v31.z;
  sub_4BF9B0(v32, &v31.x, *(float *)&dword_A46C30);
  y = v31.y;
  z = v31.z;
  a4->x = v31.x;
  a4->y = y;
  a4->z = z;
  if ( !*((_DWORD *)this + 0x1C) )
  {
    v31.x = *(float *)&v34 + v33[0];
    v31.y = v33[1] + v35;
    v31.z = v33[2] + v36;
    *(float *)&v34 = v31.x + *(float *)v37;
    v35 = *(float *)&v37[1] + v31.y;
    v36 = *(float *)&v37[2] + v31.z;
    sub_4BF9B0((float *)&v34, (float *)v37, *(float *)&dword_A46C30);
    sub_4BFAA0((float *)v37);
    v39 = sub_404C90(&a5->x);
    v22 = sub_47DA10((float *)&v34, v39, (float *)v37);
    a5->x = *v22;
    a5->y = v22[1];
    a5->z = v22[2];
  }
  if ( *((_DWORD *)this + 0x1D) == 3 )
  {
    v31.x = v27.x - *(float *)&v25;
    v31.y = v27.y - *((float *)&v25 + 1);
    v31.z = v27.z - v26;
    v27.x = v28 - *(float *)&v25;
    v27.y = v29 - *((float *)&v25 + 1);
    v27.z = v30 - v26;
    v40 = sub_53D460();
    NiPoint3::MutliplyByValue(&v31, v40);
    v41 = sub_53D460() * (1.0 - v40);
    NiPoint3::MutliplyByValue(&v27, v41);
    v28 = v31.x + *(float *)&v25;
    v29 = v31.y + *((float *)&v25 + 1);
    v30 = v31.z + v26;
    v31.x = v28 + v27.x;
    v23 = v29;
    a4->x = v31.x;
    v31.y = v23 + v27.y;
    v24 = v30;
    a4->y = v31.y;
    v31.z = v24 + v27.z;
    a4->z = v31.z;
  }
  sub_74A0A0(this, (NiPoint3 *)a3, a4, a5);
  return 1;
}
