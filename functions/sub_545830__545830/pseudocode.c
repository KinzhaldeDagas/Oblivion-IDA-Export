TES *__thiscall sub_545830(void *this, int a2, float a3)
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
  BSShaderAccumulator *inited; // eax
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
  float v77; // [esp+14h] [ebp-A4h]
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
  float v113[9]; // [esp+4Ch] [ebp-6Ch] BYREF
  float v114[9]; // [esp+70h] [ebp-48h] BYREF
  float v115[9]; // [esp+94h] [ebp-24h] BYREF

  v75 = *(float *)(a2 + 0xD0);
  nullsub_returnVoid_2arg(a2, LODWORD(a3));
  result = *(TES **)(a2 + 0xDC);
  if ( !result )
  {
    v5 = TES;
    v6 = TES == 0;
    qmemcpy(v113, &stru_B26AF0[0xA].unk2C, sizeof(v113));
    if ( v6 )
      currentInteriorCell = 0;
    else
      currentInteriorCell = (int)v5->currentInteriorCell;
    if ( currentInteriorCell )
    {
      v76 = sub_4C9980(currentInteriorCell);
      v8 = (double)v76;
      if ( v76 < 0 )
        v8 = v8 + flt_A2FC78;
      v77 = v8 * dbl_A31C78;
      NiMatrix33_InitRotationTransform(v113, v77);
      v78 = sub_4C99A0(currentInteriorCell);
      v9 = (double)v78;
      if ( v78 < 0 )
        v9 = v9 + flt_A2FC78;
      v79 = v9 * dbl_A31C78;
      sub_70FD80(v114, v79);
      qmemcpy(v113, NiMAtrix33_Multiply(v113, v115, v114), sizeof(v113));
    }
    else
    {
      v113[3] = flt_A57264;
      v113[6] = v113[3];
    }
    qmemcpy((void *)(*((_DWORD *)this + 7) + 0x30), v113, 0x24u);
    v10 = *((_DWORD **)this + 7);
    v10[0x38] = *(_DWORD *)(a2 + 0x60);
    v10[0x39] = *(_DWORD *)(a2 + 0x64);
    v10[0x3A] = *(_DWORD *)(a2 + 0x68);
    ++v10[0x2E];
    v11 = *((_DWORD **)this + 7);
    v11[0x3B] = *(_DWORD *)(a2 + 0x6C);
    v11[0x3C] = *(_DWORD *)(a2 + 0x70);
    v12 = *(_DWORD *)(a2 + 0x74);
    ++v11[0x2E];
    v11[0x3D] = v12;
    v13 = *((_DWORD **)this + 7);
    v13[0x3E] = *(_DWORD *)(a2 + 0xB4);
    v13[0x3F] = *(_DWORD *)(a2 + 0xB8);
    result = *(TES **)(a2 + 0xBC);
    ++v13[0x2E];
    v13[0x40] = result;
    return result;
  }
  if ( result == (TES *)1 )
  {
    v14 = TES;
    v6 = TES == 0;
    qmemcpy(v113, &stru_B26AF0[0xA].unk2C, sizeof(v113));
    if ( v6 )
      v15 = 0;
    else
      v15 = (int)v14->currentInteriorCell;
    if ( v15 )
    {
      v80 = sub_4C9980(v15);
      v16 = (double)v80;
      if ( v80 < 0 )
        v16 = v16 + flt_A2FC78;
      v81 = v16 * dbl_A31C78;
      NiMatrix33_InitRotationTransform(v113, v81);
      v82 = sub_4C99A0(v15);
      v17 = (double)v82;
      if ( v82 < 0 )
        v17 = v17 + flt_A2FC78;
      v83 = v17 * dbl_A31C78;
      sub_70FD80(v114, v83);
      qmemcpy(v113, NiMAtrix33_Multiply(v113, v115, v114), sizeof(v113));
    }
    else
    {
      v113[3] = flt_A57264;
      v113[6] = v113[3];
    }
    qmemcpy((void *)(*((_DWORD *)this + 7) + 0x30), v113, 0x24u);
    v18 = *((_DWORD **)this + 7);
    v18[0x38] = *(_DWORD *)(a2 + 0x60);
    v18[0x39] = *(_DWORD *)(a2 + 0x64);
    v19 = *(_DWORD *)(a2 + 0x68);
    ++v18[0x2E];
    v18[0x3A] = v19;
    v20 = *((_DWORD **)this + 7);
    v20[0x3B] = *(_DWORD *)(a2 + 0x6C);
    v20[0x3C] = *(_DWORD *)(a2 + 0x70);
    v21 = *(_DWORD *)(a2 + 0x74);
    ++v20[0x2E];
    v20[0x3D] = v21;
    v22 = *((_DWORD **)this + 7);
    v22[0x3E] = *(_DWORD *)(a2 + 0xB4);
    v22[0x3F] = *(_DWORD *)(a2 + 0xB8);
    result = *(TES **)(a2 + 0xBC);
    ++v22[0x2E];
    v22[0x40] = result;
    return result;
  }
  if ( result == (TES *)3 || result == (TES *)2 )
  {
    v23 = *((_DWORD *)this + 1);
    if ( (*(_BYTE *)(v23 + 0x18) & 0x20) != 0 )
      *(_WORD *)(v23 + 0x18) &= ~1u;
    else
      *(_WORD *)(v23 + 0x18) |= 1u;
    v106 = sub_499140((Sky *)a2);
    v100 = sub_499200((Sky *)a2);
    v93 = flt_B366C0 * dbl_A2FAA0;
    v24 = v106;
    v107 = v106 - v93;
    v25 = v24 + v93;
    v26 = v93;
    v94 = v25;
    v27 = v100;
    v101 = v100 - v26;
    v104 = v26 + v27;
    v98 = 1.0;
    v28 = v75;
    if ( v75 < (double)v107 || v104 < v28 )
    {
      v32 = 0.0;
      v33 = 1.0;
      v98 = 0.0;
    }
    else
    {
      v29 = v107;
      v30 = v104;
      if ( v107 >= v28 || v94 <= v28 )
      {
        if ( v101 >= v28 )
        {
          v32 = 0.0;
          v33 = 1.0;
        }
        else
        {
          if ( v75 < v30 )
            v98 = 1.0 - (v75 - v101) / (v30 - v101);
          v32 = 0.0;
          v33 = 1.0;
        }
      }
      else
      {
        v31 = v28 - v29;
        v32 = 0.0;
        v33 = 1.0;
        v98 = v31 / (v94 - v29);
      }
    }
    v34 = *(_DWORD *)(a2 + 0x10);
    v35 = *(float *)(a2 + 0xD8);
    v36 = *(_DWORD *)(a2 + 0x14);
    v37 = dbl_A3F398;
    if ( v34 )
    {
      v95 = v35 * v98;
      v96 = (v95 - 0.0) * ((double)*(unsigned __int8 *)(v34 + 0x4C) * v37) + 0.0;
    }
    else
    {
      v96 = v98;
    }
    if ( v36 )
    {
      v102 = v98 * (v33 - v35);
      v38 = v37 * (double)*(unsigned __int8 *)(v36 + 0x4C) * (v102 - 0.0) + 0.0;
    }
    else
    {
      v38 = v32;
    }
    v103 = v38;
    v97 = v103 + v96;
    if ( NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4);
      if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB )
      {
        v40 = (float *)NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4);
        if ( v40 )
        {
          v41 = *(float *)(a2 + 0x7C);
          v42 = *(float *)(a2 + 0x80);
          v40[0x1B] = *(float *)(a2 + 0x78);
          v108 = v42;
          v40[0x1C] = v41;
          v40[0x1D] = v108;
          v40[0x1E] = v98;
        }
      }
    }
    if ( NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4) )
    {
      v43 = NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4);
      if ( (*((int (__thiscall **)(NiProperty *))v43->vtbl + 0x15))(v43) == 0xB )
      {
        v44 = (float *)NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4);
        if ( v44 )
        {
          v45 = *(float *)(a2 + 0x7C);
          v46 = *(float *)(a2 + 0x80);
          v44[0x1B] = *(float *)(a2 + 0x78);
          v109 = v46;
          v44[0x1C] = v45;
          v44[0x1D] = v109;
          v44[0x1E] = v97;
        }
      }
    }
    v99 = 0.0;
    v47 = v107;
    v48 = v75;
    qmemcpy(v113, &stru_B26AF0[0xA].unk2C, sizeof(v113));
    v49 = v104;
    if ( v75 <= (double)v107 || v49 <= v48 )
    {
      if ( v49 > v48 )
      {
        if ( v75 > v47 )
        {
          v51 = flt_B366C8;
        }
        else
        {
          v53 = (v75 + dbl_A2F920 - v104) / (dbl_A2F920 - (v104 - v47));
          v51 = flt_B366C8;
          v86 = v53;
          v99 = (v86 + v86 - dbl_A2F928) * v51;
        }
      }
      else
      {
        v52 = (v48 - v49) / (dbl_A2F920 - (v49 - v47));
        v51 = flt_B366C8;
        v85 = v52;
        v99 = (v85 + v85 - dbl_A2F928) * v51;
      }
    }
    else
    {
      v50 = (v48 - v47) / (v49 - v47);
      v51 = flt_B366C8;
      v84 = v50;
      v99 = (1.0 - (v84 + v84)) * v51;
    }
    v54 = (float *)(*((_DWORD *)this + 1) + 0x54);
    v110 = -v99;
    v55 = flt_B366D0;
    *v54 = v110;
    v111 = v55;
    v54[1] = v111;
    v87 = fabs(v51);
    v56 = v87;
    v88 = fabs(v99);
    v112 = v56 - v88;
    v54[2] = v112;
    v57 = *((float **)this + 3);
    v113[0] = v99;
    v57[0x15] = v110;
    v57[0x16] = v111;
    v57[0x17] = v112;
    v58 = *((_DWORD *)this + 7);
    v113[3] = flt_B366D0;
    v113[6] = flt_B366D8;
    qmemcpy((void *)(v58 + 0x30), v113, 0x24u);
    v59 = *((_DWORD **)this + 7);
    v59[0x38] = *(_DWORD *)(a2 + 0x60);
    v59[0x39] = *(_DWORD *)(a2 + 0x64);
    v59[0x3A] = *(_DWORD *)(a2 + 0x68);
    ++v59[0x2E];
    v60 = *((_DWORD **)this + 7);
    v60[0x3B] = *(_DWORD *)(a2 + 0x6C);
    v60[0x3C] = *(_DWORD *)(a2 + 0x70);
    v61 = *(_DWORD *)(a2 + 0x74);
    ++v60[0x2E];
    v60[0x3D] = v61;
    v62 = *((_DWORD **)this + 7);
    v62[0x3E] = *(_DWORD *)(a2 + 0xB4);
    v62[0x3F] = *(_DWORD *)(a2 + 0xB8);
    v63 = *(_DWORD *)(a2 + 0xBC);
    ++v62[0x2E];
    v62[0x40] = v63;
    result = TES;
    if ( !TES || !result->ObjectLODRoot )
      goto LABEL_84;
    v105 = flt_B366B8 * a3;
    inited = InitBSShaderAccumulator();
    if ( inited )
    {
      v65 = 1.0;
      if ( *((float *)inited + 0x31) >= 1.0 )
      {
        v66 = 1;
        goto LABEL_71;
      }
    }
    else
    {
      v65 = 1.0;
    }
    v66 = 0;
