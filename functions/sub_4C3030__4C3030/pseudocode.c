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

  v4 = this; /*0x4c3034*/
  v5 = (int)*(this + 9); /*0x4c3036*/
  if ( v5 ) /*0x4c3042*/
  {
    XCoordinate = *(_DWORD *)(v5 + 0x98); /*0x4c304a*/
  }
  else
  {
    v6 = *(this + 8); /*0x4c3050*/
    if ( v6 ) /*0x4c3055*/
      XCoordinate = TESObjectCELL_GetXCoordinate(v6); /*0x4c305c*/
    else
      XCoordinate = 0; /*0x4c3062*/
  }
  v7 = v4[9]; /*0x4c306a*/
  v8 = dbl_A37650; /*0x4c3077*/
  *(float *)&v63 = (double)XCoordinate * v8; /*0x4c3079*/
  if ( v7 ) /*0x4c307d*/
  {
    pathGrid = (int)v7[1].members.pathGrid; /*0x4c3085*/
  }
  else
  {
    v9 = v4[8]; /*0x4c308b*/
    if ( v9 ) /*0x4c3090*/
    {
      YCoordinate = TESObjectCELL_GetYCoordinate(v9); /*0x4c3094*/
      v8 = dbl_A37650; /*0x4c3099*/
      pathGrid = YCoordinate; /*0x4c309f*/
    }
    else
    {
      pathGrid = 0; /*0x4c30a5*/
    }
  }
  v11 = v4[9]; /*0x4c30ad*/
  v58 = (double)pathGrid * v8; /*0x4c30b4*/
  if ( !v11 || !*(_DWORD *)&v11->members.super.type && !v11->vtbl ) /*0x4c30c3*/
    return 0; /*0x4c3534*/
  v13 = *a3; /*0x4c30d0*/
  v14 = *(float *)&v63 < v13; /*0x4c30d6*/
  v15 = *(float *)&v63 == v13; /*0x4c30d6*/
  v16 = *(float *)&v63; /*0x4c30da*/
  if ( !v14 && !v15 ) /*0x4c30dc*/
    return 0; /*0x4c30dc*/
  v17 = *a3; /*0x4c30e5*/
  v76 = v16 + v8; /*0x4c30eb*/
  if ( v76 < v17 ) /*0x4c30fa*/
    return 0; /*0x4c30fa*/
  if ( v58 > (double)a3[1] ) /*0x4c3110*/
    return 0; /*0x4c3110*/
  v77 = v8 + v58; /*0x4c311f*/
  v18 = v58; /*0x4c312b*/
  if ( v77 < (double)a3[1] ) /*0x4c3130*/
    return 0; /*0x4c352e*/
  *(float *)a2 = *a3 - v16; /*0x4c313f*/
  *(float *)(a2 + 4) = a3[1] - v18; /*0x4c3146*/
  v20 = Double_To_SInt32(v18); /*0x4c315c*/
  *(_DWORD *)(a2 + 0x10) = v20; /*0x4c315e*/
  v21 = Double_To_SInt32(v18); /*0x4c3161*/
  if ( !(v21 % 0x800) ) /*0x4c3177*/
  {
    if ( v21 ) /*0x4c317c*/
      *(_DWORD *)(a2 + 0x10) = v20 - 1; /*0x4c3181*/
  }
  v22 = Double_To_SInt32(v18); /*0x4c318f*/
  *(_DWORD *)(a2 + 0x14) = v22; /*0x4c3191*/
  v23 = Double_To_SInt32(v18); /*0x4c3194*/
  if ( !(v23 % 0x800) ) /*0x4c31aa*/
  {
    if ( v23 ) /*0x4c31af*/
      *(_DWORD *)(a2 + 0x14) = v22 - 1; /*0x4c31b4*/
  }
  v24 = *(_DWORD *)(a2 + 0x14); /*0x4c31b7*/
  v25 = *(_DWORD *)(a2 + 0x10); /*0x4c31ba*/
  *(_DWORD *)(a2 + 0x18) = v25 + 2 * v24; /*0x4c31d2*/
  v78 = v16 + (double)(v25 << 0xB); /*0x4c31d7*/
  v72 = v18 + (double)(v24 << 0xB); /*0x4c31df*/
  *(float *)(a2 + 8) = *a3 - v78; /*0x4c31e9*/
  *(float *)(a2 + 0xC) = a3[1] - v72; /*0x4c31f3*/
  v69 = sub_4BF060(v4) + dbl_A30F70; /*0x4c3203*/
  v70 = sub_4BF0A0(v4) + dbl_A30F70; /*0x4c3212*/
  v26 = dbl_A46050; /*0x4c3221*/
  v27 = Double_To_SInt32(v26); /*0x4c322b*/
  *(_DWORD *)(a2 + 0x24) = v27; /*0x4c322d*/
  v28 = Double_To_SInt32(v26); /*0x4c3230*/
  v66 = *(float *)&v28; /*0x4c323d*/
  if ( !(v28 % 0x80) ) /*0x4c3247*/
  {
    if ( v28 ) /*0x4c324c*/
      *(_DWORD *)(a2 + 0x24) = v27 - 1; /*0x4c3251*/
  }
  v29 = Double_To_SInt32(v26 * *(float *)(a2 + 0xC)); /*0x4c3257*/
  v30 = *(float *)(a2 + 0xC); /*0x4c325c*/
  v31 = v29; /*0x4c325f*/
  *(_DWORD *)(a2 + 0x28) = v29; /*0x4c3261*/
  v32 = Double_To_SInt32(v30); /*0x4c3264*/
  v59 = v32; /*0x4c3271*/
  if ( !(v32 % 0x80) ) /*0x4c327b*/
  {
    if ( v32 ) /*0x4c3280*/
      *(_DWORD *)(a2 + 0x28) = v31 - 1; /*0x4c3285*/
  }
  v33 = *(_DWORD *)(a2 + 0x24); /*0x4c3288*/
  v34 = *a3; /*0x4c328b*/
  v63 = v33 << 7; /*0x4c3292*/
  v35 = *(_DWORD *)(a2 + 0x28); /*0x4c329a*/
  v79 = (double)(v33 << 7) + v78; /*0x4c32a6*/
  v36 = *(_DWORD *)(a2 + 0x18); /*0x4c32b2*/
  *(float *)(a2 + 0x1C) = v34 - v79; /*0x4c32b5*/
  v37 = a3[1]; /*0x4c32b8*/
  *(_DWORD *)(a2 + 0x2C) = v36; /*0x4c32bb*/
  v80 = (double)(v35 << 7) + v72; /*0x4c32cf*/
  *(float *)(a2 + 0x20) = v37 - v80; /*0x4c32d7*/
  v38 = *(float *)(a2 + 0x1C); /*0x4c32e1*/
  v39 = (int *)(a2 + 0x40); /*0x4c32e6*/
  if ( (v35 + v33) % 2 ) /*0x4c32e0*/
  {
    v47 = v38 + *(float *)(a2 + 0x20); /*0x4c33a0*/
    v42 = v35 + v33 + 0x10 * v35; /*0x4c33a8*/
    v48 = v47 < dbl_A3F428; /*0x4c33ab*/
    v49 = v47 == dbl_A3F428; /*0x4c33ab*/
    *(_DWORD *)(a2 + 0x44) = v42 + 1; /*0x4c33b4*/
    *(_BYTE *)(a2 + 0x4C) = 1; /*0x4c33ba*/
    *(_DWORD *)(a2 + 0x48) = v42 + 0x11; /*0x4c33c0*/
    if ( !v48 && !v49 ) /*0x4c33c3*/
    {
      v42 += 0x12; /*0x4c33cc*/
      *(_BYTE *)(a2 + 0x4D) = 1; /*0x4c33cf*/
      goto LABEL_34; /*0x4c33d3*/
    }
  }
  else
  {
    v40 = *(float *)(a2 + 0x20); /*0x4c32ef*/
    v41 = v35 + v33 + 0x10 * v35; /*0x4c32f9*/
    *(_DWORD *)(a2 + 0x48) = v41 + 0x12; /*0x4c32ff*/
    *(_BYTE *)(a2 + 0x4C) = 0; /*0x4c3304*/
    *(_DWORD *)(a2 + 0x44) = v41; /*0x4c3308*/
    if ( v40 >= v38 ) /*0x4c330e*/
    {
      v42 = v41 + 0x11; /*0x4c3394*/
      *(_BYTE *)(a2 + 0x4D) = 1; /*0x4c3397*/
      goto LABEL_34; /*0x4c339b*/
    }
    v42 = v41 + 1; /*0x4c3314*/
  }
  *(_BYTE *)(a2 + 0x4D) = 0; /*0x4c3317*/
