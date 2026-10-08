TES *__thiscall sub_545830(void *this, int a2, int a3)
{
  TES *result; // eax
  TES *v5; // eax
  bool v6; // zf
  int currentInteriorCell; // esi
  double v8; // st7
  double v9; // st7
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // edx
  _DWORD *v13; // ebp
  TES *v14; // eax
  int v15; // esi
  double v16; // st7
  double v17; // st7
  _DWORD *v18; // eax
  int v19; // ecx
  _DWORD *v20; // eax
  int v21; // ecx
  _DWORD *v22; // ebp
  int v23; // eax
  double v24; // st7
  double v25; // st6
  double v26; // st7
  double v27; // st6
  double v28; // st6
  double v29; // st3
  double v30; // st7
  double v31; // st4
  double v32; // st6
  double v33; // st7
  int v34; // eax
  double v35; // st5
  int v36; // ecx
  double v37; // st3
  double v38; // st7
  NiProperty *NiPropertyByID; // eax
  float *v40; // eax
  float v41; // ecx
  double v42; // st7
  NiProperty *v43; // eax
  float *v44; // eax
  float v45; // ecx
  double v46; // st7
  double v47; // st7
  double v48; // st6
  double v49; // st4
  double v50; // st6
  long double v51; // st7
  double v52; // st6
  double v53; // st6
  float *v54; // eax
  double v55; // st5
  double v56; // st6
  float *v57; // eax
  int v58; // edi
  _DWORD *v59; // eax
  _DWORD *v60; // eax
  int v61; // ecx
  _DWORD *v62; // eax
  int v63; // edx
  BSShaderAccumulator *Global; // eax
  double v65; // st7
  char v66; // al
  double v67; // st7
  int v68; // eax
  int v69; // eax
  double v70; // st6
  double v71; // rt2
  double v72; // st6
  double v73; // st7
  int v74; // ebp
  float v75; // [esp+14h] [ebp-A4h]
  int v76; // [esp+14h] [ebp-A4h]
  float angleZ; // [esp+14h] [ebp-A4h]
  int v78; // [esp+14h] [ebp-A4h]
  float v79; // [esp+14h] [ebp-A4h]
  int v80; // [esp+14h] [ebp-A4h]
  float v81; // [esp+14h] [ebp-A4h]
  int v82; // [esp+14h] [ebp-A4h]
  float v83; // [esp+14h] [ebp-A4h]
  float v84; // [esp+14h] [ebp-A4h]
  float v85; // [esp+14h] [ebp-A4h]
  float v86; // [esp+14h] [ebp-A4h]
  float v87; // [esp+14h] [ebp-A4h]
  float v88; // [esp+14h] [ebp-A4h]
  double v89; // [esp+14h] [ebp-A4h]
  float v90; // [esp+14h] [ebp-A4h]
  float v91; // [esp+14h] [ebp-A4h]
  float v92; // [esp+14h] [ebp-A4h]
  float v93; // [esp+1Ch] [ebp-9Ch]
  float v94; // [esp+1Ch] [ebp-9Ch]
  float v95; // [esp+1Ch] [ebp-9Ch]
  float v96; // [esp+1Ch] [ebp-9Ch]
  float v97; // [esp+1Ch] [ebp-9Ch]
  float v98; // [esp+20h] [ebp-98h]
  float v99; // [esp+20h] [ebp-98h]
  float v100; // [esp+24h] [ebp-94h]
  float v101; // [esp+24h] [ebp-94h]
  float v102; // [esp+24h] [ebp-94h]
  float v103; // [esp+24h] [ebp-94h]
  float v104; // [esp+28h] [ebp-90h]
  float v105; // [esp+28h] [ebp-90h]
  float v106; // [esp+2Ch] [ebp-8Ch]
  float v107; // [esp+2Ch] [ebp-8Ch]
  float v108; // [esp+38h] [ebp-80h]
  float v109; // [esp+38h] [ebp-80h]
  float v110; // [esp+40h] [ebp-78h]
  float v111; // [esp+44h] [ebp-74h]
  float v112; // [esp+48h] [ebp-70h]
  NiMatrix33 v113; // [esp+4Ch] [ebp-6Ch] BYREF
  NiMatrix33 right; // [esp+70h] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+94h] [ebp-24h] BYREF

  v75 = *(float *)(a2 + 0xD0); /*0x545851*/
  nullsub_returnVoid_2arg(a2, a3); /*0x545878*/
  result = *(TES **)(a2 + 0xDC); /*0x54587d*/
  if ( !result ) /*0x545885*/
  {
    v5 = MEMORY[0xB333A0]; /*0x54588b*/
    v6 = MEMORY[0xB333A0] == 0; /*0x545890*/
    qmemcpy(&v113, &stru_B26AF0[0xA].unk2C, sizeof(v113)); /*0x5458a0*/
    if ( v6 ) /*0x5458a2*/
      currentInteriorCell = 0; /*0x5458a9*/
    else
      currentInteriorCell = (int)v5->currentInteriorCell; /*0x5458a4*/
    if ( currentInteriorCell ) /*0x5458ad*/
    {
      v76 = sub_4C9980(currentInteriorCell); /*0x5458bc*/
      v8 = (double)v76; /*0x5458c0*/
      if ( v76 < 0 ) /*0x5458c4*/
        v8 = v8 + flt_A2FC78; /*0x5458c6*/
      angleZ = v8 * dbl_A31C78; /*0x5458d7*/
      NiMatrix33_InitRotationZ(&v113, angleZ); /*0x5458e2*/
      v78 = sub_4C99A0(currentInteriorCell); /*0x5458f0*/
      v9 = (double)v78; /*0x5458f4*/
      if ( v78 < 0 ) /*0x5458f8*/
        v9 = v9 + flt_A2FC78; /*0x5458fa*/
      v79 = v9 * dbl_A31C78; /*0x54590b*/
      NiMatrix33_InitRotationY(&right, v79); /*0x545916*/
      qmemcpy(&v113, NiMAtrix33_Multiply(&v113, &out, &right), sizeof(v113)); /*0x54593c*/
    }
    else
    {
      v113.data[1][0] = flt_A57264; /*0x545946*/
      v113.data[2][0] = v113.data[1][0]; /*0x54594a*/
    }
    qmemcpy((void *)(*((_DWORD *)this + 7) + 0x30), &v113, 0x24u); /*0x54595d*/
    v10 = *((_DWORD **)this + 7); /*0x54595f*/
    v10[0x38] = *(_DWORD *)(a2 + 0x60); /*0x545965*/
    v10[0x39] = *(_DWORD *)(a2 + 0x64); /*0x54596e*/
    v10[0x3A] = *(_DWORD *)(a2 + 0x68); /*0x545977*/
    ++v10[0x2E]; /*0x545982*/
    v11 = *((_DWORD **)this + 7); /*0x545988*/
    v11[0x3B] = *(_DWORD *)(a2 + 0x6C); /*0x54598e*/
    v11[0x3C] = *(_DWORD *)(a2 + 0x70); /*0x545997*/
    v12 = *(_DWORD *)(a2 + 0x74); /*0x54599d*/
    ++v11[0x2E]; /*0x5459a0*/
    v11[0x3D] = v12; /*0x5459a6*/
    v13 = *((_DWORD **)this + 7); /*0x5459b2*/
    v13[0x3E] = *(_DWORD *)(a2 + 0xB4); /*0x5459bb*/
    v13[0x3F] = *(_DWORD *)(a2 + 0xB8); /*0x5459c4*/
    result = *(TES **)(a2 + 0xBC); /*0x5459ca*/
    ++v13[0x2E]; /*0x5459cd*/
    v13[0x40] = result; /*0x5459d5*/
    return result; /*0x5459e3*/
  }
  if ( result == (TES *)1 ) /*0x5459ed*/
  {
    v14 = MEMORY[0xB333A0]; /*0x5459f3*/
    v6 = MEMORY[0xB333A0] == 0; /*0x5459f8*/
    qmemcpy(&v113, &stru_B26AF0[0xA].unk2C, sizeof(v113)); /*0x545a08*/
    if ( v6 ) /*0x545a0a*/
      v15 = 0; /*0x545a11*/
    else
      v15 = (int)v14->currentInteriorCell; /*0x545a0c*/
    if ( v15 ) /*0x545a15*/
    {
      v80 = sub_4C9980(v15); /*0x545a24*/
      v16 = (double)v80; /*0x545a28*/
      if ( v80 < 0 ) /*0x545a2c*/
        v16 = v16 + flt_A2FC78; /*0x545a2e*/
      v81 = v16 * dbl_A31C78; /*0x545a3f*/
      NiMatrix33_InitRotationZ(&v113, v81); /*0x545a4a*/
      v82 = sub_4C99A0(v15); /*0x545a58*/
      v17 = (double)v82; /*0x545a5c*/
      if ( v82 < 0 ) /*0x545a60*/
        v17 = v17 + flt_A2FC78; /*0x545a62*/
      v83 = v17 * dbl_A31C78; /*0x545a73*/
      NiMatrix33_InitRotationY(&right, v83); /*0x545a7e*/
      qmemcpy(&v113, NiMAtrix33_Multiply(&v113, &out, &right), sizeof(v113)); /*0x545aa4*/
    }
    else
    {
      v113.data[1][0] = flt_A57264; /*0x545ab3*/
      v113.data[2][0] = v113.data[1][0]; /*0x545ab7*/
    }
    qmemcpy((void *)(*((_DWORD *)this + 7) + 0x30), &v113, 0x24u); /*0x545aca*/
    v18 = *((_DWORD **)this + 7); /*0x545acc*/
    v18[0x38] = *(_DWORD *)(a2 + 0x60); /*0x545ad2*/
    v18[0x39] = *(_DWORD *)(a2 + 0x64); /*0x545adb*/
    v19 = *(_DWORD *)(a2 + 0x68); /*0x545ae1*/
    ++v18[0x2E]; /*0x545ae4*/
    v18[0x3A] = v19; /*0x545aea*/
    v20 = *((_DWORD **)this + 7); /*0x545af0*/
    v20[0x3B] = *(_DWORD *)(a2 + 0x6C); /*0x545af6*/
    v20[0x3C] = *(_DWORD *)(a2 + 0x70); /*0x545aff*/
    v21 = *(_DWORD *)(a2 + 0x74); /*0x545b05*/
    ++v20[0x2E]; /*0x545b08*/
    v20[0x3D] = v21; /*0x545b0e*/
    v22 = *((_DWORD **)this + 7); /*0x545b1a*/
    v22[0x3E] = *(_DWORD *)(a2 + 0xB4); /*0x545b23*/
    v22[0x3F] = *(_DWORD *)(a2 + 0xB8); /*0x545b2c*/
    result = *(TES **)(a2 + 0xBC); /*0x545b32*/
    ++v22[0x2E]; /*0x545b35*/
    v22[0x40] = result; /*0x545b3d*/
    return result; /*0x545b4b*/
  }
  if ( result == (TES *)3 || result == (TES *)2 ) /*0x545b56*/
  {
    v23 = *((_DWORD *)this + 1); /*0x545b5c*/
    if ( (*(_BYTE *)(v23 + 0x18) & 0x20) != 0 ) /*0x545b69*/
      *(_WORD *)(v23 + 0x18) &= ~1u; /*0x545b71*/
    else
      *(_WORD *)(v23 + 0x18) |= 1u; /*0x545b6b*/
    v106 = sub_499140((Sky *)a2); /*0x545b7e*/
    v100 = sub_499200((Sky *)a2); /*0x545b89*/
    v93 = unk_B366C0 * dbl_A2FAA0; /*0x545b99*/
    v24 = v106; /*0x545b9d*/
    v107 = v106 - v93; /*0x545bad*/
    v25 = v24 + v93; /*0x545bb5*/
    v26 = v93; /*0x545bb5*/
    v94 = v25; /*0x545bb7*/
    v27 = v100; /*0x545bbb*/
    v101 = v100 - v26; /*0x545bc3*/
    v104 = v26 + v27; /*0x545bc9*/
    v98 = 1.0; /*0x545bcf*/
    v28 = v75; /*0x545bd7*/
    if ( v75 < (double)v107 || v104 < v28 ) /*0x545bf7*/
    {
      v32 = 0.0; /*0x545caf*/
      v33 = 1.0; /*0x545caf*/
      v98 = 0.0; /*0x545cb1*/
    }
    else
    {
      v29 = v107; /*0x545bfd*/
      v30 = v104; /*0x545bfd*/
      if ( v107 >= v28 || v94 <= v28 ) /*0x545c13*/
      {
        if ( v101 >= v28 ) /*0x545c38*/
        {
          v32 = 0.0; /*0x545cb9*/
          v33 = 1.0; /*0x545cbb*/
        }
        else
        {
          if ( v75 < v30 ) /*0x545c43*/
            v98 = 1.0 - (v75 - v101) / (v30 - v101); /*0x545c55*/
          v32 = 0.0; /*0x545c59*/
          v33 = 1.0; /*0x545c59*/
        }
      }
      else
      {
        v31 = v28 - v29; /*0x545c1d*/
        v32 = 0.0; /*0x545c1d*/
        v33 = 1.0; /*0x545c21*/
        v98 = v31 / (v94 - v29); /*0x545c23*/
      }
    }
    v34 = *(_DWORD *)(a2 + 0x10); /*0x545c61*/
    v35 = *(float *)(a2 + 0xD8); /*0x545c6a*/
    v36 = *(_DWORD *)(a2 + 0x14); /*0x545c6e*/
    v37 = dbl_A3F398; /*0x545c73*/
    if ( v34 ) /*0x545c79*/
    {
      v95 = v35 * v98; /*0x545c8b*/
      v96 = (v95 - 0.0) * ((double)*(unsigned __int8 *)(v34 + 0x4C) * v37) + 0.0; /*0x545ca3*/
    }
    else
    {
      v96 = v98; /*0x545ccb*/
    }
    if ( v36 ) /*0x545cd1*/
    {
      v102 = v98 * (v33 - v35); /*0x545ce3*/
      v38 = v37 * (double)*(unsigned __int8 *)(v36 + 0x4C) * (v102 - 0.0) + 0.0; /*0x545cf9*/
    }
    else
    {
      v38 = v32; /*0x545d05*/
    }
    v103 = v38; /*0x545d0a*/
    v97 = v103 + v96; /*0x545d18*/
    if ( NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4) ) /*0x545d1c*/
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4); /*0x545d2a*/
      if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB ) /*0x545d44*/
      {
        v40 = (float *)NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4); /*0x545d4b*/
        if ( v40 ) /*0x545d52*/
        {
          v41 = *(float *)(a2 + 0x7C); /*0x545d66*/
          v42 = *(float *)(a2 + 0x80); /*0x545d6a*/
          v40[0x1B] = *(float *)(a2 + 0x78); /*0x545d70*/
          v108 = v42; /*0x545d73*/
          v40[0x1C] = v41; /*0x545d7f*/
          v40[0x1D] = v108; /*0x545d8a*/
          v40[0x1E] = v98; /*0x545d8d*/
        }
      }
    }
    if ( NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4) ) /*0x545d95*/
    {
      v43 = NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4); /*0x545da3*/
      if ( (*((int (__thiscall **)(NiProperty *))v43->vtbl + 0x15))(v43) == 0xB ) /*0x545dbd*/
      {
        v44 = (float *)NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4); /*0x545dc4*/
        if ( v44 ) /*0x545dcb*/
        {
          v45 = *(float *)(a2 + 0x7C); /*0x545ddf*/
          v46 = *(float *)(a2 + 0x80); /*0x545de3*/
          v44[0x1B] = *(float *)(a2 + 0x78); /*0x545de9*/
          v109 = v46; /*0x545dec*/
          v44[0x1C] = v45; /*0x545df8*/
          v44[0x1D] = v109; /*0x545e03*/
          v44[0x1E] = v97; /*0x545e06*/
        }
      }
    }
    v99 = 0.0; /*0x545e10*/
    v47 = v107; /*0x545e19*/
    v48 = v75; /*0x545e21*/
    qmemcpy(&v113, &stru_B26AF0[0xA].unk2C, sizeof(v113)); /*0x545e25*/
    v49 = v104; /*0x545e31*/
    if ( v75 <= (double)v107 || v49 <= v48 ) /*0x545e41*/
    {
      if ( v49 > v48 ) /*0x545e6c*/
      {
        if ( v75 > v47 ) /*0x545ea3*/
        {
          v51 = unk_B366C8; /*0x545edf*/
        }
        else
        {
          v53 = (v75 + dbl_A2F920 - v104) / (dbl_A2F920 - (v104 - v47)); /*0x545ec1*/
          v51 = unk_B366C8; /*0x545ec1*/
          v86 = v53; /*0x545ec3*/
          v99 = (v86 + v86 - dbl_A2F928) * v51; /*0x545ed5*/
        }
      }
      else
      {
        v52 = (v48 - v49) / (dbl_A2F920 - (v49 - v47)); /*0x545e80*/
        v51 = unk_B366C8; /*0x545e80*/
        v85 = v52; /*0x545e82*/
        v99 = (v85 + v85 - dbl_A2F928) * v51; /*0x545e94*/
      }
    }
    else
    {
      v50 = (v48 - v47) / (v49 - v47); /*0x545e4d*/
      v51 = unk_B366C8; /*0x545e4d*/
      v84 = v50; /*0x545e4f*/
      v99 = (1.0 - (v84 + v84)) * v51; /*0x545e5f*/
    }
    v54 = (float *)(*((_DWORD *)this + 1) + 0x54); /*0x545eea*/
    v110 = -v99; /*0x545eef*/
    v55 = unk_B366D0; /*0x545ef7*/
    *v54 = v110; /*0x545efd*/
    v111 = v55; /*0x545eff*/
    v54[1] = v111; /*0x545f07*/
    v87 = fabs(v51); /*0x545f0e*/
    v56 = v87; /*0x545f12*/
    v88 = fabs(v99); /*0x545f1a*/
    v112 = v56 - v88; /*0x545f22*/
    v54[2] = v112; /*0x545f2a*/
    v57 = *((float **)this + 3); /*0x545f2d*/
    v113.data[0][0] = v99; /*0x545f30*/
    v57[0x15] = v110; /*0x545f34*/
    v57[0x16] = v111; /*0x545f37*/
    v57[0x17] = v112; /*0x545f3a*/
    v58 = *((_DWORD *)this + 7); /*0x545f43*/
    v113.data[1][0] = unk_B366D0; /*0x545f46*/
    v113.data[2][0] = unk_B366D8; /*0x545f56*/
    qmemcpy((void *)(v58 + 0x30), &v113, 0x24u); /*0x545f63*/
    v59 = *((_DWORD **)this + 7); /*0x545f65*/
    v59[0x38] = *(_DWORD *)(a2 + 0x60); /*0x545f6b*/
    v59[0x39] = *(_DWORD *)(a2 + 0x64); /*0x545f74*/
    v59[0x3A] = *(_DWORD *)(a2 + 0x68); /*0x545f7d*/
    ++v59[0x2E]; /*0x545f88*/
    v60 = *((_DWORD **)this + 7); /*0x545f8e*/
    v60[0x3B] = *(_DWORD *)(a2 + 0x6C); /*0x545f94*/
    v60[0x3C] = *(_DWORD *)(a2 + 0x70); /*0x545f9d*/
    v61 = *(_DWORD *)(a2 + 0x74); /*0x545fa3*/
    ++v60[0x2E]; /*0x545fa6*/
    v60[0x3D] = v61; /*0x545fac*/
    v62 = *((_DWORD **)this + 7); /*0x545fb2*/
    v62[0x3E] = *(_DWORD *)(a2 + 0xB4); /*0x545fbb*/
    v62[0x3F] = *(_DWORD *)(a2 + 0xB8); /*0x545fc7*/
    v63 = *(_DWORD *)(a2 + 0xBC); /*0x545fcd*/
    ++v62[0x2E]; /*0x545fd3*/
    v62[0x40] = v63; /*0x545fd9*/
    result = MEMORY[0xB333A0]; /*0x545fdf*/
    if ( !MEMORY[0xB333A0] || !result->ObjectLODRoot ) /*0x545fec*/
      goto LABEL_84; /*0x545ff0*/
    v105 = unk_B366B8 * *(float *)&a3; /*0x546003*/
    Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x546007*/
    if ( Global ) /*0x54600e*/
    {
      v65 = 1.0; /*0x54601a*/
      if ( *((float *)Global + 0x31) >= 1.0 ) /*0x546025*/
      {
        v66 = 1; /*0x546027*/
        goto LABEL_71; /*0x546029*/
      }
    }
    else
    {
      v65 = 1.0; /*0x54602b*/
    }
    v66 = 0; /*0x54602d*/
