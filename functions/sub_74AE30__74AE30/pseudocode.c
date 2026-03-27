char __thiscall sub_74AE30(float *this, float a2, NiPoint3 *a3, NiPoint3 *a4)
{
  NiPoint3 *v4; // ebp
  int v5; // ebx
  float x; // ecx
  unsigned int v7; // edi
  unsigned int v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // eax
  double v13; // st7
  float v14; // eax
  int v15; // edx
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  float v20; // edx
  NiPoint3 *v21; // esi
  NiPoint3 *v22; // edi
  double v23; // st7
  double v24; // st6
  double v25; // st6
  float v26; // edx
  float v27; // eax
  float v28; // eax
  float v29; // ecx
  double v30; // st7
  double v31; // st6
  float *v32; // ebx
  double v33; // st6
  double v34; // st7
  int v35; // [esp+10h] [ebp-48h] BYREF
  int v36; // [esp+14h] [ebp-44h] BYREF
  float *v37; // [esp+18h] [ebp-40h]
  __int64 v38; // [esp+1Ch] [ebp-3Ch]
  float v39; // [esp+24h] [ebp-34h]
  float v40; // [esp+28h] [ebp-30h]
  float v41; // [esp+2Ch] [ebp-2Ch]
  float v42; // [esp+30h] [ebp-28h]
  float v43; // [esp+34h] [ebp-24h] BYREF
  float v44; // [esp+38h] [ebp-20h]
  float v45; // [esp+3Ch] [ebp-1Ch]
  float v46; // [esp+40h] [ebp-18h]
  float v47; // [esp+44h] [ebp-14h]
  float v48; // [esp+48h] [ebp-10h]
  float v49; // [esp+4Ch] [ebp-Ch]
  float v50; // [esp+50h] [ebp-8h]
  float v51; // [esp+54h] [ebp-4h]

  v4 = (NiPoint3 *)LODWORD(a2);
  v5 = 0;
  v37 = this;
  v36 = 0;
  v35 = 0;
  if ( a2 == 0.0 )
    return 0;
  if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(a2) + 0x10))(LODWORD(a2)) )
  {
    x = v4[0xF].x;
    a2 = 0.0;
    v7 = (*(unsigned __int16 (__thiscall **)(float))(*(_DWORD *)LODWORD(x) + 0x5C))(COERCE_FLOAT(LODWORD(x)));
    v8 = rand() % v7;
    do
    {
      (*(void (__thiscall **)(_DWORD, unsigned int, int *, int *, float *))(*(_DWORD *)LODWORD(v4[0xF].x) + 0x60))(
        LODWORD(v4[0xF].x),
        v8,
        &v36,
        &v35,
        &a2);
      if ( (_WORD)v36 != (_WORD)v35 && (_WORD)v36 != LOWORD(a2) && (_WORD)v35 != LOWORD(a2) )
        break;
      if ( ++v8 >= v7 )
        v8 = 0;
      ++v5;
    }
    while ( v5 < 6 );
    v9 = rand();
    if ( v9 % 3 == 1 )
    {
      v36 = (unsigned __int16)v35;
      v35 = LOWORD(a2);
      goto LABEL_20;
    }
    if ( v9 % 3 != 2 )
      goto LABEL_20;
    v10 = LOWORD(a2);
  }
  else
  {
    v11 = (*(int (__thiscall **)(NiPoint3 *))(LODWORD(v4->x) + 4))(v4);
    if ( !v11 )
      return 0;
    while ( (char *)v11 != dword_B3FCDC )
    {
      v11 = *(_DWORD *)(v11 + 4);
      if ( !v11 )
        return 0;
    }
    a2 = COERCE_FLOAT(rand());
    v13 = (double)SLODWORD(a2) / dbl_A3D5A8;
    LODWORD(a2) = *(unsigned __int16 *)(LODWORD(v4[0xF].x) + 8) - 1;
    *(float *)&v38 = v13;
    v38 = (__int64)((double)SLODWORD(a2) * *(float *)&v38);
    v36 = (unsigned __int16)v38;
    v10 = (unsigned __int16)(v38 + 1);
  }
  v35 = v10;
LABEL_20:
  v14 = v4[0xF].x;
  v15 = *(_DWORD *)(LODWORD(v14) + 0x1C);
  v16 = *(_DWORD *)(LODWORD(v14) + 0x20);
  if ( !v15 )
    return 0;
  v17 = 0xC * (unsigned __int16)v36;
  v40 = *(float *)(v17 + v15);
  v41 = *(float *)(v17 + v15 + 4);
  v42 = *(float *)(v17 + v15 + 8);
  v18 = 0xC * (unsigned __int16)v35;
  LODWORD(v38) = *(_DWORD *)(v18 + v15);
  v19 = *(_DWORD *)(v18 + v15 + 4);
  v20 = *(float *)(v18 + v15 + 8);
  HIDWORD(v38) = v19;
  v21 = a3;
  v39 = v20;
  v43 = *(float *)&v38 + v40;
  v22 = a4;
  v44 = v41 + *((float *)&v38 + 1);
  v45 = v42 + v20;
  v23 = dbl_A2FAA0;
  v46 = v43 * v23;
  v24 = v44;
  a3->x = v46;
  v47 = v24 * v23;
  v25 = v45;
  v21->y = v47;
  v48 = v25 * v23;
  v21->z = v48;
  if ( !*((_DWORD *)v37 + 0x1C) )
  {
    if ( v16 )
    {
      v46 = *(float *)(v17 + v16);
      v26 = *(float *)(v17 + v16 + 4);
      v27 = *(float *)(v17 + v16 + 8);
      v47 = v26;
      v43 = *(float *)(v18 + v16);
      v48 = v27;
      v28 = *(float *)(v18 + v16 + 4);
      v29 = *(float *)(v18 + v16 + 8);
      v49 = v43 + v46;
      v50 = v26 + v28;
      v51 = v48 + v29;
      v43 = v49 * v23;
      v44 = v50 * v23;
      v45 = v23 * v51;
      sub_4BFAA0(&v43);
      a2 = v22->y * v22->y + v22->x * v22->x + v22->z * v22->z;
      a2 = sqrt(a2);
      v30 = a2;
      v49 = v43 * a2;
      v31 = v44;
      v22->x = v49;
      v50 = v31 * v30;
      v22->y = v50;
      v51 = v30 * v45;
      v22->z = v51;
    }
  }
  v32 = v37;
  if ( *((_DWORD *)v37 + 0x1D) == 4 )
  {
    a2 = COERCE_FLOAT(rand());
    a2 = (double)SLODWORD(a2) / dbl_A3D5A8;
    v49 = *(float *)&v38 - v40;
    v33 = v41;
    v50 = *((float *)&v38 + 1) - v41;
    v51 = v39 - v42;
    v46 = v49 * a2;
    v47 = v50 * a2;
    v48 = a2 * v51;
    v34 = v42;
    v49 = v40 + v46;
    v21->x = v49;
    v50 = v33 + v47;
    v21->y = v50;
    v51 = v34 + v48;
    v21->z = v51;
  }
  sub_74A0A0(v32, v4, v21, v22);
  return 1;
}