LABEL_71:
    *((_BYTE *)this + 0x24) = 0;
    if ( v66 )
    {
      v89 = *((float *)this + 8) - v105;
      v67 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B366B0);
      v68 = *((_DWORD *)this + 3);
      if ( v67 <= v89 )
      {
        *(_WORD *)(v68 + 0x18) &= ~1u;
        v69 = *((_DWORD *)this + 3);
        v90 = *((float *)this + 8) - v105;
        *((float *)this + 8) = v90;
        v91 = fabs(v90);
        *(float *)(v69 + 0x60) = v91;
      }
      else
      {
        *(_WORD *)(v68 + 0x18) |= 1u;
        *((float *)this + 8) = 0.0;
      }
      goto LABEL_82;
    }
    v70 = *((float *)this + 8) + v105;
    if ( v70 < 1.0 )
    {
      v71 = v70;
      v72 = v65;
      v73 = v71;
      if ( v72 > *((float *)this + 8) )
      {
        *((float *)this + 8) = v73;
LABEL_81:
        *(_WORD *)(*((_DWORD *)this + 3) + 0x18) &= ~1u;
        v92 = fabs(*((float *)this + 8));
        *(float *)(*((_DWORD *)this + 3) + 0x60) = v92;
LABEL_82:
        result = *((TES **)this + 3);
        if ( ((int)result->niDirectionalLight & 0x20) == 0 )
          LOWORD(result->niDirectionalLight) |= 1u;
LABEL_84:
        v74 = *((_DWORD *)this + 2);
        if ( (*(_BYTE *)(a2 + 0xFC) & 4) != 0 )
          *(_WORD *)(v74 + 0x18) |= 1u;
        else
          *(_WORD *)(v74 + 0x18) &= ~1u;
        return result;
      }
      v65 = v72;
    }
    *((float *)this + 8) = v65;
    goto LABEL_81;
  }
  return result;
}
