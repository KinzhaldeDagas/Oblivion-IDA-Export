char __cdecl sub_6F0A00(_DWORD *a1, _DWORD *a2, int *a3, int *a4)
{
  unsigned int v5; // edi
  int v6; // ebp
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int *v20; // eax
  int v21; // ecx
  unsigned int v22; // ebp
  unsigned int v23; // esi
  int v24; // eax
  int *v25; // ecx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // esi
  int v29; // eax
  int v30; // eax
  unsigned int v31; // esi
  int v32; // eax
  int v33; // eax
  unsigned int v34; // esi
  int v35; // eax
  int *v36; // eax
  rsize_t v37; // [esp-20h] [ebp-E0h] BYREF
  int v38; // [esp-18h] [ebp-D8h]
  int v39; // [esp-14h] [ebp-D4h] BYREF
  int v40; // [esp-10h] [ebp-D0h]
  int v41; // [esp-Ch] [ebp-CCh]
  unsigned int v42; // [esp-8h] [ebp-C8h]
  int v43; // [esp-4h] [ebp-C4h]
  int *v44; // [esp+14h] [ebp-ACh]
  unsigned int v45; // [esp+18h] [ebp-A8h]
  int i; // [esp+1Ch] [ebp-A4h]
  float v47; // [esp+20h] [ebp-A0h] BYREF
  int v48; // [esp+26h] [ebp-9Ah]
  _DWORD v49[16]; // [esp+2Ch] [ebp-94h] BYREF
  void (__thiscall ***v50)(_DWORD, int); // [esp+6Ch] [ebp-54h]
  unsigned int v51; // [esp+70h] [ebp-50h] BYREF
  unsigned int v52; // [esp+74h] [ebp-4Ch]
  unsigned int v53; // [esp+78h] [ebp-48h]
  int v54; // [esp+7Ch] [ebp-44h]
  __int16 v55; // [esp+A8h] [ebp-18h] BYREF
  __int16 v56; // [esp+AAh] [ebp-16h]
  int v57; // [esp+ACh] [ebp-14h]
  int v58; // [esp+BCh] [ebp-4h]

  v47 = COERCE_FLOAT((rsize_t *)((char *)&v37 + 4));
  LODWORD(v37) = 8;
  v43 = 0xF;
  v42 = 0;
  LOBYTE(v38) = 0;
  sub_414500((_DWORD *)&v37 + 1, (int)a2, "FREGM002", v37);
  sub_6F6110((FutBinaryFileC *)v49, SBYTE4(v37), v38, v39, v40, v41, v42, v43);
  v43 = 0;
  v44 = (int *)&v37;
  v42 = 0xF;
  v41 = 0;
  v58 = 0;
  BYTE4(v37) = 0;
  sub_414420((int)&v37, a1, 0, 0xFFFFFFFF);
  if ( !sub_6F66E0(v49, v37, SHIDWORD(v37), v38, v39, v40, v41, v42, v43) || !sub_6F5E50(v49, (int)&v51, 1, 0x38) )
  {
LABEL_2:
    v58 = 0xFFFFFFFF;
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v49);
    return 0;
  }
  *a2 = v54;
  sub_5598F0(a3);
  sub_5598F0(a4);
  v44 = &v39;
  v5 = 0;
  sub_6F08E0(a3, v52, v39, v40, 0, 0, 0);
  v44 = &v39;
  sub_6F08E0(a4, v53, v39, v40, 0, 0, 0);
  v45 = 0;
  if ( v52 )
  {
    v6 = 0;
    v48 = 0;
    for ( i = 0; ; v6 = i )
    {
      v7 = a3[1];
      if ( !v7 || v5 >= (a3[2] - v7) / 0x14 )
        _invalid_parameter_noinfo();
      v8 = (int *)(a3[1] + v6 + 4);
      LOWORD(v43) = 0;
      sub_6F0400(v8, v51, v48, v43);
      if ( !sub_6F5D40(v49, (int)&v47, 4u, 1) )
        break;
      v9 = a3[1];
      if ( !v9 || v5 >= (a3[2] - v9) / 0x14 )
        _invalid_parameter_noinfo();
      *(float *)(a3[1] + v6) = v47;
      v10 = 0;
      if ( v51 )
      {
        v44 = 0;
        while ( sub_6F5D40(v49, (int)&v55, 2u, 3) )
        {
          v11 = a3[1];
          if ( !v11 || v5 >= (a3[2] - v11) / 0x14 )
            _invalid_parameter_noinfo();
          v12 = i + a3[1];
          v13 = *(_DWORD *)(v12 + 8);
          if ( !v13 || v10 >= (*(_DWORD *)(v12 + 0xC) - v13) / 6 )
            _invalid_parameter_noinfo();
          *(_WORD *)((char *)v44 + *(_DWORD *)(v12 + 8)) = v55;
          v14 = a3[1];
          if ( !v14 || v45 >= (a3[2] - v14) / 0x14 )
            _invalid_parameter_noinfo();
          v15 = i + a3[1];
          v16 = *(_DWORD *)(v15 + 8);
          if ( !v16 || v10 >= (*(_DWORD *)(v15 + 0xC) - v16) / 6 )
            _invalid_parameter_noinfo();
          *(_WORD *)((char *)v44 + *(_DWORD *)(v15 + 8) + 2) = v56;
          v17 = a3[1];
          if ( !v17 || v45 >= (a3[2] - v17) / 0x14 )
            _invalid_parameter_noinfo();
          v18 = i + a3[1];
          v19 = *(_DWORD *)(v18 + 8);
          if ( !v19 || v10 >= (*(_DWORD *)(v18 + 0xC) - v19) / 6 )
            _invalid_parameter_noinfo();
          v20 = v44;
          v21 = *(_DWORD *)(v18 + 8);
          v5 = v45;
          *(_WORD *)((char *)v44 + v21 + 4) = v57;
          ++v10;
          v44 = (int *)((char *)v20 + 6);
          if ( v10 >= v51 )
            goto LABEL_37;
        }
        goto LABEL_2;
      }
LABEL_37:
      i += 0x14;
      v45 = ++v5;
      if ( v5 >= v52 )
      {
        v5 = 0;
        goto LABEL_39;
      }
    }
    goto LABEL_2;
  }
