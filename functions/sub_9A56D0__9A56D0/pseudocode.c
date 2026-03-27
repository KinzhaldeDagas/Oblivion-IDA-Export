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

  v12 = *(_DWORD *)(a3 + 0x10);
  v98 = 0;
  switch ( v12 )
  {
    case 1:
    case 2:
    case 0xD:
    case 0xE:
      v13 = 0;
      v66 = 0;
      if ( v12 == 2 || v12 == 0xE )
        v13 = 1;
      if ( v12 == 0xD || v12 == 0xE )
        v66 = 1;
      qmemcpy(v107, (const void *)(*(this + 0xB) + 0x9C0), sizeof(v107));
      if ( v13 )
        D3DXMatrixInverse_0((int)v107, 0, (int)v107);
      if ( v66 )
        D3DXMatrixTranspose_0((int)v107, (int)v107);
      v14 = (*(int (__thiscall **)(int, int, _BYTE *, _DWORD))(*(_DWORD *)a2 + 0x28))(a2, a3, v107, 0);
      goto LABEL_191;
    case 3:
    case 4:
    case 0xF:
    case 0x10:
      v15 = 0;
      v67 = 0;
      if ( v12 == 4 || v12 == 0x10 )
        v15 = 1;
      if ( v12 == 0xF || v12 == 0x10 )
        v67 = 1;
      qmemcpy(v107, (const void *)(*(this + 0xB) + 0x980), sizeof(v107));
      if ( v15 )
        D3DXMatrixInverse_0((int)v107, 0, (int)v107);
      if ( v67 )
        D3DXMatrixTranspose_0((int)v107, (int)v107);
      v16 = (float *)v107;
      goto LABEL_190;
    case 5:
    case 6:
    case 0x11:
    case 0x12:
      v17 = 0;
      v68 = 0;
      if ( v12 == 6 || v12 == 0x12 )
        v17 = 1;
      if ( v12 == 0x11 || v12 == 0x12 )
        v68 = 1;
      qmemcpy(v107, (const void *)(*(this + 0xB) + 0x940), sizeof(v107));
      v18 = v17 == 0;
      goto LABEL_31;
    case 7:
    case 8:
    case 0x13:
    case 0x14:
      v69 = 0;
      v70 = 0;
      if ( v12 == 8 || v12 == 0x14 )
        v69 = 1;
      if ( v12 == 0x13 || v12 == 0x14 )
        v70 = 1;
      v20 = *(this + 0xB);
      qmemcpy(v109, (const void *)(v20 + 0x940), sizeof(v109));
      qmemcpy(v110, (const void *)(v20 + 0x980), sizeof(v110));
      D3DXMatrixMultiply_0((int)v107, (int)v109, (int)v110);
      if ( v69 )
        D3DXMatrixInverse_0((int)v107, 0, (int)v107);
      v19 = v70 == 0;
      goto LABEL_34;
    case 9:
    case 0xA:
    case 0x15:
    case 0x16:
      v71 = 0;
      v68 = 0;
      if ( v12 == 0xA || v12 == 0x16 )
        v71 = 1;
      if ( v12 == 0x15 || v12 == 0x16 )
        v68 = 1;
      v21 = *(this + 0xB);
      qmemcpy(v110, (const void *)(v21 + 0x980), sizeof(v110));
      qmemcpy(v109, (const void *)(v21 + 0x9C0), sizeof(v109));
      D3DXMatrixMultiply_0((int)v107, (int)v110, (int)v109);
      v18 = v71 == 0;
      goto LABEL_31;
    case 0xB:
    case 0xC:
    case 0x17:
    case 0x18:
      v72 = 0;
      v68 = 0;
      if ( v12 == 0xC || v12 == 0x18 )
        v72 = 1;
      if ( v12 == 0x17 || v12 == 0x18 )
        v68 = 1;
      v22 = *(this + 0xB);
      qmemcpy(v110, (const void *)(v22 + 0x940), sizeof(v110));
      qmemcpy(v109, (const void *)(v22 + 0x980), sizeof(v109));
      qmemcpy(v111, (const void *)(v22 + 0x9C0), sizeof(v111));
      D3DXMatrixMultiply_0((int)v108, (int)v110, (int)v109);
      D3DXMatrixMultiply_0((int)v107, (int)v108, (int)v111);
      v18 = v72 == 0;
      goto LABEL_31;
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x58:
      if ( !a5 )
        return v98;
      qmemcpy(v107, *(const void **)(a5 + 0x28), sizeof(v107));
      v73 = 0;
      v68 = 0;
      v23 = 1;
      if ( v12 == 0x58 )
      {
        v23 = 0;
      }
      else
      {
        if ( v12 == 0x1A || v12 == 0x1C )
          v73 = 1;
        if ( v12 == 0x1B || v12 == 0x1C )
          v68 = 1;
      }
      qmemcpy(v108, (const void *)(*(this + 0xB) + 0x980), sizeof(v108));
      if ( !v23 )
        goto LABEL_72;
      v24 = v108;
LABEL_71:
      D3DXMatrixMultiply_0((int)v107, (int)v107, (int)v24);
LABEL_72:
      v18 = v73 == 0;
LABEL_31:
      if ( !v18 )
        D3DXMatrixInverse_0((int)v107, 0, (int)v107);
      v19 = v68 == 0;
LABEL_34:
      if ( !v19 )
        D3DXMatrixTranspose_0((int)v107, (int)v107);
      v16 = (float *)v107;
      goto LABEL_190;
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
      if ( !a5 )
        return v98;
      qmemcpy(v107, *(const void **)(a5 + 0x28), sizeof(v107));
      v73 = 0;
      v68 = 0;
      if ( v12 == 0x1E || v12 == 0x20 )
        v73 = 1;
      if ( v12 == 0x1F || v12 == 0x20 )
        v68 = 1;
      v25 = *(this + 0xB);
      qmemcpy(v108, (const void *)(v25 + 0x980), sizeof(v108));
      qmemcpy(v111, (const void *)(v25 + 0x9C0), sizeof(v111));
      D3DXMatrixMultiply_0((int)v107, (int)v107, (int)v108);
      v24 = (float *)v111;
      goto LABEL_71;
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
      if ( !a5 )
        return v98;
      v14 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a2 + 0x2C))(
              a2,
              a3,
              *(_DWORD *)(a5 + 0x20),
              *(unsigned __int16 *)(a6 + 0x20),
              *(_DWORD *)(a5 + 0x24),
              *(_DWORD *)(a6 + 4));
      goto LABEL_191;
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      v26 = *(_DWORD *)(a8 + 0x20);
      v27 = 0;
      v74 = 0;
      v89 = 0;
      if ( v26 )
      {
        v28 = *(_DWORD *)(v26 + 0x20);
        if ( *(_DWORD *)v28 )
        {
          v29 = *(_DWORD *)(*(_DWORD *)v28 + 0xC);
          if ( v29 )
          {
            v27 = (float *)sub_76C710(v29);
            if ( v12 == 0x26 || v12 == 0x28 )
              v74 = 1;
            if ( v12 == 0x27 || v12 == 0x28 )
              v89 = 1;
          }
        }
      }
      v30 = v89;
      v31 = v74;
      goto LABEL_93;
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
      v32 = *(_DWORD *)(a8 + 0x20);
      v27 = 0;
      v90 = 0;
      v75 = 0;
      if ( v32 )
      {
        v33 = *(_DWORD *)(*(_DWORD *)(v32 + 0x20) + 0x14);
        if ( v33 )
        {
          v34 = *(_DWORD *)(v33 + 0xC);
          if ( v34 )
          {
            v27 = (float *)sub_76C710(v34);
            if ( v12 == 0x2A || v12 == 0x2C )
              v90 = 1;
            if ( v12 == 0x2B || v12 == 0x2C )
              v75 = 1;
          }
        }
      }
      v30 = v75;
      v31 = v90;
      goto LABEL_93;
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
      v35 = *(_DWORD *)(a8 + 0x20);
      v27 = 0;
      v91 = 0;
      v76 = 0;
      if ( v35 )
      {
        v36 = *(_DWORD *)(*(_DWORD *)(v35 + 0x20) + 8);
        if ( v36 )
        {
          v37 = *(_DWORD *)(v36 + 0xC);
          if ( v37 )
          {
            v27 = (float *)sub_76C710(v37);
            if ( v12 == 0x2E || v12 == 0x30 )
              v91 = 1;
            if ( v12 == 0x2F || v12 == 0x30 )
              v76 = 1;
          }
        }
      }
      v30 = v76;
      v31 = v91;
      goto LABEL_93;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
      v38 = *(_DWORD *)(a8 + 0x20);
      v27 = 0;
      v92 = 0;
      v77 = 0;
      if ( v38 )
      {
        v39 = *(_DWORD *)(*(_DWORD *)(v38 + 0x20) + 0xC);
        if ( v39 )
        {
          v40 = *(_DWORD *)(v39 + 0xC);
          if ( v40 )
          {
            v27 = (float *)sub_76C710(v40);
            if ( v12 == 0x32 || v12 == 0x34 )
              v92 = 1;
            if ( v12 == 0x33 || v12 == 0x34 )
              v77 = 1;
          }
        }
      }
      v30 = v77;
      v31 = v92;
      goto LABEL_93;
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      v41 = *(_DWORD *)(a8 + 0x20);
      v27 = 0;
      v93 = 0;
      v78 = 0;
      if ( v41 )
      {
        v42 = *(_DWORD *)(*(_DWORD *)(v41 + 0x20) + 0x10);
        if ( v42 )
        {
          v43 = *(_DWORD *)(v42 + 0xC);
          if ( v43 )
          {
            v27 = (float *)sub_76C710(v43);
            if ( v12 == 0x36 || v12 == 0x38 )
              v93 = 1;
            if ( v12 == 0x37 || v12 == 0x38 )
              v78 = 1;
          }
        }
      }
      v30 = v78;
      v31 = v93;
      goto LABEL_93;
    case 0x39:
    case 0x3A:
    case 0x3B:
    case 0x3C:
      v44 = *(_DWORD *)(a8 + 0x20);
      v27 = 0;
      v94 = 0;
      v79 = 0;
      if ( v44 )
      {
        v45 = *(_DWORD *)(*(_DWORD *)(v44 + 0x20) + 0x14);
        if ( v45 )
        {
          v46 = *(_DWORD *)(v45 + 0xC);
          if ( v46 )
          {
            v27 = (float *)sub_76C710(v46);
            if ( v12 == 0x3A || v12 == 0x3C )
              v94 = 1;
            if ( v12 == 0x3B || v12 == 0x3C )
              v79 = 1;
          }
        }
      }
      v30 = v79;
      v31 = v94;
