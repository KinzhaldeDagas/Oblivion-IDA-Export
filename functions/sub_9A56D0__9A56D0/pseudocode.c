//
// DX11 GPU-world 2026-10-01: verified complete automatic matrix family: semantics1/2 projection,3/4 view,5/6 world,7/8 world*view,9/10 view*projection,11/12 (world*view)*projection; even member requests in-place D3DX inverse; adding12 requests transpose AFTER inverse. The local matrix pointer is passed as sourceOverride with countOverride0 to program vtable+28 (7830C0 for qualified DX9 vertex program). Thus effective count is entry+20 or1 and parameter class selects float/int/BOOL without numeric conversion. The producer writes the source prefix implied by bank width; not all entries are fixed float4x4 writes. Null-skin semantics25..36 and88 return without setters. Automatic pixel9A3310 is a distinct semantic namespace, not these matrices. Fallout8225D420 corroborates matrix-family ordering at subsystem level but has renderer offsets790/7D0/810 and virtual+74 instead of Oblivion940/980/9C0 and+28; do not transplant those layouts.
unsigned int __thiscall sub_9A56D0(
        _DWORD *this,
        int a2,
        int a3,
        NiObjectNET *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // ebx
  char v13; // al
  char v14; // al
  char v15; // al
  float *v16; // eax
  char v17; // al
  bool v18; // zf
  bool v19; // zf
  int v20; // eax
  int v21; // eax
  int v22; // eax
  char v23; // al
  float *v24; // eax
  int v25; // eax
  int v26; // ecx
  float *v27; // eax
  int v28; // edx
  int v29; // ecx
  char v30; // cl
  char v31; // dl
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
  int v47; // ecx
  float *v48; // eax
  int v49; // ecx
  int v50; // ecx
  _DWORD *v51; // ecx
  float *v52; // esi
  int v53; // eax
  int v54; // ecx
  float *v55; // eax
  float *v56; // eax
  float *v57; // eax
  float *v58; // eax
  int v59; // eax
  NiExtraData *ExtraData; // eax
  double v61; // st7
  _DWORD *v62; // esi
  NiObject *v63; // eax
  NiObject *v64; // eax
  char v66; // [esp+18h] [ebp-16Eh]
  char v67; // [esp+18h] [ebp-16Eh]
  char v68; // [esp+18h] [ebp-16Eh]
  char v69; // [esp+18h] [ebp-16Eh]
  char v70; // [esp+19h] [ebp-16Dh]
  char v71; // [esp+19h] [ebp-16Dh]
  char v72; // [esp+19h] [ebp-16Dh]
  char v73; // [esp+19h] [ebp-16Dh]
  char v74; // [esp+1Ah] [ebp-16Ch]
  char v75; // [esp+1Ah] [ebp-16Ch]
  char v76; // [esp+1Ah] [ebp-16Ch]
  char v77; // [esp+1Ah] [ebp-16Ch]
  char v78; // [esp+1Ah] [ebp-16Ch]
  char v79; // [esp+1Ah] [ebp-16Ch]
  char v80; // [esp+1Ah] [ebp-16Ch]
  char v81; // [esp+1Ah] [ebp-16Ch]
  float v82; // [esp+1Ah] [ebp-16Ch]
  float v83; // [esp+1Ah] [ebp-16Ch]
  float v84; // [esp+1Ah] [ebp-16Ch]
  float v85; // [esp+1Ah] [ebp-16Ch]
  float v86; // [esp+1Ah] [ebp-16Ch]
  float v87; // [esp+1Ah] [ebp-16Ch]
  float v88; // [esp+1Ah] [ebp-16Ch]
  char v89; // [esp+1Eh] [ebp-168h]
  char v90; // [esp+1Eh] [ebp-168h]
  char v91; // [esp+1Eh] [ebp-168h]
  char v92; // [esp+1Eh] [ebp-168h]
  char v93; // [esp+1Eh] [ebp-168h]
  char v94; // [esp+1Eh] [ebp-168h]
  char v95; // [esp+1Eh] [ebp-168h]
  char v96; // [esp+1Eh] [ebp-168h]
  float v97; // [esp+1Eh] [ebp-168h]
  unsigned int v98; // [esp+22h] [ebp-164h]
  float v99; // [esp+26h] [ebp-160h] BYREF
  float v100; // [esp+2Ah] [ebp-15Ch]
  float v101; // [esp+2Eh] [ebp-158h]
  float v102; // [esp+32h] [ebp-154h]
  int v103; // [esp+36h] [ebp-150h] BYREF
  float v104; // [esp+3Ah] [ebp-14Ch]
  float v105; // [esp+3Eh] [ebp-148h]
  float v106; // [esp+42h] [ebp-144h]
  _BYTE v107[64]; // [esp+46h] [ebp-140h] BYREF
  float v108[16]; // [esp+86h] [ebp-100h] BYREF
  _BYTE v109[64]; // [esp+C6h] [ebp-C0h] BYREF
  _BYTE v110[64]; // [esp+106h] [ebp-80h] BYREF
  _BYTE v111[64]; // [esp+146h] [ebp-40h] BYREF

  v12 = *(_DWORD *)(a3 + 0x10); /*0x9a56e0*/
  v98 = 0; /*0x9a56ed*/
  switch ( v12 ) /*0x9a5702*/
  {
    case 1: /*0x9a5702*/
    case 2: /*0x9a5702*/
    case 0xD: /*0x9a5702*/
    case 0xE: /*0x9a5702*/
      v13 = 0; /*0x9a5709*/
      v66 = 0; /*0x9a570e*/
      if ( v12 == 2 || v12 == 0xE ) /*0x9a5717*/
        v13 = 1; /*0x9a5719*/
      if ( v12 == 0xD || v12 == 0xE ) /*0x9a5723*/
        v66 = 1; /*0x9a5725*/
      qmemcpy(v107, (const void *)(*(this + 0xB) + 0x9C0), sizeof(v107)); /*0x9a573e*/
      if ( v13 ) /*0x9a5740*/
        D3DXMatrixInverse_0((int)v107, 0, (int)v107); /*0x9a574c*/
      if ( v66 ) /*0x9a5756*/
        D3DXMatrixTranspose_0((int)v107, (int)v107); /*0x9a5760*/
      v14 = (*(int (__thiscall **)(int, int, _BYTE *, _DWORD))(*(_DWORD *)a2 + 0x28))(a2, a3, v107, 0); /*0x9a5778*/
      goto LABEL_191; /*0x9a577a*/
    case 3: /*0x9a5702*/
    case 4: /*0x9a5702*/
    case 0xF: /*0x9a5702*/
    case 0x10: /*0x9a5702*/
      v15 = 0; /*0x9a577f*/
      v67 = 0; /*0x9a5784*/
      if ( v12 == 4 || v12 == 0x10 ) /*0x9a578d*/
        v15 = 1; /*0x9a578f*/
      if ( v12 == 0xF || v12 == 0x10 ) /*0x9a5799*/
        v67 = 1; /*0x9a579b*/
      qmemcpy(v107, (const void *)(*(this + 0xB) + 0x980), sizeof(v107)); /*0x9a57b4*/
      if ( v15 ) /*0x9a57b6*/
        D3DXMatrixInverse_0((int)v107, 0, (int)v107); /*0x9a57c2*/
      if ( v67 ) /*0x9a57cc*/
        D3DXMatrixTranspose_0((int)v107, (int)v107); /*0x9a57d6*/
      v16 = (float *)v107; /*0x9a57db*/
      goto LABEL_190; /*0x9a57df*/
    case 5: /*0x9a5702*/
    case 6: /*0x9a5702*/
    case 0x11: /*0x9a5702*/
    case 0x12: /*0x9a5702*/
      v17 = 0; /*0x9a57e4*/
      v68 = 0; /*0x9a57e9*/
      if ( v12 == 6 || v12 == 0x12 ) /*0x9a57f2*/
        v17 = 1; /*0x9a57f4*/
      if ( v12 == 0x11 || v12 == 0x12 ) /*0x9a57fe*/
        v68 = 1; /*0x9a5800*/
      qmemcpy(v107, (const void *)(*(this + 0xB) + 0x940), sizeof(v107)); /*0x9a5817*/
      v18 = v17 == 0; /*0x9a5819*/
      goto LABEL_31; /*0x9a5819*/
    case 7: /*0x9a5702*/
    case 8: /*0x9a5702*/
    case 0x13: /*0x9a5702*/
    case 0x14: /*0x9a5702*/
      v69 = 0; /*0x9a584c*/
      v70 = 0; /*0x9a5851*/
      if ( v12 == 8 || v12 == 0x14 ) /*0x9a585d*/
        v69 = 1; /*0x9a585f*/
      if ( v12 == 0x13 || v12 == 0x14 ) /*0x9a586b*/
        v70 = 1; /*0x9a586d*/
      v20 = *(this + 0xB); /*0x9a5871*/
      qmemcpy(v109, (const void *)(v20 + 0x940), sizeof(v109)); /*0x9a5886*/
      qmemcpy(v110, (const void *)(v20 + 0x980), sizeof(v110)); /*0x9a58a1*/
      D3DXMatrixMultiply_0((int)v107, (int)v109, (int)v110); /*0x9a58b1*/
      if ( v69 ) /*0x9a58bb*/
        D3DXMatrixInverse_0((int)v107, 0, (int)v107); /*0x9a58c7*/
      v19 = v70 == 0; /*0x9a58cc*/
      goto LABEL_34; /*0x9a58d1*/
    case 9: /*0x9a5702*/
    case 0xA: /*0x9a5702*/
    case 0x15: /*0x9a5702*/
    case 0x16: /*0x9a5702*/
      v71 = 0; /*0x9a58d9*/
      v68 = 0; /*0x9a58de*/
      if ( v12 == 0xA || v12 == 0x16 ) /*0x9a58ea*/
        v71 = 1; /*0x9a58ec*/
      if ( v12 == 0x15 || v12 == 0x16 ) /*0x9a58f8*/
        v68 = 1; /*0x9a58fa*/
      v21 = *(this + 0xB); /*0x9a58fe*/
      qmemcpy(v110, (const void *)(v21 + 0x980), sizeof(v110)); /*0x9a5913*/
      qmemcpy(v109, (const void *)(v21 + 0x9C0), sizeof(v109)); /*0x9a592e*/
      D3DXMatrixMultiply_0((int)v107, (int)v110, (int)v109); /*0x9a593e*/
      v18 = v71 == 0; /*0x9a5943*/
      goto LABEL_31; /*0x9a5948*/
    case 0xB: /*0x9a5702*/
    case 0xC: /*0x9a5702*/
    case 0x17: /*0x9a5702*/
    case 0x18: /*0x9a5702*/
      v72 = 0; /*0x9a5950*/
      v68 = 0; /*0x9a5955*/
      if ( v12 == 0xC || v12 == 0x18 ) /*0x9a5961*/
        v72 = 1; /*0x9a5963*/
      if ( v12 == 0x17 || v12 == 0x18 ) /*0x9a596f*/
        v68 = 1; /*0x9a5971*/
      v22 = *(this + 0xB); /*0x9a5975*/
      qmemcpy(v110, (const void *)(v22 + 0x940), sizeof(v110)); /*0x9a598a*/
      qmemcpy(v109, (const void *)(v22 + 0x980), sizeof(v109)); /*0x9a599e*/
      qmemcpy(v111, (const void *)(v22 + 0x9C0), sizeof(v111)); /*0x9a59b9*/
      D3DXMatrixMultiply_0((int)v108, (int)v110, (int)v109); /*0x9a59cc*/
      D3DXMatrixMultiply_0((int)v107, (int)v108, (int)v111); /*0x9a59e6*/
      v18 = v72 == 0; /*0x9a59eb*/
      goto LABEL_31; /*0x9a59f0*/
    case 0x19: /*0x9a5702*/
    case 0x1A: /*0x9a5702*/
    case 0x1B: /*0x9a5702*/
    case 0x1C: /*0x9a5702*/
    case 0x58: /*0x9a5702*/
      if ( !a5 ) /*0x9a59fa*/
        return v98; /*0x9a59fa*/
      qmemcpy(v107, *(const void **)(a5 + 0x28), sizeof(v107)); /*0x9a5a0f*/
      v73 = 0; /*0x9a5a11*/
      v68 = 0; /*0x9a5a16*/
      v23 = 1; /*0x9a5a1b*/
      if ( v12 == 0x58 ) /*0x9a5a1d*/
      {
        v23 = 0; /*0x9a5a1f*/
      }
      else
      {
        if ( v12 == 0x1A || v12 == 0x1C ) /*0x9a5a2b*/
          v73 = 1; /*0x9a5a2d*/
        if ( v12 == 0x1B || v12 == 0x1C ) /*0x9a5a3a*/
          v68 = 1; /*0x9a5a3c*/
      }
      qmemcpy(v108, (const void *)(*(this + 0xB) + 0x980), sizeof(v108)); /*0x9a5a58*/
      if ( !v23 ) /*0x9a5a5a*/
        goto LABEL_72; /*0x9a5a5a*/
      v24 = v108; /*0x9a5a5c*/
LABEL_71:
      D3DXMatrixMultiply_0((int)v107, (int)v107, (int)v24); /*0x9a5a63*/
LABEL_72:
      v18 = v73 == 0; /*0x9a5a71*/
LABEL_31:
      if ( !v18 ) /*0x9a581b*/
        D3DXMatrixInverse_0((int)v107, 0, (int)v107); /*0x9a5827*/
      v19 = v68 == 0; /*0x9a582c*/
LABEL_34:
      if ( !v19 ) /*0x9a5831*/
        D3DXMatrixTranspose_0((int)v107, (int)v107); /*0x9a583b*/
      v16 = (float *)v107; /*0x9a5840*/
      goto LABEL_190; /*0x9a5844*/
    case 0x1D: /*0x9a5702*/
    case 0x1E: /*0x9a5702*/
    case 0x1F: /*0x9a5702*/
    case 0x20: /*0x9a5702*/
      if ( !a5 ) /*0x9a5a80*/
        return v98; /*0x9a5a80*/
      qmemcpy(v107, *(const void **)(a5 + 0x28), sizeof(v107)); /*0x9a5a95*/
      v73 = 0; /*0x9a5a97*/
      v68 = 0; /*0x9a5a9c*/
      if ( v12 == 0x1E || v12 == 0x20 ) /*0x9a5aa8*/
        v73 = 1; /*0x9a5aaa*/
      if ( v12 == 0x1F || v12 == 0x20 ) /*0x9a5ab6*/
        v68 = 1; /*0x9a5ab8*/
      v25 = *(this + 0xB); /*0x9a5abc*/
      qmemcpy(v108, (const void *)(v25 + 0x980), sizeof(v108)); /*0x9a5ad1*/
      qmemcpy(v111, (const void *)(v25 + 0x9C0), sizeof(v111)); /*0x9a5aec*/
      D3DXMatrixMultiply_0((int)v107, (int)v107, (int)v108); /*0x9a5af7*/
      v24 = (float *)v111; /*0x9a5afc*/
      goto LABEL_71; /*0x9a5b03*/
    case 0x21: /*0x9a5702*/
    case 0x22: /*0x9a5702*/
    case 0x23: /*0x9a5702*/
    case 0x24: /*0x9a5702*/
      if ( !a5 ) /*0x9a5b0d*/
        return v98; /*0x9a5b0d*/
      v14 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 0x2C))( /*0x9a5b33*/
              a2,
              a3,
              *(_DWORD *)(a5 + 0x20),
              *(unsigned __int16 *)(a6 + 0x20),
              *(_DWORD *)(a5 + 0x24),
              *(_DWORD *)(a6 + 4));
      goto LABEL_191; /*0x9a5b35*/
    case 0x25: /*0x9a5702*/
    case 0x26: /*0x9a5702*/
    case 0x27: /*0x9a5702*/
    case 0x28: /*0x9a5702*/
      v26 = *(_DWORD *)(a8 + 0x20); /*0x9a5b3d*/
      v27 = 0; /*0x9a5b40*/
      v74 = 0; /*0x9a5b44*/
      v89 = 0; /*0x9a5b48*/
      if ( v26 ) /*0x9a5b4c*/
      {
        v28 = *(_DWORD *)(v26 + 0x20); /*0x9a5b4e*/
        if ( *(_DWORD *)v28 ) /*0x9a5b51*/
        {
          v29 = *(_DWORD *)(*(_DWORD *)v28 + 0xC); /*0x9a5b57*/
          if ( v29 ) /*0x9a5b5c*/
          {
            v27 = (float *)sub_76C710(v29); /*0x9a5b5e*/
            if ( v12 == 0x26 || v12 == 0x28 ) /*0x9a5b6d*/
              v74 = 1; /*0x9a5b6f*/
            if ( v12 == 0x27 || v12 == 0x28 ) /*0x9a5b7b*/
              v89 = 1; /*0x9a5b7d*/
          }
        }
      }
      v30 = v89; /*0x9a5b81*/
      v31 = v74; /*0x9a5b85*/
      goto LABEL_93; /*0x9a5b85*/
    case 0x29: /*0x9a5702*/
    case 0x2A: /*0x9a5702*/
    case 0x2B: /*0x9a5702*/
    case 0x2C: /*0x9a5702*/
      v32 = *(_DWORD *)(a8 + 0x20); /*0x9a5bab*/
      v27 = 0; /*0x9a5bae*/
      v90 = 0; /*0x9a5bb2*/
      v75 = 0; /*0x9a5bb6*/
      if ( v32 ) /*0x9a5bba*/
      {
        v33 = *(_DWORD *)(*(_DWORD *)(v32 + 0x20) + 0x14); /*0x9a5bbf*/
        if ( v33 ) /*0x9a5bc4*/
        {
          v34 = *(_DWORD *)(v33 + 0xC); /*0x9a5bc6*/
          if ( v34 ) /*0x9a5bcb*/
          {
            v27 = (float *)sub_76C710(v34); /*0x9a5bcd*/
            if ( v12 == 0x2A || v12 == 0x2C ) /*0x9a5bdc*/
              v90 = 1; /*0x9a5bde*/
            if ( v12 == 0x2B || v12 == 0x2C ) /*0x9a5bea*/
              v75 = 1; /*0x9a5bec*/
          }
        }
      }
      v30 = v75; /*0x9a5bf0*/
      v31 = v90; /*0x9a5bf4*/
      goto LABEL_93; /*0x9a5bf8*/
    case 0x2D: /*0x9a5702*/
    case 0x2E: /*0x9a5702*/
    case 0x2F: /*0x9a5702*/
    case 0x30: /*0x9a5702*/
      v35 = *(_DWORD *)(a8 + 0x20); /*0x9a5bfd*/
      v27 = 0; /*0x9a5c00*/
      v91 = 0; /*0x9a5c04*/
      v76 = 0; /*0x9a5c08*/
      if ( v35 ) /*0x9a5c0c*/
      {
        v36 = *(_DWORD *)(*(_DWORD *)(v35 + 0x20) + 8); /*0x9a5c11*/
        if ( v36 ) /*0x9a5c16*/
        {
          v37 = *(_DWORD *)(v36 + 0xC); /*0x9a5c18*/
          if ( v37 ) /*0x9a5c1d*/
          {
            v27 = (float *)sub_76C710(v37); /*0x9a5c1f*/
            if ( v12 == 0x2E || v12 == 0x30 ) /*0x9a5c2e*/
              v91 = 1; /*0x9a5c30*/
            if ( v12 == 0x2F || v12 == 0x30 ) /*0x9a5c3c*/
              v76 = 1; /*0x9a5c3e*/
          }
        }
      }
      v30 = v76; /*0x9a5c42*/
      v31 = v91; /*0x9a5c46*/
      goto LABEL_93; /*0x9a5c4a*/
    case 0x31: /*0x9a5702*/
    case 0x32: /*0x9a5702*/
    case 0x33: /*0x9a5702*/
    case 0x34: /*0x9a5702*/
      v38 = *(_DWORD *)(a8 + 0x20); /*0x9a5c52*/
      v27 = 0; /*0x9a5c55*/
      v92 = 0; /*0x9a5c59*/
      v77 = 0; /*0x9a5c5d*/
      if ( v38 ) /*0x9a5c61*/
      {
        v39 = *(_DWORD *)(*(_DWORD *)(v38 + 0x20) + 0xC); /*0x9a5c66*/
        if ( v39 ) /*0x9a5c6b*/
        {
          v40 = *(_DWORD *)(v39 + 0xC); /*0x9a5c6d*/
          if ( v40 ) /*0x9a5c72*/
          {
            v27 = (float *)sub_76C710(v40); /*0x9a5c74*/
            if ( v12 == 0x32 || v12 == 0x34 ) /*0x9a5c83*/
              v92 = 1; /*0x9a5c85*/
            if ( v12 == 0x33 || v12 == 0x34 ) /*0x9a5c91*/
              v77 = 1; /*0x9a5c93*/
          }
        }
      }
      v30 = v77; /*0x9a5c97*/
      v31 = v92; /*0x9a5c9b*/
      goto LABEL_93; /*0x9a5c9f*/
    case 0x35: /*0x9a5702*/
    case 0x36: /*0x9a5702*/
    case 0x37: /*0x9a5702*/
    case 0x38: /*0x9a5702*/
      v41 = *(_DWORD *)(a8 + 0x20); /*0x9a5ca7*/
      v27 = 0; /*0x9a5caa*/
      v93 = 0; /*0x9a5cae*/
      v78 = 0; /*0x9a5cb2*/
      if ( v41 ) /*0x9a5cb6*/
      {
        v42 = *(_DWORD *)(*(_DWORD *)(v41 + 0x20) + 0x10); /*0x9a5cbb*/
        if ( v42 ) /*0x9a5cc0*/
        {
          v43 = *(_DWORD *)(v42 + 0xC); /*0x9a5cc2*/
          if ( v43 ) /*0x9a5cc7*/
          {
            v27 = (float *)sub_76C710(v43); /*0x9a5cc9*/
            if ( v12 == 0x36 || v12 == 0x38 ) /*0x9a5cd8*/
              v93 = 1; /*0x9a5cda*/
            if ( v12 == 0x37 || v12 == 0x38 ) /*0x9a5ce6*/
              v78 = 1; /*0x9a5ce8*/
          }
        }
      }
      v30 = v78; /*0x9a5cec*/
      v31 = v93; /*0x9a5cf0*/
      goto LABEL_93; /*0x9a5cf4*/
    case 0x39: /*0x9a5702*/
    case 0x3A: /*0x9a5702*/
    case 0x3B: /*0x9a5702*/
    case 0x3C: /*0x9a5702*/
      v44 = *(_DWORD *)(a8 + 0x20); /*0x9a5cfc*/
      v27 = 0; /*0x9a5cff*/
      v94 = 0; /*0x9a5d03*/
      v79 = 0; /*0x9a5d07*/
      if ( v44 ) /*0x9a5d0b*/
      {
        v45 = *(_DWORD *)(*(_DWORD *)(v44 + 0x20) + 0x14); /*0x9a5d10*/
        if ( v45 ) /*0x9a5d15*/
        {
          v46 = *(_DWORD *)(v45 + 0xC); /*0x9a5d17*/
          if ( v46 ) /*0x9a5d1c*/
          {
            v27 = (float *)sub_76C710(v46); /*0x9a5d1e*/
            if ( v12 == 0x3A || v12 == 0x3C ) /*0x9a5d2d*/
              v94 = 1; /*0x9a5d2f*/
            if ( v12 == 0x3B || v12 == 0x3C ) /*0x9a5d3b*/
              v79 = 1; /*0x9a5d3d*/
          }
        }
      }
      v30 = v79; /*0x9a5d41*/
      v31 = v94; /*0x9a5d45*/
