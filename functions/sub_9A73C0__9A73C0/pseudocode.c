signed int __thiscall sub_9A73C0(_DWORD *this, int a2, int a3, NiObjectNET *a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // ebx
  char v10; // al
  int v11; // ebx
  _BYTE *v12; // esi
  bool v13; // zf
  float *v14; // ebx
  bool v15; // zf
  signed int result; // eax
  char v17; // al
  float *v18; // ebx
  char v19; // al
  float *v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  float *v26; // eax
  int v27; // edx
  int v28; // ecx
  char v29; // cl
  char v30; // dl
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  float *v47; // eax
  int v48; // ecx
  int v49; // ecx
  _DWORD *v50; // ecx
  float *v51; // edi
  int v52; // eax
  int v53; // ecx
  float *v54; // ecx
  float *v55; // eax
  float *v56; // ecx
  float *v57; // eax
  float *v58; // ecx
  float *v59; // eax
  float *v60; // ecx
  float *v61; // eax
  int v62; // ecx
  float *v63; // eax
  NiExtraData *ExtraData; // eax
  double v65; // st7
  float *v66; // eax
  float *v67; // esi
  float *v68; // esi
  _DWORD *v69; // edi
  NiObject *v70; // eax
  NiObject *v71; // eax
  char v72; // [esp+24h] [ebp-1D6h]
  char v73; // [esp+24h] [ebp-1D6h]
  char v74; // [esp+24h] [ebp-1D6h]
  char v75; // [esp+24h] [ebp-1D6h]
  char v76; // [esp+24h] [ebp-1D6h]
  char v77; // [esp+24h] [ebp-1D6h]
  char v78; // [esp+25h] [ebp-1D5h]
  char v79; // [esp+25h] [ebp-1D5h]
  char v80; // [esp+25h] [ebp-1D5h]
  char v81; // [esp+25h] [ebp-1D5h]
  char v82; // [esp+25h] [ebp-1D5h]
  char v83; // [esp+26h] [ebp-1D4h]
  char v84; // [esp+26h] [ebp-1D4h]
  char v85; // [esp+26h] [ebp-1D4h]
  char v86; // [esp+26h] [ebp-1D4h]
  char v87; // [esp+26h] [ebp-1D4h]
  char v88; // [esp+26h] [ebp-1D4h]
  char v89; // [esp+26h] [ebp-1D4h]
  char v90; // [esp+26h] [ebp-1D4h]
  float v91; // [esp+26h] [ebp-1D4h]
  float v92; // [esp+26h] [ebp-1D4h]
  float v93; // [esp+26h] [ebp-1D4h]
  float v94; // [esp+26h] [ebp-1D4h]
  float v95; // [esp+26h] [ebp-1D4h]
  float v96; // [esp+26h] [ebp-1D4h]
  float *v97; // [esp+2Ah] [ebp-1D0h]
  float *v98; // [esp+2Ah] [ebp-1D0h]
  char v99; // [esp+2Ah] [ebp-1D0h]
  char v100; // [esp+2Ah] [ebp-1D0h]
  char v101; // [esp+2Ah] [ebp-1D0h]
  char v102; // [esp+2Ah] [ebp-1D0h]
  char v103; // [esp+2Ah] [ebp-1D0h]
  char v104; // [esp+2Ah] [ebp-1D0h]
  char v105; // [esp+2Ah] [ebp-1D0h]
  char v106; // [esp+2Ah] [ebp-1D0h]
  float v107; // [esp+2Ah] [ebp-1D0h]
  int v108[3]; // [esp+2Eh] [ebp-1CCh] BYREF
  _BYTE v109[64]; // [esp+3Ah] [ebp-1C0h] BYREF
  _BYTE v110[64]; // [esp+7Ah] [ebp-180h] BYREF
  _BYTE v111[64]; // [esp+BAh] [ebp-140h] BYREF
  _BYTE v112[64]; // [esp+FAh] [ebp-100h] BYREF
  _BYTE v113[64]; // [esp+13Ah] [ebp-C0h] BYREF
  _BYTE v114[64]; // [esp+17Ah] [ebp-80h] BYREF
  _BYTE v115[64]; // [esp+1BAh] [ebp-40h] BYREF

  v9 = *(_DWORD *)(a3 + 0x10);
  switch ( v9 )
  {
    case 1:
    case 2:
    case 0xD:
    case 0xE:
      v10 = 0;
      v72 = 0;
      if ( v9 == 2 || v9 == 0xE )
        v10 = 1;
      if ( v9 == 0xD || v9 == 0xE )
        v72 = 1;
      qmemcpy(v109, (const void *)(*(this + 0xB) + 0x9C0), sizeof(v109));
      v11 = a2 << 6;
      v12 = v109;
      v13 = v10 == 0;
      goto LABEL_9;
    case 3:
    case 4:
    case 0xF:
    case 0x10:
      v17 = 0;
      v73 = 0;
      if ( v9 == 4 || v9 == 0x10 )
        v17 = 1;
      if ( v9 == 0xF || v9 == 0x10 )
        v73 = 1;
      qmemcpy(v109, (const void *)(*(this + 0xB) + 0x980), sizeof(v109));
      v18 = &flt_BAA9E0[0x10 * a2];
      qmemcpy(v18, v109, 0x40u);
      if ( v17 )
        D3DXMatrixInverse_0((int)v18, 0, (int)v18);
      if ( !v73 )
        return 9;
      D3DXMatrixTranspose_0((int)v18, (int)v18);
      return 9;
    case 5:
    case 6:
    case 0x11:
    case 0x12:
      v19 = 0;
      v74 = 0;
      if ( v9 == 6 || v9 == 0x12 )
        v19 = 1;
      if ( v9 == 0x11 || v9 == 0x12 )
        v74 = 1;
      v20 = &flt_BAA9E0[0x10 * a2];
      qmemcpy(v20, (const void *)(*(this + 0xB) + 0x940), 0x40u);
      if ( v19 )
        D3DXMatrixInverse_0((int)v20, 0, (int)v20);
      if ( !v74 )
        return 9;
      D3DXMatrixTranspose_0((int)v20, (int)v20);
      return 9;
    case 7:
    case 8:
    case 0x13:
    case 0x14:
      v75 = 0;
      v78 = 0;
      if ( v9 == 8 || v9 == 0x14 )
        v75 = 1;
      if ( v9 == 0x13 || v9 == 0x14 )
        v78 = 1;
      v21 = *(this + 0xB);
      qmemcpy(v110, (const void *)(v21 + 0x940), sizeof(v110));
      qmemcpy(v109, (const void *)(v21 + 0x980), sizeof(v109));
      D3DXMatrixMultiply_0((int)v114, (int)v110, (int)v109);
      v14 = &flt_BAA9E0[0x10 * a2];
      qmemcpy(v14, v114, 0x40u);
      if ( v75 )
        D3DXMatrixInverse_0((int)v14, 0, (int)v14);
      v15 = v78 == 0;
      goto LABEL_12;
    case 9:
    case 0xA:
    case 0x15:
    case 0x16:
      v79 = 0;
      v72 = 0;
      if ( v9 == 0xA || v9 == 0x16 )
        v79 = 1;
      if ( v9 == 0x15 || v9 == 0x16 )
        v72 = 1;
      v22 = *(this + 0xB);
      qmemcpy(v109, (const void *)(v22 + 0x980), sizeof(v109));
      qmemcpy(v110, (const void *)(v22 + 0x9C0), sizeof(v110));
      D3DXMatrixMultiply_0((int)v113, (int)v109, (int)v110);
      v11 = a2 << 6;
      v13 = v79 == 0;
      v12 = v113;
      goto LABEL_9;
    case 0xB:
    case 0xC:
    case 0x17:
    case 0x18:
      v80 = 0;
      v72 = 0;
      if ( v9 == 0xC || v9 == 0x18 )
        v80 = 1;
      if ( v9 == 0x17 || v9 == 0x18 )
        v72 = 1;
      v23 = *(this + 0xB);
      qmemcpy(v109, (const void *)(v23 + 0x940), sizeof(v109));
      qmemcpy(v110, (const void *)(v23 + 0x980), sizeof(v110));
      qmemcpy(v112, (const void *)(v23 + 0x9C0), sizeof(v112));
      D3DXMatrixMultiply_0((int)v111, (int)v109, (int)v110);
      D3DXMatrixMultiply_0((int)v115, (int)v111, (int)v112);
      v11 = a2 << 6;
      v13 = v80 == 0;
      v12 = v115;
LABEL_9:
      v14 = (float *)((char *)flt_BAA9E0 + v11);
      qmemcpy(v14, v12, 0x40u);
      if ( !v13 )
        D3DXMatrixInverse_0((int)v14, 0, (int)v14);
      v15 = v72 == 0;
LABEL_12:
      if ( !v15 )
        D3DXMatrixTranspose_0((int)v14, (int)v14);
      return 9;
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
      if ( !a5 )
        goto LABEL_187;
      qmemcpy(v111, *(const void **)(a5 + 0x28), sizeof(v111));
      qmemcpy(&flt_BAA9E0[0x10 * a2], v111, 0x40u);
      v81 = 0;
      v76 = 0;
      if ( v9 == 0x1A || v9 == 0x1C )
        v81 = 1;
      if ( v9 == 0x1B || v9 == 0x1C )
        v76 = 1;
      qmemcpy(v112, (const void *)(*(this + 0xB) + 0x980), sizeof(v112));
      v97 = &flt_BAA9E0[0x10 * a2];
      D3DXMatrixMultiply_0((int)v97, (int)v97, (int)v112);
      if ( v81 )
        D3DXMatrixInverse_0((int)v97, 0, (int)v97);
      if ( !v76 )
        return 9;
      D3DXMatrixTranspose_0((int)v97, (int)v97);
      return 9;
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
      if ( !a5 )
        goto LABEL_187;
      qmemcpy(v111, *(const void **)(a5 + 0x28), sizeof(v111));
      qmemcpy(&flt_BAA9E0[0x10 * a2], v111, 0x40u);
      v82 = 0;
      v77 = 0;
      if ( v9 == 0x1E || v9 == 0x20 )
        v82 = 1;
      if ( v9 == 0x1F || v9 == 0x20 )
        v77 = 1;
      v24 = *(this + 0xB);
      qmemcpy(v112, (const void *)(v24 + 0x980), sizeof(v112));
      qmemcpy(v110, (const void *)(v24 + 0x9C0), sizeof(v110));
      v98 = &flt_BAA9E0[0x10 * a2];
      D3DXMatrixMultiply_0((int)v98, (int)v98, (int)v112);
      D3DXMatrixMultiply_0((int)v98, (int)v98, (int)v110);
      if ( v82 )
        D3DXMatrixInverse_0((int)v98, 0, (int)v98);
      if ( !v77 )
        return 9;
      D3DXMatrixTranspose_0((int)v98, (int)v98);
      return 9;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      v25 = *(_DWORD *)(a6 + 0x20);
      v26 = 0;
      v83 = 0;
      v99 = 0;
      if ( v25 )
      {
        v27 = *(_DWORD *)(v25 + 0x20);
        if ( *(_DWORD *)v27 )
        {
          v28 = *(_DWORD *)(*(_DWORD *)v27 + 0xC);
          if ( v28 )
          {
            v26 = (float *)sub_76C710(v28);
            if ( v9 == 0x26 || v9 == 0x28 )
              v83 = 1;
            if ( v9 == 0x27 || v9 == 0x28 )
              v99 = 1;
          }
        }
      }
      v29 = v99;
      v30 = v83;
      goto LABEL_90;
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
      v31 = *(_DWORD *)(a6 + 0x20);
      v26 = 0;
      v100 = 0;
      v84 = 0;
      if ( v31 )
      {
        v32 = *(_DWORD *)(*(_DWORD *)(v31 + 0x20) + 0x14);
        if ( v32 )
        {
          v33 = *(_DWORD *)(v32 + 0xC);
          if ( v33 )
          {
            v26 = (float *)sub_76C710(v33);
            if ( v9 == 0x2A || v9 == 0x2C )
              v100 = 1;
            if ( v9 == 0x2B || v9 == 0x2C )
              v84 = 1;
          }
        }
      }
      v29 = v84;
      v30 = v100;
      goto LABEL_90;
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
      v34 = *(_DWORD *)(a6 + 0x20);
      v26 = 0;
      v101 = 0;
      v85 = 0;
      if ( v34 )
      {
        v35 = *(_DWORD *)(*(_DWORD *)(v34 + 0x20) + 8);
        if ( v35 )
        {
          v36 = *(_DWORD *)(v35 + 0xC);
          if ( v36 )
          {
            v26 = (float *)sub_76C710(v36);
            if ( v9 == 0x2E || v9 == 0x30 )
              v101 = 1;
            if ( v9 == 0x2F || v9 == 0x30 )
              v85 = 1;
          }
        }
      }
      v29 = v85;
      v30 = v101;
      goto LABEL_90;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
      v37 = *(_DWORD *)(a6 + 0x20);
      v26 = 0;
      v102 = 0;
      v86 = 0;
      if ( v37 )
      {
        v38 = *(_DWORD *)(*(_DWORD *)(v37 + 0x20) + 0xC);
        if ( v38 )
        {
          v39 = *(_DWORD *)(v38 + 0xC);
          if ( v39 )
          {
            v26 = (float *)sub_76C710(v39);
            if ( v9 == 0x32 || v9 == 0x34 )
              v102 = 1;
            if ( v9 == 0x33 || v9 == 0x34 )
              v86 = 1;
          }
        }
      }
      v29 = v86;
      v30 = v102;
      goto LABEL_90;
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      v40 = *(_DWORD *)(a6 + 0x20);
      v26 = 0;
      v103 = 0;
      v87 = 0;
      if ( v40 )
      {
        v41 = *(_DWORD *)(*(_DWORD *)(v40 + 0x20) + 0x10);
        if ( v41 )
        {
          v42 = *(_DWORD *)(v41 + 0xC);
          if ( v42 )
          {
            v26 = (float *)sub_76C710(v42);
            if ( v9 == 0x36 || v9 == 0x38 )
              v103 = 1;
            if ( v9 == 0x37 || v9 == 0x38 )
              v87 = 1;
          }
        }
      }
      v29 = v87;
      v30 = v103;
      goto LABEL_90;
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
      v43 = *(_DWORD *)(a6 + 0x20);
      v26 = 0;
      v104 = 0;
      v88 = 0;
      if ( v43 )
      {
        v44 = *(_DWORD *)(*(_DWORD *)(v43 + 0x20) + 0x14);
        if ( v44 )
        {
          v45 = *(_DWORD *)(v44 + 0xC);
          if ( v45 )
          {
            v26 = (float *)sub_76C710(v45);
            if ( v9 == 0x3A || v9 == 0x3C )
              v104 = 1;
            if ( v9 == 0x3B || v9 == 0x3C )
              v88 = 1;
          }
        }
      }
      v29 = v88;
      v30 = v104;
LABEL_90:
      sub_9A5510(&flt_BAA9E0[0x10 * a2], v26, v30, v29);
      return 9;
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
      v46 = *(_DWORD *)(a6 + 0x20);
      v47 = 0;
      v105 = 0;
      v89 = 0;
      if ( v46 )
      {
        v48 = *(_DWORD *)(*(_DWORD *)(v46 + 0x20) + 4 * *(_DWORD *)(a3 + 0x18) + 0x18);
        if ( v48 )
        {
          v49 = *(_DWORD *)(v48 + 0xC);
          if ( v49 )
          {
            v47 = (float *)sub_76C710(v49);
            if ( v9 == 0x3E || v9 == 0x40 )
              v105 = 1;
            if ( v9 == 0x3F || v9 == 0x40 )
              v89 = 1;
          }
        }
      }
      sub_9A5510(&flt_BAA9E0[0x10 * a2], v47, v105, v89);
      return 9;
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
      v50 = *(_DWORD **)(a6 + 0x20);
      v51 = 0;
      v106 = 0;
      v90 = 0;
      if ( v50 )
      {
        v52 = sub_6D1920(v50, *(_DWORD *)(a3 + 0x18));
        if ( v52 )
        {
          v53 = *(_DWORD *)(v52 + 0xC);
          if ( v53 )
          {
            v51 = (float *)sub_76C710(v53);
            if ( v9 == 0x42 || v9 == 0x44 )
              v106 = 1;
            if ( v9 == 0x43 || v9 == 0x44 )
              v90 = 1;
          }
        }
      }
      sub_9A5510(&flt_BAA9E0[0x10 * a2], v51, v106, v90);
      return 9;
    case 0x49:
      v54 = *(float **)(a6 + 0x10);
      if ( !v54 )
        goto LABEL_187;
      v55 = (float *)(0x10 * a2);
      v55[0x2EAA9C] = v54[0xA];
      v55[0x2EAA9D] = v54[0xB];
      v55[0x2EAA9E] = v54[0xC];
      v55[0x2EAA9F] = v54[0x14];
      result = 0xA;
      break;
    case 0x4A:
      v56 = *(float **)(a6 + 0x10);
      if ( !v56 )
        goto LABEL_187;
      v57 = (float *)(0x10 * a2);
      v57[0x2EAA9C] = v56[7];
      v57[0x2EAA9D] = v56[8];
      v57[0x2EAA9E] = v56[9];
      v57[0x2EAA9F] = v56[0x14];
      result = 0xA;
      break;
    case 0x4B:
      v58 = *(float **)(a6 + 0x10);
      if ( !v58 )
        goto LABEL_187;
      v59 = (float *)(0x10 * a2);
      v59[0x2EAA9C] = v58[0xD];
      v59[0x2EAA9D] = v58[0xE];
      v59[0x2EAA9E] = v58[0xF];
      v59[0x2EAA9F] = v58[0x14];
      result = 0xA;
      break;
    case 0x4C:
      v60 = *(float **)(a6 + 0x10);
      if ( !v60 )
        goto LABEL_187;
      v61 = (float *)(0x10 * a2);
      v61[0x2EAA9C] = v60[0x10];
      v61[0x2EAA9D] = v60[0x11];
      v61[0x2EAA9E] = v60[0x12];
      v61[0x2EAA9F] = v60[0x14];
      result = 0xA;
      break;
    case 0x4D:
      v62 = *(_DWORD *)(a6 + 0x10);
      if ( !v62 )
        goto LABEL_187;
      v63 = (float *)(0x10 * a2);
      v63[0x2EAA9C] = *(float *)(v62 + 0x4C);
      v63[0x2EAA9D] = *(float *)(v62 + 0x4C);
      v63[0x2EAA9E] = *(float *)(v62 + 0x4C);
      v63[0x2EAA9F] = *(float *)(v62 + 0x4C);
      result = 0xA;
      break;
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
      ExtraData = NiObjectNET_GetExtraData(a4, off_B329E4[0]);
      if ( !ExtraData )
        return 0x80000010;
      v107 = *(float *)&ExtraData[1].__vftable;
      switch ( v9 )
      {
        case 'R':
          v65 = v107;
          goto LABEL_176;
        case 'S':
          v91 = sin(v107);
          v65 = v91;
          goto LABEL_176;
        case 'T':
          v92 = cos(v107);
          v65 = v92;
          goto LABEL_176;
        case 'U':
          v93 = tan(v107);
          v65 = v93;
LABEL_176:
          v66 = (float *)(0x10 * a2);
          v66[0x2EAA9C] = v65;
          v66[0x2EAA9D] = v65;
          v66[0x2EAA9E] = v65;
          v66[0x2EAA9F] = v65;
          result = 7;
          break;
        case 'V':
          v67 = (float *)(0x10 * a2);
          v67[0x2EAA9C] = v107;
          v94 = sin(v107);
          v67[0x2EAA9D] = v94;
          v95 = cos(v107);
          v67[0x2EAA9E] = v95;
          v96 = tan(v107);
          v67[0x2EAA9F] = v96;
          result = 7;
          break;
        default:
          goto LABEL_187;
      }
      return result;
    case 0x57:
      v68 = (float *)(0x10 * a2);
      v68[0x2EAA9C] = 0.0;
      v68[0x2EAA9D] = 0.0;
      v68[0x2EAA9E] = 0.0;
      v68[0x2EAA9F] = 1.0;
      if ( a7 )
      {
        v69 = *(_DWORD **)(a7 + 0xC);
        while ( v69 )
        {
          v70 = (NiObject *)v69[1];
          v69 = (_DWORD *)*v69;
          v71 = NiRTTI_Cast((BSStringT *)dword_B40224, v70);
          if ( v71 )
          {
            sub_775F60((float *)&v71[0x1C], (float *)v108, *(float *)&v71[0x1B].members.m_uiRefCount);
            flt_BAAA70[4 * a2] = *(float *)v108 + flt_BAAA70[4 * a2];
            flt_BAAA74[4 * a2] = *(float *)&v108[1] + flt_BAAA74[4 * a2];
            flt_BAAA78[4 * a2] = flt_BAAA78[4 * a2] + *(float *)&v108[2];
          }
        }
      }
      return 7;
    default:
LABEL_187:
      result = 0;
      break;
  }
  return result;
}
