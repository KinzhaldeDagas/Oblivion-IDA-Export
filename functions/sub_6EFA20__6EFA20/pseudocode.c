char __cdecl sub_6EFA20(_DWORD *a1, _DWORD *a2, int *a3, int *a4)
{
  unsigned int v5; // edi
  unsigned int v6; // ebp
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebp
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  _DWORD *v16; // edi
  int v17; // edi
  unsigned int v18; // ebp
  int v19; // eax
  unsigned int v20; // esi
  unsigned int v21; // esi
  unsigned int v22; // edi
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // ebp
  int v30; // ecx
  int v31; // ecx
  unsigned int v32; // eax
  int v33; // ecx
  _DWORD *v34; // esi
  int v35; // esi
  unsigned int v36; // edi
  int v37; // eax
  int v38; // [esp-40h] [ebp-100h] BYREF
  int v39; // [esp-3Ch] [ebp-FCh]
  int v40; // [esp-38h] [ebp-F8h]
  int v41; // [esp-34h] [ebp-F4h]
  char v42; // [esp-30h] [ebp-F0h] BYREF
  int v43; // [esp-2Ch] [ebp-ECh]
  int v44; // [esp-28h] [ebp-E8h]
  int v45; // [esp-24h] [ebp-E4h]
  rsize_t v46; // [esp-20h] [ebp-E0h] BYREF
  int v47; // [esp-18h] [ebp-D8h]
  int v48; // [esp-14h] [ebp-D4h]
  int v49; // [esp-10h] [ebp-D0h]
  int v50; // [esp-Ch] [ebp-CCh]
  int v51; // [esp-8h] [ebp-C8h]
  int v52; // [esp-4h] [ebp-C4h]
  unsigned int v53; // [esp+14h] [ebp-ACh]
  unsigned int v54; // [esp+18h] [ebp-A8h]
  int *v55; // [esp+1Ch] [ebp-A4h]
  unsigned int v56; // [esp+20h] [ebp-A0h]
  unsigned int v57; // [esp+24h] [ebp-9Ch]
  unsigned int v58; // [esp+28h] [ebp-98h]
  int v59; // [esp+2Ch] [ebp-94h]
  unsigned int v60; // [esp+30h] [ebp-90h]
  unsigned int v61; // [esp+34h] [ebp-8Ch] BYREF
  int v62; // [esp+38h] [ebp-88h]
  unsigned int v63; // [esp+3Ch] [ebp-84h]
  unsigned int v64; // [esp+40h] [ebp-80h]
  int v65; // [esp+44h] [ebp-7Ch]
  _DWORD v66[16]; // [esp+6Ch] [ebp-54h] BYREF
  void (__thiscall ***v67)(_DWORD, int); // [esp+ACh] [ebp-14h]
  int v68; // [esp+BCh] [ebp-4h]

  v55 = (int *)&v46 + 1;
  LODWORD(v46) = 8;
  v52 = 0xF;
  v51 = 0;
  LOBYTE(v47) = 0;
  sub_414500((_DWORD *)&v46 + 1, (int)a2, "FREGT003", v46);
  sub_6F6110((FutBinaryFileC *)v66, SBYTE4(v46), v47, v48, v49, v50, v51, v52);
  v52 = 0;
  v55 = (int *)&v46;
  v51 = 0xF;
  v50 = 0;
  v68 = 0;
  BYTE4(v46) = 0;
  sub_414420((int)&v46, a1, 0, 0xFFFFFFFF);
  if ( !sub_6F66E0(v66, v46, SHIDWORD(v46), v47, v48, v49, v50, v51, v52) )
  {
    v68 = 0xFFFFFFFF;
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v66);
    return 0;
  }
  if ( !sub_6F5E50(v66, (int)&v61, 1, 0x38) )
    goto LABEL_4;
  *a2 = v65;
  sub_559930(a3);
  sub_559930(a4);
  v5 = v63;
  v57 = ((v62 + 7) & 0xFFFFFFF8) - v62;
  v55 = &v38;
  v60 = (v62 + 7) & 0xFFFFFFF8;
  v59 = v60 * v61;
  ArrayConstructor(&v42, 0x10u, 3, (int)sub_6EF4A0, sub_794EB0);
  sub_6EF920(a3, v5, v38, v39, v40, v41, v42, v43, v44, v45, v46, SHIDWORD(v46), v47, v48, v49, v50, v51, v52);
  v6 = 0;
  v54 = 0;
  if ( v63 )
  {
    v7 = 0;
    v58 = 0;
    while ( 2 )
    {
      v8 = a3[1];
      if ( !v8 || v6 >= (a3[2] - v8) >> 6 )
        _invalid_parameter_noinfo();
      if ( !sub_6F5D40(v66, v7 + a3[1], 4u, 1) )
        goto LABEL_4;
      v9 = a3[1];
      if ( !v9 || v6 >= (a3[2] - v9) >> 6 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(v7 + a3[1] + 4) = v62;
      v10 = a3[1];
      if ( !v10 || v6 >= (a3[2] - v10) >> 6 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(v7 + a3[1] + 8) = v61;
      v11 = a3[1];
      if ( !v11 || v6 >= (a3[2] - v11) >> 6 )
        _invalid_parameter_noinfo();
      v12 = v59 - v60;
      *(_DWORD *)(v7 + a3[1] + 0xC) = v57;
      v55 = (int *)v12;
      v53 = 0;
      v56 = v7;
      while ( 1 )
      {
        v13 = a3[1];
        if ( !v13 || v54 >= (a3[2] - v13) >> 6 )
          _invalid_parameter_noinfo();
        sub_6EF4B0((char **)(v56 + a3[1] + 0x10), v59, 0);
        v14 = a3[1];
        if ( !v14 || v54 >= (a3[2] - v14) >> 6 )
          _invalid_parameter_noinfo();
        v15 = v7 + a3[1];
        v16 = (_DWORD *)(v15 + v53 + 0x14);
        if ( !*v16 || v12 >= *(_DWORD *)(v15 + v53 + 0x18) - *v16 )
          _invalid_parameter_noinfo();
        v17 = v12 + *v16;
        v18 = 0;
        if ( v61 )
        {
          v19 = v62;
          while ( sub_6F5D40(v66, v17, 1u, v19) )
          {
            v19 = v62;
            ++v18;
            v17 -= v62 + v57;
            if ( v18 >= v61 )
              goto LABEL_36;
          }
          v66[0] = &BSFaceGenBinaryFile::`vftable';
          v68 = 1;
LABEL_41:
          if ( v67 )
            (**v67)(v67, 1);
          v67 = 0;
          v68 = 0xFFFFFFFF;
          FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v66);
          return 0;
        }
LABEL_36:
        v56 += 0x10;
        v53 += 0x10;
        if ( v53 >= 0x30 )
          break;
        v12 = (unsigned int)v55;
        v7 = v58;
      }
      v58 += 0x40;
      if ( ++v54 < v63 )
      {
        v7 = v58;
        v6 = v54;
        continue;
      }
      break;
    }
  }
  v20 = v64;
  v55 = &v38;
  ArrayConstructor(&v42, 0x10u, 3, (int)sub_6EF4A0, sub_794EB0);
  sub_6EF920(a4, v20, v38, v39, v40, v41, v42, v43, v44, v45, v46, SHIDWORD(v46), v47, v48, v49, v50, v51, v52);
  v21 = 0;
  v54 = 0;
  if ( v64 )
  {
    v22 = 0;
    v53 = 0;
    while ( 2 )
    {
      v23 = a4[1];
      if ( !v23 || v21 >= (a4[2] - v23) >> 6 )
        _invalid_parameter_noinfo();
      if ( sub_6F5D40(v66, v22 + a4[1], 4u, 1) )
      {
        v24 = a4[1];
        if ( !v24 || v21 >= (a4[2] - v24) >> 6 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(a4[1] + v22 + 4) = v62;
        v25 = a4[1];
        if ( !v25 || v21 >= (a4[2] - v25) >> 6 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(a4[1] + v22 + 8) = v61;
        v26 = a4[1];
        if ( !v26 || v21 >= (a4[2] - v26) >> 6 )
          _invalid_parameter_noinfo();
        v27 = v53;
        *(_DWORD *)(a4[1] + v22 + 0xC) = v57;
        v28 = v59 - v60;
        v29 = 0;
        v55 = (int *)(v59 - v60);
        v56 = v27;
        while ( 1 )
        {
          v30 = a4[1];
          if ( !v30 || v21 >= (a4[2] - v30) >> 6 )
            _invalid_parameter_noinfo();
          sub_6EF4B0((char **)(a4[1] + v56 + 0x10), v59, 0);
          v31 = a4[1];
          if ( !v31 || v21 >= (a4[2] - v31) >> 6 )
            _invalid_parameter_noinfo();
          v32 = v53 + a4[1];
          v33 = *(_DWORD *)(v32 + v29 + 0x14);
          v34 = (_DWORD *)(v32 + v29 + 0x14);
          if ( !v33 || v28 >= *(_DWORD *)(v32 + v29 + 0x18) - v33 )
            _invalid_parameter_noinfo();
          v35 = v28 + *v34;
          v36 = 0;
          if ( v61 )
          {
            v37 = v62;
            while ( sub_6F5D40(v66, v35, 1u, v37) )
            {
              v37 = v62;
              ++v36;
              v35 -= v62 + v57;
              if ( v36 >= v61 )
                goto LABEL_73;
            }
            v66[0] = &BSFaceGenBinaryFile::`vftable';
            v68 = 2;
            goto LABEL_41;
          }
LABEL_73:
          v56 += 0x10;
          v29 += 0x10;
          if ( v29 >= 0x30 )
            break;
          v28 = (unsigned int)v55;
          v21 = v54;
        }
        v53 += 0x40;
        if ( ++v54 < v64 )
        {
          v21 = v54;
          v22 = v53;
          continue;
        }
        goto LABEL_75;
      }
      break;
    }
LABEL_4:
    v68 = 0xFFFFFFFF;
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v66);
    return 0;
  }
LABEL_75:
  v66[0] = &BSFaceGenBinaryFile::`vftable';
  v68 = 3;
  if ( v67 )
    (**v67)(v67, 1);
  v67 = 0;
  v68 = 0xFFFFFFFF;
  FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v66);
  return 1;
}
