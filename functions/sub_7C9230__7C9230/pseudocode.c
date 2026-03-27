int __fastcall sub_7C9230(
        int a1,
        int a2,
        float a3,
        const void **a4,
        int a5,
        int a6,
        int a7,
        int a8,
        NiTransform *a9,
        int a10)
{
  int v10; // eax
  NiTransform *v12; // esi
  double v13; // st7
  bool v14; // zf
  int v15; // edi
  _DWORD **v16; // ecx
  _DWORD *v17; // eax
  float v18; // esi
  bool v20; // c0
  double v21; // st7
  int v22; // esi
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // edx
  double v27; // st7
  double v28; // st7
  float v29; // ecx
  double v30; // st7
  float v31; // edx
  float *v32; // eax
  int i; // esi
  double v34; // st7
  double v35; // st6
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // esi
  float v39; // edx
  float v40; // eax
  float v41; // ecx
  double scale; // st7
  IDirect3DDevice9 *device; // ebx
  int *v44; // edx
  int v45; // eax
  double v46; // st7
  float *v47; // ebx
  int v48; // eax
  double v49; // st5
  double v50; // st6
  int v51; // edi
  float *v52; // esi
  float v53; // eax
  float v54; // ecx
  float v55; // ecx
  float v56; // edx
  char *v57; // eax
  char *v58; // ecx
  char *v59; // edx
  IDirect3DDevice9 *v60; // ecx
  char *v61; // edi
  const float *v62; // edi
  int j; // esi
  bool v64; // [esp+5Bh] [ebp-229h]
  float v65; // [esp+5Ch] [ebp-228h] BYREF
  float v66; // [esp+60h] [ebp-224h]
  float v67; // [esp+64h] [ebp-220h] BYREF
  float v68; // [esp+68h] [ebp-21Ch]
  int v69; // [esp+6Ch] [ebp-218h]
  float v70; // [esp+70h] [ebp-214h]
  float v71; // [esp+74h] [ebp-210h] BYREF
  float v72; // [esp+78h] [ebp-20Ch]
  float v73; // [esp+7Ch] [ebp-208h]
  float v74; // [esp+80h] [ebp-204h]
  float v75[16]; // [esp+84h] [ebp-200h] BYREF
  _BYTE v76[64]; // [esp+C4h] [ebp-1C0h] BYREF
  float v77; // [esp+104h] [ebp-180h] BYREF
  float v78; // [esp+108h] [ebp-17Ch]
  float v79; // [esp+10Ch] [ebp-178h]
  float v80; // [esp+110h] [ebp-174h]
  float v81; // [esp+114h] [ebp-170h]
  float v82; // [esp+118h] [ebp-16Ch]
  float v83; // [esp+11Ch] [ebp-168h]
  float v84; // [esp+120h] [ebp-164h]
  float v85; // [esp+124h] [ebp-160h]
  float v86; // [esp+128h] [ebp-15Ch]
  float v87; // [esp+12Ch] [ebp-158h]
  float v88; // [esp+130h] [ebp-154h]
  float v89; // [esp+134h] [ebp-150h]
  float v90; // [esp+138h] [ebp-14Ch]
  float v91; // [esp+13Ch] [ebp-148h]
  float v92; // [esp+140h] [ebp-144h]
  int v93; // [esp+144h] [ebp-140h] BYREF
  float v94; // [esp+148h] [ebp-13Ch]
  float v95; // [esp+14Ch] [ebp-138h]
  float v96; // [esp+150h] [ebp-134h]
  float v97; // [esp+154h] [ebp-130h]
  float v98; // [esp+158h] [ebp-12Ch]
  float v99; // [esp+15Ch] [ebp-128h]
  float v100; // [esp+160h] [ebp-124h]
  float v101; // [esp+164h] [ebp-120h]
  float v102; // [esp+168h] [ebp-11Ch]
  float v103; // [esp+16Ch] [ebp-118h]
  float v104; // [esp+170h] [ebp-114h]
  float v105; // [esp+174h] [ebp-110h]
  float v106; // [esp+178h] [ebp-10Ch]
  float v107; // [esp+17Ch] [ebp-108h]
  float v108; // [esp+180h] [ebp-104h]
  char *v109; // [esp+184h] [ebp-100h]
  int v110; // [esp+188h] [ebp-FCh]
  char *v111; // [esp+18Ch] [ebp-F8h]
  IDirect3DDevice9 *v112; // [esp+190h] [ebp-F4h]
  float v113[4]; // [esp+194h] [ebp-F0h] BYREF
  _BYTE v114[64]; // [esp+1A4h] [ebp-E0h] BYREF
  char v115[96]; // [esp+1E4h] [ebp-A0h] BYREF
  _BYTE v116[64]; // [esp+244h] [ebp-40h] BYREF

  v10 = *(_DWORD *)(a7 + 0x18);
  v66 = *(float *)&a1;
  v64 = 0;
  if ( v10 && (v64 = (*(_BYTE *)(v10 + 0x1C) & 2) != 0, (*(_BYTE *)(v10 + 0x1C) & 2) != 0) )
  {
    if ( !a5 )
      return 0;
    v12 = a9;
    if ( !*(_DWORD *)(a1 + 0x34) )
      NiDX9Renderer::CalculateBoneMatrixes(dword_B43104, (NiSkinInstance *)a4, a9, 0, 3, 1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x18) + 0x30))(
      *(_DWORD *)(a1 + 0x18),
      *(unsigned __int16 *)(a5 + 0x24));
  }
  else
  {
    v12 = a9;
  }
  sub_765480(*(NiDX9Renderer **)(a1 + 0x14), (float *)v12, 0);
  v13 = flt_B44EE4;
  v14 = LOWORD(dword_B42EAC) == 5;
  v15 = dword_B42E90;
  v65 = *(float *)&dword_B42E90;
  if ( v14 && 0.0 == v13 )
  {
    v16 = *(_DWORD ***)(dword_B42EB8 + 0xC);
    if ( *v16 )
    {
      v17 = sub_405AD0(*v16, &v65);
      v18 = v65;
      v66 = *(float *)(*v17 + 0xF8);
      if ( v65 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v65) + 4)) && v18 != 0.0 )
        (**(void (__thiscall ***)(_DWORD, int))LODWORD(v18))(LODWORD(v18), 1);
      if ( !a4 )
        v66 = v66 / a9->scale;
      flt_B44FE4 = v66;
      return 0;
    }
    return 0;
  }
  if ( (unsigned int)(v15 - 6) <= 3 )
  {
    v20 = v13 > 0.0;
    v21 = 0.0;
    if ( !v20 )
    {
      v67 = 0.0;
      v68 = 0.0;
      *(float *)&v69 = 0.0;
      v30 = flt_B465A8;
      *(float *)&dword_B44FD8 = 0.0;
      v70 = v30;
      v31 = v70;
      *(float *)&dword_B44FDC = 0.0;
      *(float *)&dword_B44FE0 = 0.0;
      flt_B44FE4 = v31;
      return 0;
    }
    v22 = *(_DWORD *)(a7 + 0x18);
    if ( v22 )
    {
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v22 + 0x54))(*(_DWORD *)(a7 + 0x18)) >= 1
        && (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0x54))(v22) <= 0xA )
      {
        v21 = 0.0;
        v23 = 1;
        goto LABEL_26;
      }
      v21 = 0.0;
    }
    v23 = 0;