LABEL_93:
      sub_9A5510(v108, v27, v31, v30);
      v16 = v108;
      goto LABEL_190;
    case 0x3D:
    case 0x3E:
    case 0x3F:
    case 0x40:
      v47 = *(_DWORD *)(a8 + 0x20);
      v48 = 0;
      v95 = 0;
      v80 = 0;
      if ( v47 )
      {
        v49 = *(_DWORD *)(*(_DWORD *)(v47 + 0x20) + 4 * *(_DWORD *)(a3 + 0x18) + 0x18);
        if ( v49 )
        {
          v50 = *(_DWORD *)(v49 + 0xC);
          if ( v50 )
          {
            v48 = (float *)sub_76C710(v50);
            if ( v12 == 0x3E || v12 == 0x40 )
              v95 = 1;
            if ( v12 == 0x3F || v12 == 0x40 )
              v80 = 1;
          }
        }
      }
      sub_9A5510(v108, v48, v95, v80);
      v14 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a2 + 0x28))(a2, a3, v108, 0);
      goto LABEL_191;
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
      v51 = *(_DWORD **)(a8 + 0x20);
      v52 = 0;
      v96 = 0;
      v81 = 0;
      if ( v51 )
      {
        v53 = sub_6D1920(v51, *(_DWORD *)(a3 + 0x18));
        if ( v53 )
        {
          v54 = *(_DWORD *)(v53 + 0xC);
          if ( v54 )
          {
            v52 = (float *)sub_76C710(v54);
            if ( v12 == 0x42 || v12 == 0x44 )
              v96 = 1;
            if ( v12 == 0x43 || v12 == 0x44 )
              v81 = 1;
          }
        }
      }
      sub_9A5510(v108, v52, v96, v81);
      v16 = v108;
      goto LABEL_190;
    case 0x49:
      v55 = *(float **)(a8 + 0x10);
      if ( !v55 )
        return v98;
      v99 = v55[0xA];
      v100 = v55[0xB];
      v101 = v55[0xC];
      v102 = v55[0x14];
      goto LABEL_189;
    case 0x4A:
      v56 = *(float **)(a8 + 0x10);
      if ( !v56 )
        return v98;
      v99 = v56[7];
      v100 = v56[8];
      v101 = v56[9];
      v102 = v56[0x14];
      goto LABEL_189;
    case 0x4B:
      v57 = *(float **)(a8 + 0x10);
      if ( !v57 )
        return v98;
      v99 = v57[0xD];
      v100 = v57[0xE];
      v101 = v57[0xF];
      v102 = v57[0x14];
      goto LABEL_189;
    case 0x4C:
      v58 = *(float **)(a8 + 0x10);
      if ( !v58 )
        return v98;
      v99 = v58[0x10];
      v100 = v58[0x11];
      v101 = v58[0x12];
      v102 = v58[0x14];
      goto LABEL_189;
    case 0x4D:
      v59 = *(_DWORD *)(a8 + 0x10);
      if ( !v59 )
        return v98;
      v99 = *(float *)(v59 + 0x4C);
      v100 = *(float *)(v59 + 0x4C);
      v101 = *(float *)(v59 + 0x4C);
      v102 = *(float *)(v59 + 0x4C);
