char __thiscall sub_4C3030(TESObjectCELL **this, int a2, float *a3, char a4)
{
  TESObjectCELL **v4; // ebx
  int v5; // eax
  TESObjectCELL *v6; // ecx
  TESObjectCELL *v7; // eax
  double v8; // st7
  TESObjectCELL *v9; // ecx
  int YCoordinate; // eax
  TESObjectCELL *v11; // eax
  double v13; // st6
  bool v14; // c0
  bool v15; // c3
  double v16; // st6
  double v17; // st5
  double v18; // st7
  int v20; // ebp
  int v21; // eax
  int v22; // ebp
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  double v26; // st7
  int v27; // ebp
  int v28; // eax
  int v29; // eax
  double v30; // st7
  int v31; // ebp
  int v32; // eax
  int v33; // ecx
  double v34; // st7
  int v35; // eax
  int v36; // edx
  double v37; // st7
  double v38; // st7
  int *v39; // ebp
  double v40; // st6
  int v41; // ecx
  int v42; // ecx
  bool v43; // zf
  signed int v44; // eax
  bool v45; // zf
  signed int v46; // eax
  double v47; // st7
  bool v48; // c0
  bool v49; // c3
  int v50; // ebx
  int i; // edi
  int v52; // ecx
  double v53; // st7
  double v54; // st7
  int XCoordinate; // [esp+8h] [ebp-3Ch]
  int pathGrid; // [esp+8h] [ebp-3Ch]
  float v58; // [esp+8h] [ebp-3Ch]
  int v59; // [esp+8h] [ebp-3Ch]
  float v60; // [esp+8h] [ebp-3Ch]
  float v61; // [esp+Ch] [ebp-38h]
  int v63; // [esp+14h] [ebp-30h] BYREF
  float v64; // [esp+18h] [ebp-2Ch]
  float v65; // [esp+1Ch] [ebp-28h]
  float v66; // [esp+20h] [ebp-24h]
  float v67; // [esp+24h] [ebp-20h]
  float v68; // [esp+28h] [ebp-1Ch]
  float v69; // [esp+2Ch] [ebp-18h]
  float v70; // [esp+30h] [ebp-14h]
  float v71[3]; // [esp+38h] [ebp-Ch] BYREF
  float v72; // [esp+48h] [ebp+4h]
  float v73; // [esp+48h] [ebp+4h]
  float v74; // [esp+48h] [ebp+4h]
  float v75; // [esp+48h] [ebp+4h]
  float v76; // [esp+4Ch] [ebp+8h]
  float v77; // [esp+4Ch] [ebp+8h]
  float v78; // [esp+4Ch] [ebp+8h]
  float v79; // [esp+4Ch] [ebp+8h]
  float v80; // [esp+4Ch] [ebp+8h]
  float v81; // [esp+4Ch] [ebp+8h]

  v4 = this;
  v5 = (int)*(this + 9);
  if ( v5 )
  {
    XCoordinate = *(_DWORD *)(v5 + 0x98);
  }
  else
  {
    v6 = *(this + 8);
    if ( v6 )
      XCoordinate = TESObjectCELL_GetXCoordinate(v6);
    else
      XCoordinate = 0;
  }
  v7 = v4[9];
  v8 = dbl_A37650;
  *(float *)&v63 = (double)XCoordinate * v8;
  if ( v7 )
  {
    pathGrid = (int)v7[1].members.pathGrid;
  }
  else
  {
    v9 = v4[8];
    if ( v9 )
    {
      YCoordinate = TESObjectCELL_GetYCoordinate(v9);
      v8 = dbl_A37650;
      pathGrid = YCoordinate;
    }
    else
    {
      pathGrid = 0;
    }
  }
  v11 = v4[9];
  v58 = (double)pathGrid * v8;
  if ( !v11 || !*(_DWORD *)&v11->members.super.type && !v11->vtbl )
    return 0;
  v13 = *a3;
  v14 = *(float *)&v63 < v13;
  v15 = *(float *)&v63 == v13;
  v16 = *(float *)&v63;
  if ( !v14 && !v15 )
    return 0;
  v17 = *a3;
  v76 = v16 + v8;
  if ( v76 < v17 )
    return 0;
  if ( v58 > (double)a3[1] )
    return 0;
  v77 = v8 + v58;
  v18 = v58;
  if ( v77 < (double)a3[1] )
    return 0;
  *(float *)a2 = *a3 - v16;
  *(float *)(a2 + 4) = a3[1] - v18;
  v20 = Double_To_SInt32(v18);
  *(_DWORD *)(a2 + 0x10) = v20;
  v21 = Double_To_SInt32(v18);
  if ( !(v21 % 0x800) )
  {
    if ( v21 )
      *(_DWORD *)(a2 + 0x10) = v20 - 1;
  }
  v22 = Double_To_SInt32(v18);
  *(_DWORD *)(a2 + 0x14) = v22;
  v23 = Double_To_SInt32(v18);
  if ( !(v23 % 0x800) )
  {
    if ( v23 )
      *(_DWORD *)(a2 + 0x14) = v22 - 1;
  }
  v24 = *(_DWORD *)(a2 + 0x14);
  v25 = *(_DWORD *)(a2 + 0x10);
  *(_DWORD *)(a2 + 0x18) = v25 + 2 * v24;
  v78 = v16 + (double)(v25 << 0xB);
  v72 = v18 + (double)(v24 << 0xB);
  *(float *)(a2 + 8) = *a3 - v78;
  *(float *)(a2 + 0xC) = a3[1] - v72;
  v69 = sub_4BF060(v4) + dbl_A30F70;
  v70 = sub_4BF0A0(v4) + dbl_A30F70;
  v26 = dbl_A46050;
  v27 = Double_To_SInt32(v26);
  *(_DWORD *)(a2 + 0x24) = v27;
  v28 = Double_To_SInt32(v26);
  v66 = *(float *)&v28;
  if ( !(v28 % 0x80) )
  {
    if ( v28 )
      *(_DWORD *)(a2 + 0x24) = v27 - 1;
  }
  v29 = Double_To_SInt32(v26 * *(float *)(a2 + 0xC));
  v30 = *(float *)(a2 + 0xC);
  v31 = v29;
  *(_DWORD *)(a2 + 0x28) = v29;
  v32 = Double_To_SInt32(v30);
  v59 = v32;
  if ( !(v32 % 0x80) )
  {
    if ( v32 )
      *(_DWORD *)(a2 + 0x28) = v31 - 1;
  }
  v33 = *(_DWORD *)(a2 + 0x24);
  v34 = *a3;
  v63 = v33 << 7;
  v35 = *(_DWORD *)(a2 + 0x28);
  v79 = (double)(v33 << 7) + v78;
  v36 = *(_DWORD *)(a2 + 0x18);
  *(float *)(a2 + 0x1C) = v34 - v79;
  v37 = a3[1];
  *(_DWORD *)(a2 + 0x2C) = v36;
  v80 = (double)(v35 << 7) + v72;
  *(float *)(a2 + 0x20) = v37 - v80;
  v38 = *(float *)(a2 + 0x1C);
  v39 = (int *)(a2 + 0x40);
  if ( (v35 + v33) % 2 )
  {
    v47 = v38 + *(float *)(a2 + 0x20);
    v42 = v35 + v33 + 0x10 * v35;
    v48 = v47 < dbl_A3F428;
    v49 = v47 == dbl_A3F428;
    *(_DWORD *)(a2 + 0x44) = v42 + 1;
    *(_BYTE *)(a2 + 0x4C) = 1;
    *(_DWORD *)(a2 + 0x48) = v42 + 0x11;
    if ( !v48 && !v49 )
    {
      v42 += 0x12;
      *(_BYTE *)(a2 + 0x4D) = 1;
      goto LABEL_34;
    }
  }
  else
  {
    v40 = *(float *)(a2 + 0x20);
    v41 = v35 + v33 + 0x10 * v35;
    *(_DWORD *)(a2 + 0x48) = v41 + 0x12;
    *(_BYTE *)(a2 + 0x4C) = 0;
    *(_DWORD *)(a2 + 0x44) = v41;
    if ( v40 >= v38 )
    {
      v42 = v41 + 0x11;
      *(_BYTE *)(a2 + 0x4D) = 1;
      goto LABEL_34;
    }
    v42 = v41 + 1;
  }
  *(_BYTE *)(a2 + 0x4D) = 0;
LABEL_34:
  *v39 = v42;
  v44 = Double_To_SInt32(*a3) & 0x8000007F;
  v43 = v44 == 0;
  if ( v44 < 0 )
    v43 = (((_BYTE)v44 - 1) | 0xFFFFFF80) == 0xFFFFFFFF;
  if ( !v43 )
    goto LABEL_44;
  v46 = Double_To_SInt32(a3[1]) & 0x8000007F;
  v45 = v46 == 0;
  if ( v46 < 0 )
    v45 = (((_BYTE)v46 - 1) | 0xFFFFFF80) == 0xFFFFFFFF;
  if ( v45 )
  {
    v73 = (float)(SLODWORD(v66) / 0x80 + 0x11 * (v59 / 0x80));
    *(_DWORD *)(a2 + 0x3C) = (int)v73;
  }
  else
  {
LABEL_44:
    v50 = 0;
    v81 = 0.0;
    v60 = *a3;
    v61 = a3[1];
    for ( i = 0; i < 3; ++i )
    {
      sub_4C1DD0(this, *(_DWORD *)(a2 + 0x18), *v39, v71);
      *(float *)&v63 = v69 + v71[0];
      v64 = v70 + v71[1];
      v66 = *(float *)&v63 - v60;
      v67 = v64 - v61;
      v74 = v67 * v67 + v66 * v66;
      v75 = sqrt(v74);
      if ( !i || v81 > (double)v75 )
      {
        v81 = v75;
        v50 = i;
      }
      ++v39;
    }
    v52 = *(_DWORD *)(a2 + 4 * v50 + 0x40);
    v4 = this;
    *(_DWORD *)(a2 + 0x3C) = v52;
  }
  sub_4C1DD0(v4, *(_DWORD *)(a2 + 0x18), *(_DWORD *)(a2 + 0x3C), (float *)&v63);
  v66 = *(float *)&v63 + v69;
  v53 = v64;
  *(float *)(a2 + 0x30) = v66;
  v67 = v53 + v70;
  v54 = v65;
  *(float *)(a2 + 0x34) = v67;
  v68 = v54 + dbl_A2FC68;
  *(float *)(a2 + 0x38) = v68;
  if ( a4 )
    return sub_4C3030(v4, a2, (float *)(a2 + 0x30), 0);
  else
    return 1;
}