LABEL_71:
    *((_BYTE *)this + 0x24) = 0; /*0x54602f*/
    if ( v66 ) /*0x546035*/
    {
      v89 = *((float *)this + 8) - v105; /*0x546045*/
      v67 = *GameSetting_GetSafeFloatPointer(unk_B366B0); /*0x54604e*/
      v68 = *((_DWORD *)this + 3); /*0x546059*/
      if ( v67 <= v89 ) /*0x54605c*/
      {
        *(_WORD *)(v68 + 0x18) &= ~1u; /*0x546069*/
        v69 = *((_DWORD *)this + 3); /*0x546076*/
        v90 = *((float *)this + 8) - v105; /*0x546079*/
        *((float *)this + 8) = v90; /*0x546081*/
        v91 = fabs(v90); /*0x546086*/
        *(float *)(v69 + 0x60) = v91; /*0x54608e*/
      }
      else
      {
        *(_WORD *)(v68 + 0x18) |= 1u; /*0x546060*/
        *((float *)this + 8) = 0.0; /*0x546064*/
      }
      goto LABEL_82; /*0x546067*/
    }
    v70 = *((float *)this + 8) + v105; /*0x546096*/
    if ( v70 < 1.0 ) /*0x5460a3*/
    {
      v71 = v70; /*0x5460a5*/
      v72 = v65; /*0x5460a5*/
      v73 = v71; /*0x5460a5*/
      if ( v72 > *((float *)this + 8) ) /*0x5460af*/
      {
        *((float *)this + 8) = v73; /*0x5460b3*/
LABEL_81:
        *(_WORD *)(*((_DWORD *)this + 3) + 0x18) &= ~1u; /*0x5460c1*/
        v92 = fabs(*((float *)this + 8)); /*0x5460d2*/
        *(float *)(*((_DWORD *)this + 3) + 0x60) = v92; /*0x5460da*/
LABEL_82:
        result = *((TES **)this + 3); /*0x5460dd*/
        if ( ((int)result->niDirectionalLight & 0x20) == 0 ) /*0x5460e9*/
          LOWORD(result->niDirectionalLight) |= 1u; /*0x5460eb*/
LABEL_84:
        v74 = *((_DWORD *)this + 2); /*0x5460ef*/
        if ( (*(_BYTE *)(a2 + 0xFC) & 4) != 0 ) /*0x5460f9*/
          *(_WORD *)(v74 + 0x18) |= 1u; /*0x5460fb*/
        else
          *(_WORD *)(v74 + 0x18) &= ~1u; /*0x54610c*/
        return result; /*0x546109*/
      }
      v65 = v72; /*0x5460bc*/
    }
    *((float *)this + 8) = v65; /*0x5460be*/
    goto LABEL_81; /*0x5460be*/
  }
  return result; /*0x5459d4*/
}
