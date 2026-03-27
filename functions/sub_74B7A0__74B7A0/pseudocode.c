char __thiscall sub_74B7A0(float *this, int a2, NiPoint3 *a3, NiPoint3 *a4, NiPoint3 *a5)
{
  int v6; // eax
  int v8; // edi
  int v9; // esi
  int v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // ebx
  int v15; // edi
  int v16; // ebp
  int v17; // eax
  float v19; // ecx
  float v20; // edx
  float *v21; // eax
  double v22; // st7
  double v23; // st7
  __int64 v25; // [esp+1Ch] [ebp-48h] BYREF
  float v26; // [esp+24h] [ebp-40h]
  float v27; // [esp+28h] [ebp-3Ch] BYREF
  float v28; // [esp+2Ch] [ebp-38h]
  float v29; // [esp+30h] [ebp-34h]
  float v30; // [esp+34h] [ebp-30h] BYREF
  float v31; // [esp+38h] [ebp-2Ch]
  float v32; // [esp+3Ch] [ebp-28h]
  int v33; // [esp+40h] [ebp-24h] BYREF
  float v34; // [esp+44h] [ebp-20h]
  float v35; // [esp+48h] [ebp-1Ch]
  int v36[3]; // [esp+4Ch] [ebp-18h] BYREF
  int v37[3]; // [esp+58h] [ebp-Ch] BYREF
  float v38; // [esp+68h] [ebp+4h]
  float y; // [esp+68h] [ebp+4h]
  float v40; // [esp+6Ch] [ebp+8h]
  float v41; // [esp+6Ch] [ebp+8h]

  if ( !a3 || !(*(int (__thiscall **)(NiPoint3 *))(LODWORD(a3->x) + 0x10))(a3) )
    return 0;
  v6 = *(_DWORD *)(a2 + 8);
  if ( !v6 )
    return 0;
  v8 = *(unsigned __int16 *)(v6 + 8);
  LODWORD(v25) = v8;
  v38 = (double)rand() / dbl_A3D5A8;
  v25 = (__int64)(v38 * (double)v8);
  v9 = v25;
  if ( (int)v25 >= v8 - 1 )
    v9 = v8 - 1;
  v10 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 0xC) + 0x2C * v9;
  if ( !*(_WORD *)(v10 + 0x1E) )
    return sub_74B220(this, a2, a3, (int)a4, a5);
  v11 = *(unsigned __int16 *)(v10 + 0x1E);
  v25 = (__int64)(sub_53D460() * (double)v11);
  v12 = v25;
  if ( (int)v25 >= v11 - 1 )
    v12 = v11 - 1;
  y = a3[0xF].y;
  if ( y == 0.0 )
    return 0;
  v13 = *(_DWORD *)(v10 + 0x14);
  if ( !*(_WORD *)(v10 + 0x22) )
    v12 *= 3;
  v14 = *(unsigned __int16 *)(v13 + 2 * v12);
  v15 = *(unsigned __int16 *)(v13 + 2 * v12 + 2);
  v16 = *(unsigned __int16 *)(v13 + 2 * v12 + 4);
  v17 = rand();
  if ( v17 % 3 == 1 )
  {
    v14 = v15;
LABEL_19:
    v15 = v16;
    goto LABEL_20;
  }
  if ( v17 % 3 == 2 )
    goto LABEL_19;
LABEL_20:
  sub_74A390((float *)&v25, (float *)v36, (int)a3, (_DWORD *)LODWORD(y), v10, v14);
  sub_74A390(&v27, (float *)v37, (int)a3, (_DWORD *)LODWORD(y), v10, v15);
  v30 = v27 + *(float *)&v25;
  v31 = *((float *)&v25 + 1) + v28;
  v32 = v26 + v29;
  sub_4BF9B0(&v30, (float *)&v33, fConstant_2);
  v19 = v34;
  v20 = v35;
  a4->x = *(float *)&v33;
  a4->y = v19;
  a4->z = v20;
  if ( !*((_DWORD *)this + 0x1C) )
  {
    *(float *)&v33 = *(float *)v37 + *(float *)v36;
    v34 = *(float *)&v36[1] + *(float *)&v37[1];
    v35 = *(float *)&v36[2] + *(float *)&v37[2];
    sub_4BF9B0((float *)&v33, (float *)v37, fConstant_2);
    sub_4BFAA0((float *)v37);
    v40 = sub_404C90(&a5->x);
    v21 = sub_47DA10((float *)v36, v40, (float *)v37);
    a5->x = *v21;
    a5->y = v21[1];
    a5->z = v21[2];
  }
  if ( *((_DWORD *)this + 0x1D) == 4 )
  {
    v30 = v27 - *(float *)&v25;
    v31 = v28 - *((float *)&v25 + 1);
    v32 = v29 - v26;
    v41 = sub_53D460();
    v27 = v30 * v41;
    v28 = v31 * v41;
    v29 = v41 * v32;
    v30 = v27 + *(float *)&v25;
    v22 = v28;
    a4->x = v30;
    v31 = v22 + *((float *)&v25 + 1);
    v23 = v29;
    a4->y = v31;
    v32 = v23 + v26;
    a4->z = v32;
  }
  sub_74A0A0(this, a3, a4, a5);
  return 1;
}