LABEL_34:
  *v39 = v42; /*0x4c331b*/
  v44 = Double_To_SInt32(*a3) & 0x8000007F; /*0x4c3325*/
  v43 = v44 == 0; /*0x4c3325*/
  if ( v44 < 0 ) /*0x4c332a*/
    v43 = (((_BYTE)v44 - 1) | 0xFFFFFF80) == 0xFFFFFFFF; /*0x4c3330*/
  if ( !v43 ) /*0x4c3331*/
    goto LABEL_44; /*0x4c3331*/
  v46 = Double_To_SInt32(a3[1]) & 0x8000007F; /*0x4c333f*/
  v45 = v46 == 0; /*0x4c333f*/
  if ( v46 < 0 ) /*0x4c3344*/
    v45 = (((_BYTE)v46 - 1) | 0xFFFFFF80) == 0xFFFFFFFF; /*0x4c334a*/
  if ( v45 ) /*0x4c334b*/
  {
    v73 = (float)(SLODWORD(v66) / 0x80 + 0x11 * (v59 / 0x80)); /*0x4c337c*/
    *(_DWORD *)(a2 + 0x3C) = (int)v73; /*0x4c338c*/
  }
  else
  {
LABEL_44:
    v50 = 0; /*0x4c33da*/
    v81 = 0.0; /*0x4c33dc*/
    v60 = *a3; /*0x4c33e2*/
    v61 = a3[1]; /*0x4c33e9*/
    for ( i = 0; i < 3; ++i ) /*0x4c33ed*/
    {
      sub_4C1DD0(this, *(_DWORD *)(a2 + 0x18), *v39, v71); /*0x4c3401*/
      *(float *)&v63 = v69 + v71[0]; /*0x4c340e*/
      v64 = v70 + v71[1]; /*0x4c3422*/
      v66 = *(float *)&v63 - v60; /*0x4c3436*/
      v67 = v64 - v61; /*0x4c3442*/
      v74 = v67 * v67 + v66 * v66; /*0x4c3456*/
      v75 = sqrt(v74); /*0x4c3463*/
      if ( !i || v81 > (double)v75 ) /*0x4c3482*/
      {
        v81 = v75; /*0x4c3484*/
        v50 = i; /*0x4c3488*/
      }
      ++v39; /*0x4c3491*/
    }
    v52 = *(_DWORD *)(a2 + 4 * v50 + 0x40); /*0x4c349d*/
    v4 = this; /*0x4c34a1*/
    *(_DWORD *)(a2 + 0x3C) = v52; /*0x4c34a5*/
  }
  sub_4C1DD0(v4, *(_DWORD *)(a2 + 0x18), *(_DWORD *)(a2 + 0x3C), (float *)&v63); /*0x4c34b7*/
  v66 = *(float *)&v63 + v69; /*0x4c34cd*/
  v53 = v64; /*0x4c34d5*/
  *(float *)(a2 + 0x30) = v66; /*0x4c34d9*/
  v67 = v53 + v70; /*0x4c34df*/
  v54 = v65; /*0x4c34e7*/
  *(float *)(a2 + 0x34) = v67; /*0x4c34eb*/
  v68 = v54 + dbl_A2FC68; /*0x4c34f4*/
  *(float *)(a2 + 0x38) = v68; /*0x4c34fc*/
  if ( a4 ) /*0x4c34ff*/
    return sub_4C3030(v4, a2, (float *)(a2 + 0x30), 0); /*0x4c3507*/
  else
    return 1; /*0x4c3517*/
}