LABEL_93:
      sub_9A5510(v108, v27, v31, v30); /*0x9a5b89*/
      v16 = v108; /*0x9a5b9c*/
      goto LABEL_190; /*0x9a5ba3*/
    case 0x3D: /*0x9a5702*/
    case 0x3E: /*0x9a5702*/
    case 0x3F: /*0x9a5702*/
    case 0x40: /*0x9a5702*/
      v47 = *(_DWORD *)(a8 + 0x20); /*0x9a5d51*/
      v48 = 0; /*0x9a5d54*/
      v95 = 0; /*0x9a5d58*/
      v80 = 0; /*0x9a5d5c*/
      if ( v47 ) /*0x9a5d60*/
      {
        v49 = *(_DWORD *)(*(_DWORD *)(v47 + 0x20) + 4 * *(_DWORD *)(a3 + 0x18) + 0x18); /*0x9a5d6b*/
        if ( v49 ) /*0x9a5d71*/
        {
          v50 = *(_DWORD *)(v49 + 0xC); /*0x9a5d73*/
          if ( v50 ) /*0x9a5d78*/
          {
            v48 = (float *)sub_76C710(v50); /*0x9a5d7a*/
            if ( v12 == 0x3E || v12 == 0x40 ) /*0x9a5d89*/
              v95 = 1; /*0x9a5d8b*/
            if ( v12 == 0x3F || v12 == 0x40 ) /*0x9a5d97*/
              v80 = 1; /*0x9a5d99*/
          }
        }
      }
      sub_9A5510(v108, v48, v95, v80); /*0x9a5db0*/
      v14 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a2 + 0x28))(a2, a3, v108, 0); /*0x9a5dce*/
      goto LABEL_191; /*0x9a5dd0*/
    case 0x41: /*0x9a5702*/
    case 0x42: /*0x9a5702*/
    case 0x43: /*0x9a5702*/
    case 0x44: /*0x9a5702*/
      v51 = *(_DWORD **)(a8 + 0x20); /*0x9a5dd8*/
      v52 = 0; /*0x9a5ddb*/
      v96 = 0; /*0x9a5ddf*/
      v81 = 0; /*0x9a5de4*/
      if ( v51 ) /*0x9a5de9*/
      {
        v53 = sub_6D1920(v51, *(_DWORD *)(a3 + 0x18)); /*0x9a5df2*/
        if ( v53 ) /*0x9a5df9*/
        {
          v54 = *(_DWORD *)(v53 + 0xC); /*0x9a5dfb*/
          if ( v54 ) /*0x9a5e00*/
          {
            v52 = (float *)sub_76C710(v54); /*0x9a5e0a*/
            if ( v12 == 0x42 || v12 == 0x44 ) /*0x9a5e13*/
              v96 = 1; /*0x9a5e15*/
            if ( v12 == 0x43 || v12 == 0x44 ) /*0x9a5e21*/
              v81 = 1; /*0x9a5e23*/
          }
        }
      }
      sub_9A5510(v108, v52, v96, v81); /*0x9a5e3a*/
      v16 = v108; /*0x9a5e42*/
      goto LABEL_190; /*0x9a5e49*/
    case 0x49: /*0x9a5702*/
      v55 = *(float **)(a8 + 0x10); /*0x9a5e51*/
      if ( !v55 ) /*0x9a5e56*/
        return v98; /*0x9a5e56*/
      v99 = v55[0xA]; /*0x9a5e5f*/
      v100 = v55[0xB]; /*0x9a5e66*/
      v101 = v55[0xC]; /*0x9a5e6d*/
      v102 = v55[0x14]; /*0x9a5e74*/
      goto LABEL_189; /*0x9a5e78*/
    case 0x4A: /*0x9a5702*/
      v56 = *(float **)(a8 + 0x10); /*0x9a5e80*/
      if ( !v56 ) /*0x9a5e85*/
        return v98; /*0x9a5e85*/
      v99 = v56[7]; /*0x9a5e8e*/
      v100 = v56[8]; /*0x9a5e95*/
      v101 = v56[9]; /*0x9a5e9c*/
      v102 = v56[0x14]; /*0x9a5ea3*/
      goto LABEL_189; /*0x9a5ea7*/
    case 0x4B: /*0x9a5702*/
      v57 = *(float **)(a8 + 0x10); /*0x9a5eaf*/
      if ( !v57 ) /*0x9a5eb4*/
        return v98; /*0x9a5eb4*/
      v99 = v57[0xD]; /*0x9a5ebd*/
      v100 = v57[0xE]; /*0x9a5ec4*/
      v101 = v57[0xF]; /*0x9a5ecb*/
      v102 = v57[0x14]; /*0x9a5ed2*/
      goto LABEL_189; /*0x9a5ed6*/
    case 0x4C: /*0x9a5702*/
      v58 = *(float **)(a8 + 0x10); /*0x9a5ede*/
      if ( !v58 ) /*0x9a5ee3*/
        return v98; /*0x9a5ee3*/
      v99 = v58[0x10]; /*0x9a5eec*/
      v100 = v58[0x11]; /*0x9a5ef3*/
      v101 = v58[0x12]; /*0x9a5efa*/
      v102 = v58[0x14]; /*0x9a5f01*/
      goto LABEL_189; /*0x9a5f05*/
    case 0x4D: /*0x9a5702*/
      v59 = *(_DWORD *)(a8 + 0x10); /*0x9a5f0d*/
      if ( !v59 ) /*0x9a5f12*/
        return v98; /*0x9a5f12*/
      v99 = *(float *)(v59 + 0x4C); /*0x9a5f1b*/
      v100 = *(float *)(v59 + 0x4C); /*0x9a5f22*/
      v101 = *(float *)(v59 + 0x4C); /*0x9a5f29*/
      v102 = *(float *)(v59 + 0x4C); /*0x9a5f30*/