LABEL_39:
  v22 = 0;
  if ( v53 )
  {
    v23 = 0;
    v48 = 0;
    v45 = 0;
    do
    {
      v24 = a4[1];
      if ( !v24 || v22 >= (a4[2] - v24) / 0x14 )
        _invalid_parameter_noinfo();
      v25 = (int *)(a4[1] + v23 + 4);
      LOWORD(v43) = 0;
      sub_6F0400(v25, v51, v48, v43);
      if ( !sub_6F5D40(v49, (int)&v47, 4u, 1) )
        goto LABEL_2;
      v26 = a4[1];
      if ( !v26 || v22 >= (a4[2] - v26) / 0x14 )
        _invalid_parameter_noinfo();
      *(float *)(v23 + a4[1]) = v47;
      if ( v51 )
      {
        v44 = 0;
        while ( sub_6F5D40(v49, (int)&v55, 2u, 3) )
        {
          v27 = a4[1];
          if ( !v27 || v22 >= (a4[2] - v27) / 0x14 )
            _invalid_parameter_noinfo();
          v28 = v45 + a4[1];
          v29 = *(_DWORD *)(v28 + 8);
          if ( !v29 || v5 >= (*(_DWORD *)(v28 + 0xC) - v29) / 6 )
            _invalid_parameter_noinfo();
          *(_WORD *)((char *)v44 + *(_DWORD *)(v28 + 8)) = v55;
          v30 = a4[1];
          if ( !v30 || v22 >= (a4[2] - v30) / 0x14 )
            _invalid_parameter_noinfo();
          v31 = v45 + a4[1];
          v32 = *(_DWORD *)(v31 + 8);
          if ( !v32 || v5 >= (*(_DWORD *)(v31 + 0xC) - v32) / 6 )
            _invalid_parameter_noinfo();
          *(_WORD *)((char *)v44 + *(_DWORD *)(v31 + 8) + 2) = v56;
          v33 = a4[1];
          if ( !v33 || v22 >= (a4[2] - v33) / 0x14 )
            _invalid_parameter_noinfo();
          v34 = v45 + a4[1];
          v35 = *(_DWORD *)(v34 + 8);
          if ( !v35 || v5 >= (*(_DWORD *)(v34 + 0xC) - v35) / 6 )
            _invalid_parameter_noinfo();
          v36 = v44;
          *(_WORD *)((char *)v44 + *(_DWORD *)(v34 + 8) + 4) = v57;
          ++v5;
          v44 = (int *)((char *)v36 + 6);
          if ( v5 >= v51 )
          {
            v23 = v45;
            goto LABEL_71;
          }
        }
        v49[0] = &BSFaceGenBinaryFile::`vftable';
        v58 = 1;
        if ( v50 )
          (**v50)(v50, 1);
        v50 = 0;
        v58 = 0xFFFFFFFF;
        FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v49);
        return 0;
      }
LABEL_71:
      ++v22;
      v23 += 0x14;
      v5 = 0;
      v45 = v23;
    }
    while ( v22 < v53 );
  }
  v49[0] = &BSFaceGenBinaryFile::`vftable';
  v58 = 2;
  if ( v50 )
    (**v50)(v50, 1);
  v50 = 0;
  v58 = 0xFFFFFFFF;
  FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v49);
  return 1;
}
