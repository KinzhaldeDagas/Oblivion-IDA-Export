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

  v9 = *(_DWORD *)(a3 + 0x10); /*0x9a73d1*/
  switch ( v9 ) /*0x9a73ea*/
  {
    case 1: /*0x9a73ea*/
    case 2: /*0x9a73ea*/
    case 0xD: /*0x9a73ea*/
    case 0xE: /*0x9a73ea*/
      v10 = 0; /*0x9a73f1*/
      v72 = 0; /*0x9a73f6*/
      if ( v9 == 2 || v9 == 0xE ) /*0x9a7401*/
        v10 = 1; /*0x9a7403*/
      if ( v9 == 0xD || v9 == 0xE ) /*0x9a740d*/
        v72 = 1; /*0x9a740f*/
      qmemcpy(v109, (const void *)(*(this + 0xB) + 0x9C0), sizeof(v109)); /*0x9a7428*/
      v11 = a2 << 6; /*0x9a742a*/
      v12 = v109; /*0x9a742d*/
      v13 = v10 == 0; /*0x9a7431*/
      goto LABEL_9; /*0x9a7431*/
    case 3: /*0x9a73ea*/
    case 4: /*0x9a73ea*/
    case 0xF: /*0x9a73ea*/
    case 0x10: /*0x9a73ea*/
      v17 = 0; /*0x9a7469*/
      v73 = 0; /*0x9a746e*/
      if ( v9 == 4 || v9 == 0x10 ) /*0x9a7479*/
        v17 = 1; /*0x9a747b*/
      if ( v9 == 0xF || v9 == 0x10 ) /*0x9a7485*/
        v73 = 1; /*0x9a7487*/
      qmemcpy(v109, (const void *)(*(this + 0xB) + 0x980), sizeof(v109)); /*0x9a74a5*/
      v18 = &unk_BAA9E0[0x10 * a2]; /*0x9a74a7*/
      qmemcpy(v18, v109, 0x40u); /*0x9a74b8*/
      if ( v17 ) /*0x9a74ba*/
        D3DXMatrixInverse_0((int)v18, 0, (int)v18); /*0x9a74c0*/
      if ( !v73 ) /*0x9a74ca*/
        return 9; /*0x9a74ca*/
      D3DXMatrixTranspose_0((int)v18, (int)v18); /*0x9a74ce*/
      return 9; /*0x9a74de*/
    case 5: /*0x9a73ea*/
    case 6: /*0x9a73ea*/
    case 0x11: /*0x9a73ea*/
    case 0x12: /*0x9a73ea*/
      v19 = 0; /*0x9a74e1*/
      v74 = 0; /*0x9a74e6*/
      if ( v9 == 6 || v9 == 0x12 ) /*0x9a74f1*/
        v19 = 1; /*0x9a74f3*/
      if ( v9 == 0x11 || v9 == 0x12 ) /*0x9a74fd*/
        v74 = 1; /*0x9a74ff*/
      v20 = &unk_BAA9E0[0x10 * a2]; /*0x9a750c*/
      qmemcpy(v20, (const void *)(*(this + 0xB) + 0x940), 0x40u); /*0x9a7521*/
      if ( v19 ) /*0x9a7523*/
        D3DXMatrixInverse_0((int)v20, 0, (int)v20); /*0x9a7529*/
      if ( !v74 ) /*0x9a7533*/
        return 9; /*0x9a7533*/
      D3DXMatrixTranspose_0((int)v20, (int)v20); /*0x9a753b*/
      return 9; /*0x9a754b*/
    case 7: /*0x9a73ea*/
    case 8: /*0x9a73ea*/
    case 0x13: /*0x9a73ea*/
    case 0x14: /*0x9a73ea*/
      v75 = 0; /*0x9a7551*/
      v78 = 0; /*0x9a7556*/
      if ( v9 == 8 || v9 == 0x14 ) /*0x9a7562*/
        v75 = 1; /*0x9a7564*/
      if ( v9 == 0x13 || v9 == 0x14 ) /*0x9a7570*/
        v78 = 1; /*0x9a7572*/
      v21 = *(this + 0xB); /*0x9a7576*/
      qmemcpy(v110, (const void *)(v21 + 0x940), sizeof(v110)); /*0x9a758d*/
      qmemcpy(v109, (const void *)(v21 + 0x980), sizeof(v109)); /*0x9a759a*/
      D3DXMatrixMultiply_0((int)v114, (int)v110, (int)v109); /*0x9a75ae*/
      v14 = &unk_BAA9E0[0x10 * a2]; /*0x9a75be*/
      qmemcpy(v14, v114, 0x40u); /*0x9a75d2*/
      if ( v75 ) /*0x9a75d4*/
        D3DXMatrixInverse_0((int)v14, 0, (int)v14); /*0x9a75da*/
      v15 = v78 == 0; /*0x9a75df*/
      goto LABEL_12; /*0x9a75e4*/
    case 9: /*0x9a73ea*/
    case 0xA: /*0x9a73ea*/
    case 0x15: /*0x9a73ea*/
    case 0x16: /*0x9a73ea*/
      v79 = 0; /*0x9a75ec*/
      v72 = 0; /*0x9a75f1*/
      if ( v9 == 0xA || v9 == 0x16 ) /*0x9a75fd*/
        v79 = 1; /*0x9a75ff*/
      if ( v9 == 0x15 || v9 == 0x16 ) /*0x9a760b*/
        v72 = 1; /*0x9a760d*/
      v22 = *(this + 0xB); /*0x9a7611*/
      qmemcpy(v109, (const void *)(v22 + 0x980), sizeof(v109)); /*0x9a7628*/
      qmemcpy(v110, (const void *)(v22 + 0x9C0), sizeof(v110)); /*0x9a7635*/
      D3DXMatrixMultiply_0((int)v113, (int)v109, (int)v110); /*0x9a7649*/
      v11 = a2 << 6; /*0x9a7651*/
      v13 = v79 == 0; /*0x9a7654*/
      v12 = v113; /*0x9a7659*/
      goto LABEL_9; /*0x9a7660*/
    case 0xB: /*0x9a73ea*/
    case 0xC: /*0x9a73ea*/
    case 0x17: /*0x9a73ea*/
    case 0x18: /*0x9a73ea*/
      v80 = 0; /*0x9a7668*/
      v72 = 0; /*0x9a766d*/
      if ( v9 == 0xC || v9 == 0x18 ) /*0x9a7679*/
        v80 = 1; /*0x9a767b*/
      if ( v9 == 0x17 || v9 == 0x18 ) /*0x9a7687*/
        v72 = 1; /*0x9a7689*/
      v23 = *(this + 0xB); /*0x9a768d*/
      qmemcpy(v109, (const void *)(v23 + 0x940), sizeof(v109)); /*0x9a769f*/
      qmemcpy(v110, (const void *)(v23 + 0x980), sizeof(v110)); /*0x9a76b5*/
      qmemcpy(v112, (const void *)(v23 + 0x9C0), sizeof(v112)); /*0x9a76c5*/
      D3DXMatrixMultiply_0((int)v111, (int)v109, (int)v110); /*0x9a76d9*/
      D3DXMatrixMultiply_0((int)v115, (int)v111, (int)v112); /*0x9a76f6*/
      v11 = a2 << 6; /*0x9a76fe*/
      v13 = v80 == 0; /*0x9a7701*/
      v12 = v115; /*0x9a7706*/
LABEL_9:
      v14 = (float *)((char *)unk_BAA9E0 + v11); /*0x9a7433*/
      qmemcpy(v14, v12, 0x40u); /*0x9a7440*/
      if ( !v13 ) /*0x9a7442*/
        D3DXMatrixInverse_0((int)v14, 0, (int)v14); /*0x9a7448*/
      v15 = v72 == 0; /*0x9a744d*/
LABEL_12:
      if ( !v15 ) /*0x9a7452*/
        D3DXMatrixTranspose_0((int)v14, (int)v14); /*0x9a7456*/
      return 9; /*0x9a7456*/
    case 0x19: /*0x9a73ea*/
    case 0x1A: /*0x9a73ea*/
    case 0x1B: /*0x9a73ea*/
    case 0x1C: /*0x9a73ea*/
      if ( !a5 ) /*0x9a7717*/
        goto LABEL_187; /*0x9a7717*/
      qmemcpy(v111, *(const void **)(a5 + 0x28), sizeof(v111)); /*0x9a772c*/
      qmemcpy(&unk_BAA9E0[0x10 * a2], v111, 0x40u); /*0x9a774d*/
      v81 = 0; /*0x9a774f*/
      v76 = 0; /*0x9a7754*/
      if ( v9 == 0x1A || v9 == 0x1C ) /*0x9a7760*/
        v81 = 1; /*0x9a7762*/
      if ( v9 == 0x1B || v9 == 0x1C ) /*0x9a776e*/
        v76 = 1; /*0x9a7770*/
      qmemcpy(v112, (const void *)(*(this + 0xB) + 0x980), sizeof(v112)); /*0x9a7789*/
      v97 = &unk_BAA9E0[0x10 * a2]; /*0x9a7749*/
      D3DXMatrixMultiply_0((int)v97, (int)v97, (int)v112); /*0x9a7799*/
      if ( v81 ) /*0x9a77a3*/
        D3DXMatrixInverse_0((int)v97, 0, (int)v97); /*0x9a77a9*/
      if ( !v76 ) /*0x9a77b3*/
        return 9; /*0x9a77b3*/
      D3DXMatrixTranspose_0((int)v97, (int)v97); /*0x9a77bb*/
      return 9; /*0x9a77cb*/
    case 0x1D: /*0x9a73ea*/
    case 0x1E: /*0x9a73ea*/
    case 0x1F: /*0x9a73ea*/
    case 0x20: /*0x9a73ea*/
      if ( !a5 ) /*0x9a77d3*/
        goto LABEL_187; /*0x9a77d3*/
      qmemcpy(v111, *(const void **)(a5 + 0x28), sizeof(v111)); /*0x9a77e8*/
      qmemcpy(&unk_BAA9E0[0x10 * a2], v111, 0x40u); /*0x9a7809*/
      v82 = 0; /*0x9a780b*/
      v77 = 0; /*0x9a7810*/
      if ( v9 == 0x1E || v9 == 0x20 ) /*0x9a781c*/
        v82 = 1; /*0x9a781e*/
      if ( v9 == 0x1F || v9 == 0x20 ) /*0x9a782a*/
        v77 = 1; /*0x9a782c*/
      v24 = *(this + 0xB); /*0x9a7830*/
      qmemcpy(v112, (const void *)(v24 + 0x980), sizeof(v112)); /*0x9a7845*/
      qmemcpy(v110, (const void *)(v24 + 0x9C0), sizeof(v110)); /*0x9a785d*/
      v98 = &unk_BAA9E0[0x10 * a2]; /*0x9a7805*/
      D3DXMatrixMultiply_0((int)v98, (int)v98, (int)v112); /*0x9a7866*/
      D3DXMatrixMultiply_0((int)v98, (int)v98, (int)v110); /*0x9a7872*/
      if ( v82 ) /*0x9a787c*/
        D3DXMatrixInverse_0((int)v98, 0, (int)v98); /*0x9a7882*/
      if ( !v77 ) /*0x9a788c*/
        return 9; /*0x9a745b*/
      D3DXMatrixTranspose_0((int)v98, (int)v98); /*0x9a7894*/
      return 9; /*0x9a78a4*/
    case 0x25: /*0x9a73ea*/
    case 0x26: /*0x9a73ea*/
    case 0x27: /*0x9a73ea*/
    case 0x28: /*0x9a73ea*/
      v25 = *(_DWORD *)(a6 + 0x20); /*0x9a78aa*/
      v26 = 0; /*0x9a78ad*/
      v83 = 0; /*0x9a78b1*/
      v99 = 0; /*0x9a78b5*/
      if ( v25 ) /*0x9a78b9*/
      {
        v27 = *(_DWORD *)(v25 + 0x20); /*0x9a78bb*/
        if ( *(_DWORD *)v27 ) /*0x9a78be*/
        {
          v28 = *(_DWORD *)(*(_DWORD *)v27 + 0xC); /*0x9a78c4*/
          if ( v28 ) /*0x9a78c9*/
          {
            v26 = (float *)sub_76C710(v28); /*0x9a78cb*/
            if ( v9 == 0x26 || v9 == 0x28 ) /*0x9a78da*/
              v83 = 1; /*0x9a78dc*/
            if ( v9 == 0x27 || v9 == 0x28 ) /*0x9a78e8*/
              v99 = 1; /*0x9a78ea*/
          }
        }
      }
      v29 = v99; /*0x9a78ee*/
      v30 = v83; /*0x9a78f2*/
      goto LABEL_90; /*0x9a78f2*/
    case 0x29: /*0x9a73ea*/
    case 0x2A: /*0x9a73ea*/
    case 0x2B: /*0x9a73ea*/
    case 0x2C: /*0x9a73ea*/
      v31 = *(_DWORD *)(a6 + 0x20); /*0x9a791e*/
      v26 = 0; /*0x9a7921*/
      v100 = 0; /*0x9a7925*/
      v84 = 0; /*0x9a7929*/
      if ( v31 ) /*0x9a792d*/
      {
        v32 = *(_DWORD *)(*(_DWORD *)(v31 + 0x20) + 0x14); /*0x9a7932*/
        if ( v32 ) /*0x9a7937*/
        {
          v33 = *(_DWORD *)(v32 + 0xC); /*0x9a7939*/
          if ( v33 ) /*0x9a793e*/
          {
            v26 = (float *)sub_76C710(v33); /*0x9a7940*/
            if ( v9 == 0x2A || v9 == 0x2C ) /*0x9a794f*/
              v100 = 1; /*0x9a7951*/
            if ( v9 == 0x2B || v9 == 0x2C ) /*0x9a795d*/
              v84 = 1; /*0x9a795f*/
          }
        }
      }
      v29 = v84; /*0x9a7963*/
      v30 = v100; /*0x9a7967*/
      goto LABEL_90; /*0x9a796b*/
    case 0x2D: /*0x9a73ea*/
    case 0x2E: /*0x9a73ea*/
    case 0x2F: /*0x9a73ea*/
    case 0x30: /*0x9a73ea*/
      v34 = *(_DWORD *)(a6 + 0x20); /*0x9a7970*/
      v26 = 0; /*0x9a7973*/
      v101 = 0; /*0x9a7977*/
      v85 = 0; /*0x9a797b*/
      if ( v34 ) /*0x9a797f*/
      {
        v35 = *(_DWORD *)(*(_DWORD *)(v34 + 0x20) + 8); /*0x9a7984*/
        if ( v35 ) /*0x9a7989*/
        {
          v36 = *(_DWORD *)(v35 + 0xC); /*0x9a798b*/
          if ( v36 ) /*0x9a7990*/
          {
            v26 = (float *)sub_76C710(v36); /*0x9a7992*/
            if ( v9 == 0x2E || v9 == 0x30 ) /*0x9a79a1*/
              v101 = 1; /*0x9a79a3*/
            if ( v9 == 0x2F || v9 == 0x30 ) /*0x9a79af*/
              v85 = 1; /*0x9a79b1*/
          }
        }
      }
      v29 = v85; /*0x9a79b5*/
      v30 = v101; /*0x9a79b9*/
      goto LABEL_90; /*0x9a79bd*/
    case 0x31: /*0x9a73ea*/
    case 0x32: /*0x9a73ea*/
    case 0x33: /*0x9a73ea*/
    case 0x34: /*0x9a73ea*/
      v37 = *(_DWORD *)(a6 + 0x20); /*0x9a79c5*/
      v26 = 0; /*0x9a79c8*/
      v102 = 0; /*0x9a79cc*/
      v86 = 0; /*0x9a79d0*/
      if ( v37 ) /*0x9a79d4*/
      {
        v38 = *(_DWORD *)(*(_DWORD *)(v37 + 0x20) + 0xC); /*0x9a79d9*/
        if ( v38 ) /*0x9a79de*/
        {
          v39 = *(_DWORD *)(v38 + 0xC); /*0x9a79e0*/
          if ( v39 ) /*0x9a79e5*/
          {
            v26 = (float *)sub_76C710(v39); /*0x9a79e7*/
            if ( v9 == 0x32 || v9 == 0x34 ) /*0x9a79f6*/
              v102 = 1; /*0x9a79f8*/
            if ( v9 == 0x33 || v9 == 0x34 ) /*0x9a7a04*/
              v86 = 1; /*0x9a7a06*/
          }
        }
      }
      v29 = v86; /*0x9a7a0a*/
      v30 = v102; /*0x9a7a0e*/
      goto LABEL_90; /*0x9a7a12*/
    case 0x35: /*0x9a73ea*/
    case 0x36: /*0x9a73ea*/
    case 0x37: /*0x9a73ea*/
    case 0x38: /*0x9a73ea*/
      v40 = *(_DWORD *)(a6 + 0x20); /*0x9a7a1a*/
      v26 = 0; /*0x9a7a1d*/
      v103 = 0; /*0x9a7a21*/
      v87 = 0; /*0x9a7a25*/
      if ( v40 ) /*0x9a7a29*/
      {
        v41 = *(_DWORD *)(*(_DWORD *)(v40 + 0x20) + 0x10); /*0x9a7a2e*/
        if ( v41 ) /*0x9a7a33*/
        {
          v42 = *(_DWORD *)(v41 + 0xC); /*0x9a7a35*/
          if ( v42 ) /*0x9a7a3a*/
          {
            v26 = (float *)sub_76C710(v42); /*0x9a7a3c*/
            if ( v9 == 0x36 || v9 == 0x38 ) /*0x9a7a4b*/
              v103 = 1; /*0x9a7a4d*/
            if ( v9 == 0x37 || v9 == 0x38 ) /*0x9a7a59*/
              v87 = 1; /*0x9a7a5b*/
          }
        }
      }
      v29 = v87; /*0x9a7a5f*/
      v30 = v103; /*0x9a7a63*/
      goto LABEL_90; /*0x9a7a67*/
    case 0x39: /*0x9a73ea*/
    case 0x3A: /*0x9a73ea*/
    case 0x3B: /*0x9a73ea*/
    case 0x3C: /*0x9a73ea*/
      v43 = *(_DWORD *)(a6 + 0x20); /*0x9a7a6f*/
      v26 = 0; /*0x9a7a72*/
      v104 = 0; /*0x9a7a76*/
      v88 = 0; /*0x9a7a7a*/
      if ( v43 ) /*0x9a7a7e*/
      {
        v44 = *(_DWORD *)(*(_DWORD *)(v43 + 0x20) + 0x14); /*0x9a7a83*/
        if ( v44 ) /*0x9a7a88*/
        {
          v45 = *(_DWORD *)(v44 + 0xC); /*0x9a7a8a*/
          if ( v45 ) /*0x9a7a8f*/
          {
            v26 = (float *)sub_76C710(v45); /*0x9a7a91*/
            if ( v9 == 0x3A || v9 == 0x3C ) /*0x9a7aa0*/
              v104 = 1; /*0x9a7aa2*/
            if ( v9 == 0x3B || v9 == 0x3C ) /*0x9a7aae*/
              v88 = 1; /*0x9a7ab0*/
          }
        }
      }
      v29 = v88; /*0x9a7ab4*/
      v30 = v104; /*0x9a7ab8*/
LABEL_90:
      sub_9A5510(&unk_BAA9E0[0x10 * a2], v26, v30, v29); /*0x9a78f6*/
      return 9; /*0x9a7905*/
    case 0x3D: /*0x9a73ea*/
    case 0x3E: /*0x9a73ea*/
    case 0x3F: /*0x9a73ea*/
    case 0x40: /*0x9a73ea*/
      v46 = *(_DWORD *)(a6 + 0x20); /*0x9a7ac4*/
      v47 = 0; /*0x9a7ac7*/
      v105 = 0; /*0x9a7acb*/
      v89 = 0; /*0x9a7acf*/
      if ( v46 ) /*0x9a7ad3*/
      {
        v48 = *(_DWORD *)(*(_DWORD *)(v46 + 0x20) + 4 * *(_DWORD *)(a3 + 0x18) + 0x18); /*0x9a7adb*/
        if ( v48 ) /*0x9a7ae1*/
        {
          v49 = *(_DWORD *)(v48 + 0xC); /*0x9a7ae3*/
          if ( v49 ) /*0x9a7ae8*/
          {
            v47 = (float *)sub_76C710(v49); /*0x9a7aea*/
            if ( v9 == 0x3E || v9 == 0x40 ) /*0x9a7af9*/
              v105 = 1; /*0x9a7afb*/
            if ( v9 == 0x3F || v9 == 0x40 ) /*0x9a7b07*/
              v89 = 1; /*0x9a7b09*/
          }
        }
      }
      sub_9A5510(&unk_BAA9E0[0x10 * a2], v47, v105, v89); /*0x9a7b25*/
      return 9; /*0x9a7b25*/
    case 0x41: /*0x9a73ea*/
    case 0x42: /*0x9a73ea*/
    case 0x43: /*0x9a73ea*/
    case 0x44: /*0x9a73ea*/
      v50 = *(_DWORD **)(a6 + 0x20); /*0x9a7b2d*/
      v51 = 0; /*0x9a7b30*/
      v106 = 0; /*0x9a7b34*/
      v90 = 0; /*0x9a7b39*/
      if ( v50 ) /*0x9a7b3e*/
      {
        v52 = sub_6D1920(v50, *(_DWORD *)(a3 + 0x18)); /*0x9a7b44*/
        if ( v52 ) /*0x9a7b4b*/
        {
          v53 = *(_DWORD *)(v52 + 0xC); /*0x9a7b4d*/
          if ( v53 ) /*0x9a7b52*/
          {
            v51 = (float *)sub_76C710(v53); /*0x9a7b5c*/
            if ( v9 == 0x42 || v9 == 0x44 ) /*0x9a7b65*/
              v106 = 1; /*0x9a7b67*/
            if ( v9 == 0x43 || v9 == 0x44 ) /*0x9a7b73*/
              v90 = 1; /*0x9a7b75*/
          }
        }
      }
      sub_9A5510(&unk_BAA9E0[0x10 * a2], v51, v106, v90); /*0x9a7b91*/
      return 9; /*0x9a7918*/
    case 0x49: /*0x9a73ea*/
      v54 = *(float **)(a6 + 0x10); /*0x9a7b99*/
      if ( !v54 ) /*0x9a7b9e*/
        goto LABEL_187; /*0x9a7b9e*/
      v55 = (float *)(0x10 * a2); /*0x9a7baa*/
      v55[0x2EAA9C] = v54[0xA]; /*0x9a7bad*/
      v55[0x2EAA9D] = v54[0xB]; /*0x9a7bb6*/
      v55[0x2EAA9E] = v54[0xC]; /*0x9a7bbf*/
      v55[0x2EAA9F] = v54[0x14]; /*0x9a7bc8*/
      result = 0xA; /*0x9a7bce*/
      break; /*0x9a7bd9*/
    case 0x4A: /*0x9a73ea*/
      v56 = *(float **)(a6 + 0x10); /*0x9a7bdf*/
      if ( !v56 ) /*0x9a7be4*/
        goto LABEL_187; /*0x9a7be4*/
      v57 = (float *)(0x10 * a2); /*0x9a7bf0*/
      v57[0x2EAA9C] = v56[7]; /*0x9a7bf3*/
      v57[0x2EAA9D] = v56[8]; /*0x9a7bfc*/
      v57[0x2EAA9E] = v56[9]; /*0x9a7c05*/
      v57[0x2EAA9F] = v56[0x14]; /*0x9a7c0e*/
      result = 0xA; /*0x9a7c14*/
      break; /*0x9a7c1f*/
    case 0x4B: /*0x9a73ea*/
      v58 = *(float **)(a6 + 0x10); /*0x9a7c25*/
      if ( !v58 ) /*0x9a7c2a*/
        goto LABEL_187; /*0x9a7c2a*/
      v59 = (float *)(0x10 * a2); /*0x9a7c36*/
      v59[0x2EAA9C] = v58[0xD]; /*0x9a7c39*/
      v59[0x2EAA9D] = v58[0xE]; /*0x9a7c42*/
      v59[0x2EAA9E] = v58[0xF]; /*0x9a7c4b*/
      v59[0x2EAA9F] = v58[0x14]; /*0x9a7c54*/
      result = 0xA; /*0x9a7c5a*/
      break; /*0x9a7c65*/
    case 0x4C: /*0x9a73ea*/
      v60 = *(float **)(a6 + 0x10); /*0x9a7c6b*/
      if ( !v60 ) /*0x9a7c70*/
        goto LABEL_187; /*0x9a7c70*/
      v61 = (float *)(0x10 * a2); /*0x9a7c7c*/
      v61[0x2EAA9C] = v60[0x10]; /*0x9a7c7f*/
      v61[0x2EAA9D] = v60[0x11]; /*0x9a7c88*/
      v61[0x2EAA9E] = v60[0x12]; /*0x9a7c91*/
      v61[0x2EAA9F] = v60[0x14]; /*0x9a7c9a*/
      result = 0xA; /*0x9a7ca0*/
      break; /*0x9a7cab*/
    case 0x4D: /*0x9a73ea*/
      v62 = *(_DWORD *)(a6 + 0x10); /*0x9a7cb1*/
      if ( !v62 ) /*0x9a7cb6*/
        goto LABEL_187; /*0x9a7cb6*/
      v63 = (float *)(0x10 * a2); /*0x9a7cc2*/
      v63[0x2EAA9C] = *(float *)(v62 + 0x4C); /*0x9a7cc5*/
      v63[0x2EAA9D] = *(float *)(v62 + 0x4C); /*0x9a7cce*/
      v63[0x2EAA9E] = *(float *)(v62 + 0x4C); /*0x9a7cd7*/
      v63[0x2EAA9F] = *(float *)(v62 + 0x4C); /*0x9a7ce0*/
      result = 0xA; /*0x9a7ce6*/
      break; /*0x9a7cf1*/
    case 0x52: /*0x9a73ea*/
    case 0x53: /*0x9a73ea*/
    case 0x54: /*0x9a73ea*/
    case 0x55: /*0x9a73ea*/
    case 0x56: /*0x9a73ea*/
      ExtraData = NiObjectNET_GetExtraData(a4, off_B329E4[0]); /*0x9a7cfe*/
      if ( !ExtraData ) /*0x9a7d05*/
        return 0x80000010; /*0x9a7d07*/
      v107 = *(float *)&ExtraData[1].__vftable; /*0x9a7d1e*/
      switch ( v9 ) /*0x9a7d28*/
      {
        case 'R': /*0x9a7d28*/
          v65 = v107; /*0x9a7d2f*/
          goto LABEL_176; /*0x9a7d2f*/
        case 'S': /*0x9a7d28*/
          v91 = sin(v107); /*0x9a7d68*/
          v65 = v91; /*0x9a7d74*/
          goto LABEL_176; /*0x9a7d78*/
        case 'T': /*0x9a7d28*/
          v92 = cos(v107); /*0x9a7d83*/
          v65 = v92; /*0x9a7d8f*/
          goto LABEL_176; /*0x9a7d93*/
        case 'U': /*0x9a7d28*/
          v93 = tan(v107); /*0x9a7d9e*/
          v65 = v93; /*0x9a7daa*/
LABEL_176:
          v66 = (float *)(0x10 * a2); /*0x9a7d33*/
          v66[0x2EAA9C] = v65; /*0x9a7d39*/
          v66[0x2EAA9D] = v65; /*0x9a7d3f*/
          v66[0x2EAA9E] = v65; /*0x9a7d45*/
          v66[0x2EAA9F] = v65; /*0x9a7d4b*/
          result = 7; /*0x9a7d51*/
          break; /*0x9a7d5c*/
        case 'V': /*0x9a7d28*/
          v67 = (float *)(0x10 * a2); /*0x9a7db7*/
          v67[0x2EAA9C] = v107; /*0x9a7dba*/
          v94 = sin(v107); /*0x9a7dc5*/
          v67[0x2EAA9D] = v94; /*0x9a7dcd*/
          v95 = cos(v107); /*0x9a7ddc*/
          v67[0x2EAA9E] = v95; /*0x9a7de4*/
          v96 = tan(v107); /*0x9a7df3*/
          v67[0x2EAA9F] = v96; /*0x9a7e00*/
          result = 7; /*0x9a7dfb*/
          break; /*0x9a7e0c*/
        default:
          goto LABEL_187;
      }
      return result; /*0x9a7d12*/
    case 0x57: /*0x9a73ea*/
      v68 = (float *)(0x10 * a2); /*0x9a7e17*/
      v68[0x2EAA9C] = 0.0; /*0x9a7e1c*/
      v68[0x2EAA9D] = 0.0; /*0x9a7e22*/
      v68[0x2EAA9E] = 0.0; /*0x9a7e28*/
      v68[0x2EAA9F] = 1.0; /*0x9a7e30*/
      if ( a7 ) /*0x9a7e36*/
      {
        v69 = *(_DWORD **)(a7 + 0xC); /*0x9a7e38*/
        while ( v69 ) /*0x9a7e3d*/
        {
          v70 = (NiObject *)v69[1]; /*0x9a7e3f*/
          v69 = (_DWORD *)*v69; /*0x9a7e42*/
          v71 = NiRTTI_Cast((BSStringT *)&stru_B40224, v70); /*0x9a7e4a*/
          if ( v71 ) /*0x9a7e54*/
          {
            sub_775F60((float *)&v71[0x1C], (float *)v108, *(float *)&v71[0x1B].members.m_uiRefCount); /*0x9a7e6b*/
            unk_BAAA70[4 * a2] = *(float *)v108 + unk_BAAA70[4 * a2]; /*0x9a7e7a*/
            unk_BAAA74[4 * a2] = *(float *)&v108[1] + unk_BAAA74[4 * a2]; /*0x9a7e8a*/
            unk_BAAA78[4 * a2] = unk_BAAA78[4 * a2] + *(float *)&v108[2]; /*0x9a7e9a*/
          }
        }
      }
      return 7; /*0x9a7eaf*/
    default:
LABEL_187:
      result = 0; /*0x9a7eb2*/
      break; /*0x9a7eb4*/
  }
  return result; /*0x9a7460*/
}