LABEL_189:
      v16 = &v99; /*0x9a60cf*/
LABEL_190:
      v14 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a2 + 0x28))(a2, a3, v16, 0); /*0x9a60d3*/
LABEL_191:
      if ( !v14 ) /*0x9a60e6*/
        return 0x80000050; /*0x9a60e8*/
      return v98;
    case 0x50: /*0x9a5702*/
    case 0x51: /*0x9a5702*/
      v14 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 0x28))(a2, a3, 0, 0); /*0x9a5f49*/
      goto LABEL_191; /*0x9a5f4b*/
    case 0x52: /*0x9a5702*/
    case 0x53: /*0x9a5702*/
    case 0x54: /*0x9a5702*/
    case 0x55: /*0x9a5702*/
    case 0x56: /*0x9a5702*/
      ExtraData = NiObjectNET_GetExtraData(a4, off_B329E4[0]); /*0x9a5f5a*/
      if ( !ExtraData ) /*0x9a5f61*/
        v98 = 0x80000010; /*0x9a5f63*/
      v97 = *(float *)&ExtraData[1].__vftable; /*0x9a5f74*/
      switch ( v12 ) /*0x9a5f7e*/
      {
        case 'R': /*0x9a5f7e*/
          v16 = (float *)&v103; /*0x9a5f89*/
          *(float *)&v103 = v97; /*0x9a5f8d*/
          v104 = v97; /*0x9a5f91*/
          v105 = v97; /*0x9a5f95*/
          v106 = v97; /*0x9a5f99*/
          goto LABEL_190; /*0x9a5f9d*/
        case 'S': /*0x9a5f7e*/
          v82 = sin(v97); /*0x9a5fab*/
          v61 = v82; /*0x9a5faf*/
          goto LABEL_180; /*0x9a5faf*/
        case 'T': /*0x9a5f7e*/
          v84 = cos(v97); /*0x9a5fdd*/
          v61 = v84; /*0x9a5fe1*/
          goto LABEL_180; /*0x9a5fe5*/
        case 'U': /*0x9a5f7e*/
          v85 = tan(v97); /*0x9a5ff0*/
          v61 = v85; /*0x9a5ff4*/
LABEL_180:
          v83 = v61; /*0x9a5fb3*/
          v16 = (float *)&v103; /*0x9a5fb7*/
          *(float *)&v103 = v83; /*0x9a5fbf*/
          v104 = v83; /*0x9a5fc3*/
          v105 = v83; /*0x9a5fc7*/
          v106 = v83; /*0x9a5fcb*/
          break; /*0x9a5fcf*/
        case 'V': /*0x9a5f7e*/
          *(float *)&v103 = v97; /*0x9a5ffe*/
          v86 = sin(v97); /*0x9a6007*/
          v104 = v86; /*0x9a600f*/
          v87 = cos(v97); /*0x9a601c*/
          v105 = v87; /*0x9a6024*/
          v88 = tan(v97); /*0x9a6031*/
          v16 = (float *)&v103; /*0x9a6039*/
          v106 = v88; /*0x9a603d*/
          break; /*0x9a6041*/
        default:
          JUMPOUT(0x9A6046); /*0x9a6046*/
      }
      goto LABEL_190; /*0x9a6041*/
    case 0x57: /*0x9a5702*/
      v99 = 0.0; /*0x9a605b*/
      v100 = 0.0; /*0x9a605f*/
      v101 = 0.0; /*0x9a6063*/
      v102 = 1.0; /*0x9a6069*/
      if ( a9 ) /*0x9a606d*/
      {
        v62 = *(_DWORD **)(a9 + 0xC); /*0x9a606f*/
        while ( v62 ) /*0x9a6074*/
        {
          v63 = (NiObject *)v62[1]; /*0x9a6076*/
          v62 = (_DWORD *)*v62; /*0x9a6079*/
          v64 = NiRTTI_Cast((BSStringT *)&stru_B40224, v63); /*0x9a6081*/
          if ( v64 ) /*0x9a608b*/
          {
            sub_775F60((float *)&v64[0x1C], (float *)&v103, *(float *)&v64[0x1B].members.m_uiRefCount); /*0x9a60a2*/
            v99 = v99 + *(float *)&v103; /*0x9a60af*/
            v100 = v100 + v104; /*0x9a60bb*/
            v101 = v101 + v105; /*0x9a60c7*/
          }
        }
      }
      goto LABEL_189; /*0x9a60cd*/
    default:
      return v98;
  }
}
