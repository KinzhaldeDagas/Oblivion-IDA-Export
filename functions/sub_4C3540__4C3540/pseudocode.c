char __thiscall sub_4C3540(TESObjectCELL **this, int a2, int a3, _DWORD *a4)
{
  int v6; // eax
  int YCoordinate; // ebx
  TESObjectCELL *v8; // ecx
  int v9; // eax
  int XCoordinate; // eax
  TESObjectCELL *v11; // ecx
  double v12; // st6
  double v13; // st7
  double v15; // st7
  int v16; // edx
  int v17; // ebx
  int v18; // ebp
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st4
  double v23; // st3
  int v24; // eax
  int v25; // ebp
  int v26; // ebx
  char v27; // al
  float *v28; // eax
  float v29; // [esp+Ch] [ebp-58h]
  float v30; // [esp+10h] [ebp-54h] BYREF
  float v31; // [esp+14h] [ebp-50h]
  float v32; // [esp+18h] [ebp-4Ch]
  float v33; // [esp+1Ch] [ebp-48h] BYREF
  float v34; // [esp+20h] [ebp-44h]
  float v35; // [esp+24h] [ebp-40h]
  float v36; // [esp+28h] [ebp-3Ch]
  float v37; // [esp+2Ch] [ebp-38h]
  float v38; // [esp+30h] [ebp-34h]
  float v39; // [esp+34h] [ebp-30h] BYREF
  float v40; // [esp+38h] [ebp-2Ch]
  float v41; // [esp+3Ch] [ebp-28h]
  int v42; // [esp+40h] [ebp-24h]
  int v43; // [esp+44h] [ebp-20h]
  int v44; // [esp+48h] [ebp-1Ch]
  float v45; // [esp+4Ch] [ebp-18h] BYREF
  float v46; // [esp+50h] [ebp-14h]
  float v47; // [esp+54h] [ebp-10h]
  float v48; // [esp+58h] [ebp-Ch] BYREF
  float v49; // [esp+5Ch] [ebp-8h]
  int v50; // [esp+60h] [ebp-4h]
  float v51; // [esp+68h] [ebp+4h]
  float v52; // [esp+68h] [ebp+4h]
  float v53; // [esp+68h] [ebp+4h]
  float v54; // [esp+68h] [ebp+4h]
  float v55; // [esp+68h] [ebp+4h]
  float v56; // [esp+68h] [ebp+4h]
  float v57; // [esp+68h] [ebp+4h]
  float v58; // [esp+68h] [ebp+4h]
  float v59; // [esp+68h] [ebp+4h]
  float v60; // [esp+68h] [ebp+4h]
  float v61; // [esp+68h] [ebp+4h]

  sub_4C0530(this, &v48, *(_BYTE *)(a2 + 0x18), *(_WORD *)(a2 + 0x3C), 0, 0);
  sub_4C1DD0(this, *(_DWORD *)(a2 + 0x18), *(_DWORD *)(a2 + 0x3C), &v39);
  v6 = (int)*(this + 9);
  if ( v6 )
  {
    YCoordinate = *(_DWORD *)(v6 + 0x9C);
  }
  else
  {
    v8 = *(this + 8);
    if ( v8 )
      YCoordinate = TESObjectCELL_GetYCoordinate(v8);
    else
      YCoordinate = 0;
  }
  v9 = (int)*(this + 9);
  if ( v9 )
  {
    XCoordinate = *(_DWORD *)(v9 + 0x98);
  }
  else
  {
    v11 = *(this + 8);
    if ( v11 )
      XCoordinate = TESObjectCELL_GetXCoordinate(v11);
    else
      XCoordinate = 0;
  }
  v12 = dbl_A30F70;
  v45 = (double)(XCoordinate << 0xC) + v12;
  v46 = v12 + (double)(YCoordinate << 0xC);
  *(float *)&v42 = v45 + v39;
  *(float *)&v43 = v40 + v46;
  v13 = v48;
  if ( v48 == *(float *)&v42 && v49 == *(float *)&v43 && *(float *)&v50 == dbl_A2FC68 )
  {
    sub_4C1E80(this, *(_DWORD *)(a2 + 0x18), *(_DWORD *)(a2 + 0x3C), (float *)a3);
    *a4 = *(_DWORD *)a3;
    a4[1] = *(_DWORD *)(a3 + 4);
    a4[2] = *(_DWORD *)(a3 + 8);
    return 1;
  }
  unknown_libname_14(dbl_A3F428, v13);
  v51 = v13;
  v29 = v51 * dbl_A46050;
  v15 = v49;
  unknown_libname_14(dbl_A3F428, v49);
  v52 = v15;
  v16 = *(_DWORD *)(a2 + 0x40);
  v17 = dword_B258E8;
  v18 = dword_B258EC;
  v53 = v52 * dbl_A46050;
  v50 = dword_B258F0;
  sub_4C1E80(this, *(_DWORD *)(a2 + 0x18), v16, &v45);
  sub_4C1E80(this, *(_DWORD *)(a2 + 0x18), *(_DWORD *)(a2 + 0x44), &v30);
  sub_4C1E80(this, *(_DWORD *)(a2 + 0x18), *(_DWORD *)(a2 + 0x48), &v33);
  v19 = v29;
  v20 = v53;
  v21 = v47;
  v22 = v46;
  v23 = v45;
  if ( *(_BYTE *)(a2 + 0x4C) )
  {
    if ( !*(_BYTE *)(a2 + 0x4D) )
    {
      v36 = v33 * v20;
      v37 = v34 * v20;
      v38 = v35 * v20;
      *(float *)&v42 = v30 * v19;
      *(float *)&v43 = v31 * v19;
      *(float *)&v44 = v32 * v19;
      v58 = 1.0 - v19;
      v45 = v58 * v23;
      v46 = v22 * v58;
      v47 = v21 * v58;
      v39 = v45 + *(float *)&v42;
      v40 = v46 + *(float *)&v43;
      v41 = v47 + *(float *)&v44;
      v59 = 1.0 - v20;
      v45 = v39 * v59;
      v46 = v40 * v59;
      v47 = v41 * v59;
      *(float *)&v42 = v45 + v36;
      v17 = v42;
      *(float *)&v43 = v46 + v37;
      v18 = v43;
      *(float *)&v44 = v47 + v38;
      v50 = v44;
    }
    if ( *(_BYTE *)(a2 + 0x4D) )
    {
      v60 = 1.0 - v20;
      v36 = v60 * v30;
      v37 = v31 * v60;
      v38 = v32 * v60;
      *(float *)&v42 = v23 * v19;
      *(float *)&v43 = v22 * v19;
      *(float *)&v44 = v21 * v19;
      v61 = 1.0 - v19;
      v45 = v33 * v61;
      v46 = v34 * v61;
      v47 = v61 * v35;
      v39 = v45 + *(float *)&v42;
      v40 = v46 + *(float *)&v43;
      v41 = v47 + *(float *)&v44;
      v45 = v39 * v20;
      v46 = v40 * v20;
      v47 = v20 * v41;
      *(float *)&v42 = v45 + v36;
      v17 = v42;
      *(float *)&v43 = v46 + v37;
      v18 = v43;
      *(float *)&v44 = v47 + v38;
      v50 = v44;
    }
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 0x4D) )
    {
      v45 = v33 * v20;
      v46 = v34 * v20;
      v47 = v35 * v20;
      v39 = v23 * v19;
      v40 = v22 * v19;
      v41 = v21 * v19;
      v54 = 1.0 - v19;
      v36 = v30 * v54;
      v37 = v31 * v54;
      v38 = v32 * v54;
      *(float *)&v42 = v36 + v39;
      *(float *)&v43 = v37 + v40;
      *(float *)&v44 = v38 + v41;
      v55 = 1.0 - v20;
      v39 = *(float *)&v42 * v55;
      v40 = *(float *)&v43 * v55;
      v41 = *(float *)&v44 * v55;
      *(float *)&v42 = v39 + v45;
      v17 = v42;
      *(float *)&v43 = v40 + v46;
      v18 = v43;
      *(float *)&v44 = v41 + v47;
      v50 = v44;
    }
    if ( *(_BYTE *)(a2 + 0x4D) )
    {
      v56 = 1.0 - v20;
      v36 = v56 * v30;
      v37 = v31 * v56;
      v38 = v32 * v56;
      *(float *)&v42 = v33 * v19;
      *(float *)&v43 = v34 * v19;
      *(float *)&v44 = v35 * v19;
      v57 = 1.0 - v19;
      v45 = v23 * v57;
      v46 = v22 * v57;
      v47 = v21 * v57;
      v39 = v45 + *(float *)&v42;
      v40 = v46 + *(float *)&v43;
      v41 = v47 + *(float *)&v44;
      v45 = v39 * v20;
      v46 = v40 * v20;
      v47 = v41 * v20;
      *(float *)&v42 = v45 + v36;
      v17 = v42;
      *(float *)&v43 = v46 + v37;
      v18 = v43;
      *(float *)&v44 = v47 + v38;
      v50 = v44;
    }
  }
  v24 = v50;
  *(_DWORD *)a3 = v17;
  *(_DWORD *)(a3 + 4) = v18;
  *(_DWORD *)(a3 + 8) = v24;
  sub_43F350((float *)a3);
  v25 = *(_DWORD *)(a2 + 0x40);
  v26 = *(_DWORD *)(a2 + 0x18);
  sub_4C1DD0(this, v26, v25, &v33);
  sub_4C1DD0(this, v26, *(_DWORD *)(a2 + 0x44), &v48);
  v33 = v33 - v48;
  v34 = v34 - v49;
  v35 = v35 - *(float *)&v50;
  sub_4C1DD0(this, v26, v25, &v30);
  sub_4C1DD0(this, v26, *(_DWORD *)(a2 + 0x48), &v48);
  v27 = *(_BYTE *)(a2 + 0x4C);
  v30 = v30 - v48;
  v31 = v31 - v49;
  v32 = v32 - *(float *)&v50;
  if ( v27 )
  {
    if ( *(_BYTE *)(a2 + 0x4D) )
      goto LABEL_30;
  }
  else if ( !*(_BYTE *)(a2 + 0x4D) )
  {
LABEL_30:
    v28 = sub_4BF9E0(&v30, &v48, &v33);
    goto LABEL_31;
  }
  v28 = sub_4BF9E0(&v33, &v48, &v30);
LABEL_31:
  *a4 = *(_DWORD *)v28;
  a4[1] = *((_DWORD *)v28 + 1);
  a4[2] = *((_DWORD *)v28 + 2);
  return 1;
}