LABEL_26:
    v24 = 0;
    if ( (v23 != 0 ? v22 : 0) == 0 )
    {
LABEL_34:
      v65 = *(float *)(v24 + 0xA0);
      v66 = flt_B44EE4;
      if ( !a4 )
        v66 = v66 / a9->scale;
      v67 = v21;
      v68 = v21;
      v26 = LODWORD(v68);
      v27 = v65;
      *(float *)&dword_B44FD8 = v67;
      *(float *)&v69 = v27;
      v28 = v66;
      dword_B44FE0 = v69;
      v70 = v28;
      v29 = v70;
      dword_B44FDC = v26;
      flt_B44FE4 = v29;
      return 0;
    }
    if ( v22 )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0x54))(v22) >= 5
        && (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0x54))(v22) <= 0xA )
      {
        v21 = 0.0;
        v25 = 1;
LABEL_33:
        v24 = v25 != 0 ? v22 : 0;
        goto LABEL_34;
      }
      v21 = 0.0;
    }
    v25 = 0;
    goto LABEL_33;
  }
  v107 = 0.0;
  v106 = 0.0;
  v105 = 0.0;
  v104 = 0.0;
  v102 = 0.0;
  v101 = 0.0;
  v100 = 0.0;
  v99 = 0.0;
  v97 = 0.0;
  v96 = 0.0;
  v95 = 0.0;
  v94 = 0.0;
  v108 = 1.0;
  v103 = 1.0;
  v98 = 1.0;
  *(float *)&v93 = 1.0;
  v92 = 1.0;
  v87 = 1.0;
  v82 = 1.0;
  v77 = 1.0;
  v91 = 0.0;
  v90 = 0.0;
  v89 = 0.0;
  v88 = 0.0;
  v86 = 0.0;
  v85 = 0.0;
  v84 = 0.0;
  v83 = 0.0;
  v81 = 0.0;
  v80 = 0.0;
  v79 = 0.0;
  v78 = 0.0;
  if ( v64 && a4 )
  {
    v32 = (float *)a4[0xA];
    v77 = *v32;
    v78 = v32[1];
    v79 = v32[2];
    v81 = v32[4];
    v82 = v32[5];
    v83 = v32[6];
    v85 = v32[8];
    v86 = v32[9];
    v87 = v32[0xA];
    v89 = v32[0xC] + CameraWorldTranslate;
    v90 = v32[0xD] + flt_B3F930;
    v91 = v32[0xE] + flt_B3F934;
    v80 = v32[3];
    v84 = v32[7];
    v88 = v32[0xB];
    v92 = v32[0xF];
    D3DXMatrixInverse_0(&v93, 0, &v77);
  }
  else
  {
    sub_718A80((float *)v12, (NiTransform *)v76);
    *(float *)&v93 = *(float *)v76 * *(float *)&v76[0x30];
    v94 = *(float *)&v76[0xC] * *(float *)&v76[0x30];
    v95 = *(float *)&v76[0x18] * *(float *)&v76[0x30];
    v97 = *(float *)&v76[4] * *(float *)&v76[0x30];
    v98 = *(float *)&v76[0x10] * *(float *)&v76[0x30];
    v99 = *(float *)&v76[0x1C] * *(float *)&v76[0x30];
    v101 = *(float *)&v76[8] * *(float *)&v76[0x30];
    v102 = *(float *)&v76[0x14] * *(float *)&v76[0x30];
    v103 = *(float *)&v76[0x30] * *(float *)&v76[0x20];
    v105 = *(float *)&v76[0x24];
    v106 = *(float *)&v76[0x28];
    v107 = *(float *)&v76[0x2C];
    v108 = 1.0;
  }
  if ( *(_BYTE *)(dword_B45030 + 8) )
  {
    for ( i = 0; i < 0x20; *(float *)(i + 0xB454D4) = 0.0 )
    {
      v71 = -*(float *)(i + 0xB465A8);
      v72 = -*(float *)(i + 0xB465AC);
      v73 = -*(float *)(i + 0xB465B0);
      D3DXVec3TransformNormal_0(&v67, &v71, &v93);
      D3DXVec3Normalize_0(&v71, &v67);
      *(float *)(i + 0xB454D8) = v71;
      i += 0x10;
      *(float *)(i + 0xB454CC) = v72;
      *(float *)(i + 0xB454D0) = v73;
    }
    v12 = a9;
  }
  sub_7C9140((int)&v93, v12->scale, v15, (int)a4);
  if ( v15 < 0x180 || v15 > 0x187 )
  {
    v67 = *(float *)&dword_B46658;
    v68 = *(float *)&dword_B4665C;
    v69 = dword_B46660;
    D3DXVec3TransformCoord_0(&v71, &v67, &v93);
    flt_B44F08 = v71;
    flt_B44F0C = v72;
    flt_B44F10 = v73;
    flt_B44F14 = 1.0;
    v35 = 1.0;
    v34 = 0.0;
  }
  else
  {
    v71 = *(float *)&dword_B46658;
    v72 = *(float *)&dword_B4665C;
    v73 = *(float *)&dword_B46660;
    v67 = v71 - v12->pos.x;
    v68 = v72 - v12->pos.y;
    *(float *)&v69 = v73 - v12->pos.z;
    sub_43F350(&v67);
    flt_B44F18 = v67;
    flt_B44F1C = v68;
    flt_B44F20 = *(float *)&v69;
    v34 = 0.0;
    flt_B44F24 = 0.0;
    v67 = v71 - CameraWorldTranslate;
    v68 = v72 - flt_B3F930;
    *(float *)&v69 = v73 - flt_B3F934;
    flt_B44F08 = v67;
    flt_B44F0C = v68;
    flt_B44F10 = *(float *)&v69;
    v35 = 1.0;
    flt_B44F14 = 1.0;
  }
  if ( *(_BYTE *)(dword_B4501C + 8) )
  {
    v36 = *(_DWORD *)(dword_B42EB8 + 0xC);
    if ( !v36 || *(_BYTE *)(*(_DWORD *)v36 + 0xF5) || v15 >= 0x180 && v15 <= 0x187 || v15 == 0x77 || v15 == 0x85 )
    {
      qmemcpy(v114, (const void *)(*(_DWORD *)(a1 + 0x14) + 0x940), sizeof(v114));
      D3DXMatrixTranspose_0(&unk_B45498, v114);
    }
    else
    {
      *(float *)&v76[0x38] = v34;
      *(float *)&v76[0x34] = *(float *)&v76[0x38];
      *(float *)&v76[0x30] = *(float *)&v76[0x38];
      *(float *)&v76[0x2C] = *(float *)&v76[0x38];
      *(float *)&v76[0x24] = *(float *)&v76[0x38];
      *(float *)&v76[0x20] = *(float *)&v76[0x38];
      *(float *)&v76[0x1C] = *(float *)&v76[0x38];
      *(float *)&v76[0x18] = *(float *)&v76[0x38];
      *(float *)&v76[0x10] = *(float *)&v76[0x38];
      *(float *)&v76[0xC] = *(float *)&v76[0x38];
      *(float *)&v76[8] = *(float *)&v76[0x38];
      *(float *)&v76[4] = *(float *)&v76[0x38];
      v75[0xE] = *(float *)&v76[0x38];
      v75[0xD] = *(float *)&v76[0x38];
      v75[0xC] = *(float *)&v76[0x38];
      v75[0xB] = *(float *)&v76[0x38];
      v75[9] = *(float *)&v76[0x38];
      v75[8] = *(float *)&v76[0x38];
      v75[7] = *(float *)&v76[0x38];
      v75[6] = *(float *)&v76[0x38];
      v75[4] = *(float *)&v76[0x38];
      v75[3] = *(float *)&v76[0x38];
      v75[2] = *(float *)&v76[0x38];
      v75[1] = *(float *)&v76[0x38];
      *(float *)&v76[0x3C] = v35;
      *(float *)&v76[0x28] = *(float *)&v76[0x3C];
      *(float *)&v76[0x14] = *(float *)&v76[0x3C];
      *(float *)v76 = *(float *)&v76[0x3C];
      v75[0xF] = *(float *)&v76[0x3C];
      v75[0xA] = *(float *)&v76[0x3C];
      v75[5] = *(float *)&v76[0x3C];
      v75[0] = *(float *)&v76[0x3C];
      if ( a4 )
        qmemcpy(v76, a4[0xA], sizeof(v76));
      else
        sub_7640A0((float *)v76, (float *)v12);
      v37 = dword_B42EB8;
      *(float *)&v76[0x30] = CameraWorldTranslate + *(float *)&v76[0x30];
      *(float *)&v76[0x34] = flt_B3F930 + *(float *)&v76[0x34];
      *(float *)&v76[0x38] = flt_B3F934 + *(float *)&v76[0x38];
      D3DXMatrixMultiply_0(v114, v76, **(_DWORD **)(v37 + 0xC) + 0x10);
      qmemcpy(v75, v114, sizeof(v75));
      D3DXMatrixTranspose_0(v75, v75);
      qmemcpy(&unk_B45498, v75, 0x40u);
    }
  }
  if ( *(_BYTE *)(dword_B45024 + 8) )
  {
    v38 = *(_DWORD **)(a7 + 0x18);
    if ( v38 )
    {
      if ( (*(int (__thiscall **)(_DWORD))(*v38 + 0x54))(*(_DWORD *)(a7 + 0x18)) != 0xFFFFFFFF )
      {
        if ( GetShadowSceneNode(v38[7] >> 0x1C) )
        {
          if ( v64 && a4 )
          {
            v39 = CameraWorldTranslate;
            v40 = flt_B3F930;
            v75[0] = 1.0;
            v41 = flt_B3F934;
            v75[1] = 0.0;
            v67 = v39;
            v75[2] = 0.0;
            v68 = v40;
            *(float *)&v69 = v41;
            v75[3] = v39;
            v75[4] = 0.0;
            v75[6] = 0.0;
            v75[5] = 1.0;
            v75[7] = v40;
            v75[8] = 0.0;
            v75[9] = 0.0;
            v75[0xA] = 1.0;
            v75[0xB] = v41;
            scale = 1.0;
            v75[0xC] = 0.0;
            v75[0xD] = 0.0;
            v75[0xE] = 0.0;
          }
          else
          {
            v75[0] = a9->rot.data[0][0];
            v75[1] = a9->rot.data[0][1];
            v75[2] = a9->rot.data[0][2];
            v75[3] = a9->pos.x;
            v75[4] = a9->rot.data[1][0];
            v75[5] = a9->rot.data[1][1];
            v75[6] = a9->rot.data[1][2];
            v75[7] = a9->pos.y;
            v75[8] = a9->rot.data[2][0];
            v75[9] = a9->rot.data[2][1];
            v75[0xA] = a9->rot.data[2][2];
            v75[0xB] = a9->pos.z;
            v75[0xC] = 0.0;
            v75[0xD] = 0.0;
            v75[0xE] = 0.0;
            scale = a9->scale;
          }
          v75[0xF] = scale;
          qmemcpy(&unk_B45560, v75, 0x40u);
        }
      }
    }
  }
  if ( *(_BYTE *)(dword_B45068 + 8) )
  {
    if ( a4 )
    {
      qmemcpy(v75, a4[0xA], sizeof(v75));
      D3DXMatrixTranspose_0(v75, v75);
      qmemcpy(&unk_B44F98, v75, 0x40u);
    }
  }
  device = dword_B43104->member.device;
  v112 = device;
  if ( (unsigned int)(LODWORD(v65) - 0x177) > 3 )
    return 0;
  v44 = *(int **)(dword_B42EB8 + 0xC);
  v45 = *v44;
  v14 = *(_BYTE *)(*v44 + 0x214) == 0;
  v110 = *v44;
  if ( !v14 )
  {
    v62 = (const float *)(v45 + 0x1B4);
    for ( j = 0; j < 6; ++j )
    {
      device->lpVtbl->SetClipPlane(device, j, v62);
      v62 += 4;
    }
    return 0;
  }
  v46 = flt_B3F930;
  v47 = (float *)(v45 + 0x150);
  v48 = *(_DWORD *)(LODWORD(v66) + 0x14);
  qmemcpy(v75, (const void *)(v48 + 0x980), sizeof(v75));
  v49 = CameraWorldTranslate;
  v50 = flt_B3F934;
  v65 = v46 * v75[4] + v49 * v75[0] + v50 * v75[8];
  v75[0xC] = -v65;
  v65 = v49 * v75[1] + v46 * v75[5] + v50 * v75[9];
  v75[0xD] = -v65;
  v65 = v46 * v75[6] + v49 * v75[2] + v50 * v75[0xA];
  v75[0xE] = -v65;
  qmemcpy(v114, (const void *)(v48 + 0x9C0), sizeof(v114));
  D3DXMatrixMultiply_0(v76, v75, v114);
  D3DXMatrixInverse_0(v116, 0, v76);
  D3DXMatrixTranspose_0(v76, v116);
  LODWORD(v66) = &v115[4] - (char *)v47;
  v109 = (char *)(&v115[8] - (char *)v47);
  v111 = (char *)(&v115[0xC] - (char *)v47);
  v51 = 0;
  v52 = v47;
  LODWORD(v65) = v115 - (char *)v47;
  do
  {
    v53 = v52[1];
    v54 = v52[2];
    v67 = *v52;
    v71 = v67;
    v68 = v53;
    *(float *)&v69 = v54;
    v72 = v53;
    v73 = v54;
    v74 = -v52[3];
    D3DXPlaneNormalize_0(&v71, &v71);
    D3DXPlaneTransform_0(v113, &v71, v76);
    v55 = v65;
    v56 = v66;
    *(float *)((char *)v52 + LODWORD(v65)) = v113[0];
    v57 = (char *)v52 + LODWORD(v55);
    v58 = v109;
    *(float *)((char *)v52 + LODWORD(v56)) = v113[1];
    v59 = v111;
    *(float *)((char *)v52 + (_DWORD)v58) = v113[2];
    v60 = v112;
    *(float *)((char *)v52 + (_DWORD)v59) = v113[3];
    v60->lpVtbl->SetClipPlane(v60, v51++, (const float *)v57);
    v52 += 4;
  }
  while ( v51 < 6 );
  v61 = (char *)(v110 + 0x1B4);
  *(_BYTE *)(v110 + 0x214) = 1;
  qmemcpy(v61, v115, 0x60u);
  return 0;
}