LABEL_189:
      v16 = &v99;
LABEL_190:
      v14 = (*(int (__thiscall **)(int, int, float *, _DWORD))(*(_DWORD *)a2 + 0x28))(a2, a3, v16, 0);
LABEL_191:
      if ( !v14 )
        return 0x80000050;
      return v98;
    case 0x50:
    case 0x51:
      v14 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 0x28))(a2, a3, 0, 0);
      goto LABEL_191;
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
      ExtraData = NiObjectNET_GetExtraData(a4, off_B329E4[0]);
      if ( !ExtraData )
        v98 = 0x80000010;
      v97 = *(float *)&ExtraData[1].__vftable;
      switch ( v12 )
      {
        case 'R':
          v16 = (float *)&v103;
          *(float *)&v103 = v97;
          v104 = v97;
          v105 = v97;
          v106 = v97;
          goto LABEL_190;
        case 'S':
          v82 = sin(v97);
          v61 = v82;
          goto LABEL_180;
        case 'T':
          v84 = cos(v97);
          v61 = v84;
          goto LABEL_180;
        case 'U':
          v85 = tan(v97);
          v61 = v85;
LABEL_180:
          v83 = v61;
          v16 = (float *)&v103;
          *(float *)&v103 = v83;
          v104 = v83;
          v105 = v83;
          v106 = v83;
          break;
        case 'V':
          *(float *)&v103 = v97;
          v86 = sin(v97);
          v104 = v86;
          v87 = cos(v97);
          v105 = v87;
          v88 = tan(v97);
          v16 = (float *)&v103;
          v106 = v88;
          break;
        default:
          JUMPOUT(0x9A6046);
      }
      goto LABEL_190;
    case 0x57:
      v99 = 0.0;
      v100 = 0.0;
      v101 = 0.0;
      v102 = 1.0;
      if ( a9 )
      {
        v62 = *(_DWORD **)(a9 + 0xC);
        while ( v62 )
        {
          v63 = (NiObject *)v62[1];
          v62 = (_DWORD *)*v62;
          v64 = NiRTTI_Cast((BSStringT *)dword_B40224, v63);
          if ( v64 )
          {
            sub_775F60((float *)&v64[0x1C], (float *)&v103, *(float *)&v64[0x1B].members.m_uiRefCount);
            v99 = v99 + *(float *)&v103;
            v100 = v100 + v104;
            v101 = v101 + v105;
          }
        }
      }
      goto LABEL_189;
    default:
      return v98;
  }
}
