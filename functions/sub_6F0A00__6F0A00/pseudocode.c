char __cdecl sub_6F0A00(OB_stString28_010201A0 *source, _DWORD *a2, int *a3, int *a4)
{
  unsigned int v4; // edi
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
  char **v20; // eax
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
  char **v36; // eax
  OB_stString28_010201A0 v37; // [esp-20h] [ebp-E0h] BYREF
  unsigned int v38; // [esp-4h] [ebp-C4h]
  char **v39; // [esp+14h] [ebp-ACh]
  unsigned int v40; // [esp+18h] [ebp-A8h]
  int i; // [esp+1Ch] [ebp-A4h]
  float v42; // [esp+20h] [ebp-A0h] BYREF
  int v43; // [esp+26h] [ebp-9Ah]
  unsigned int v44[16]; // [esp+2Ch] [ebp-94h] BYREF
  void (__thiscall ***v45)(_DWORD, int); // [esp+6Ch] [ebp-54h]
  unsigned int v46; // [esp+70h] [ebp-50h] BYREF
  unsigned int v47; // [esp+74h] [ebp-4Ch]
  unsigned int v48; // [esp+78h] [ebp-48h]
  int v49; // [esp+7Ch] [ebp-44h]
  __int16 v50; // [esp+A8h] [ebp-18h] BYREF
  __int16 v51; // [esp+AAh] [ebp-16h]
  int v52; // [esp+ACh] [ebp-14h]
  int v53; // [esp+BCh] [ebp-4h]

  v4 = (unsigned int)a2; /*0x6f0a42*/
  v42 = COERCE_FLOAT((OB_stString28_010201A0 *)&v37.storage); /*0x6f0a5a*/
  v38 = 0xF; /*0x6f0a62*/
  v37.capacity = 0; /*0x6f0a69*/
  v37.storage.inlineData[4] = 0; /*0x6f0a75*/
  OB_stString28_AssignBytes_010201A0((OB_stString28_010201A0 *)&v37.storage, "FREGM002", 8u); /*0x6f0a79*/
  sub_6F6110( /*0x6f0a82*/
    (FutBinaryFileC *)v44,
    (int)v37.storage.heapData,
    *((unsigned int *)&v37.storage.heapData + 1),
    *((int *)&v37.storage.heapData + 2),
    *((int *)&v37.storage.heapData + 3),
    v37.size,
    v37.capacity,
    v38);
  v38 = 0; /*0x6f0a89*/
  v39 = (char **)&v37; /*0x6f0a8f*/
  v37.capacity = 0xF; /*0x6f0a96*/
  v37.size = 0; /*0x6f0a9d*/
  v53 = 0; /*0x6f0aa1*/
  v37.storage.inlineData[0] = 0; /*0x6f0aa8*/
  OB_stString28_AssignSubstring_010201A0(&v37, source, 0, 0xFFFFFFFF); /*0x6f0aab*/
  if ( !sub_6F66E0( /*0x6f0ab4*/
          v44,
          v37.allocatorState,
          (unsigned int)v37.storage.heapData,
          *((int *)&v37.storage.heapData + 1),
          *((int *)&v37.storage.heapData + 2),
          *((int *)&v37.storage.heapData + 3),
          v37.size,
          v37.capacity,
          v38) )
  {
    v53 = 0xFFFFFFFF; /*0x6f0ac1*/
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v44, (int)a2); /*0x6f0acc*/
    return 0; /*0x6f0ad3*/
  }
  if ( !sub_6F5E50(v44, (int)&v46, 1, 0x38) ) /*0x6f0ae1*/
    goto LABEL_4; /*0x6f0ae8*/
  *a2 = v49; /*0x6f0b09*/
  sub_5598F0(a3); /*0x6f0b0d*/
  sub_5598F0(a4); /*0x6f0b14*/
  v39 = &v37.storage.heapData + 2; /*0x6f0b22*/
  v4 = 0; /*0x6f0b26*/
  sub_6F08E0(a3, v47, *((int *)&v37.storage.heapData + 2), *((int *)&v37.storage.heapData + 3), 0, 0, 0); /*0x6f0b34*/
  v39 = &v37.storage.heapData + 2; /*0x6f0b42*/
  sub_6F08E0(a4, v48, *((int *)&v37.storage.heapData + 2), *((int *)&v37.storage.heapData + 3), 0, 0, 0); /*0x6f0b52*/
  v40 = 0; /*0x6f0b5b*/
  if ( v47 ) /*0x6f0b5f*/
  {
    v6 = 0; /*0x6f0b65*/
    v43 = 0; /*0x6f0b67*/
    for ( i = 0; ; v6 = i ) /*0x6f0b71*/
    {
      v7 = a3[1]; /*0x6f0b7b*/
      if ( !v7 || v4 >= (a3[2] - v7) / 0x14 ) /*0x6f0b9a*/
        _invalid_parameter_noinfo(); /*0x6f0b9c*/
      v8 = (int *)(a3[1] + v6 + 4); /*0x6f0ba9*/
      LOWORD(v38) = 0; /*0x6f0bb6*/
      sub_6F0400(v8, v46, v43, v38); /*0x6f0bbf*/
      if ( !sub_6F5D40(v44, (int)&v42, 4u, 1) ) /*0x6f0bd1*/
        break; /*0x6f0bd1*/
      v9 = a3[1]; /*0x6f0bde*/
      if ( !v9 || v4 >= (a3[2] - v9) / 0x14 ) /*0x6f0bfd*/
        _invalid_parameter_noinfo(); /*0x6f0bff*/
      *(float *)(a3[1] + v6) = v42; /*0x6f0c0b*/
      v10 = 0; /*0x6f0c0e*/
      if ( v46 ) /*0x6f0c14*/
      {
        v39 = 0; /*0x6f0c1a*/
        while ( sub_6F5D40(v44, (int)&v50, 2u, 3) ) /*0x6f0c37*/
        {
          v11 = a3[1]; /*0x6f0c3d*/
          if ( !v11 || v4 >= (a3[2] - v11) / 0x14 ) /*0x6f0c5c*/
            _invalid_parameter_noinfo(); /*0x6f0c5e*/
          v12 = i + a3[1]; /*0x6f0c66*/
          v13 = *(_DWORD *)(v12 + 8); /*0x6f0c6a*/
          if ( !v13 || v10 >= (*(_DWORD *)(v12 + 0xC) - v13) / 6 ) /*0x6f0c86*/
            _invalid_parameter_noinfo(); /*0x6f0c88*/
          *(_WORD *)((char *)v39 + *(_DWORD *)(v12 + 8)) = v50; /*0x6f0c9c*/
          v14 = a3[1]; /*0x6f0ca0*/
          if ( !v14 || v40 >= (a3[2] - v14) / 0x14 ) /*0x6f0cc1*/
            _invalid_parameter_noinfo(); /*0x6f0cc3*/
          v15 = i + a3[1]; /*0x6f0ccb*/
          v16 = *(_DWORD *)(v15 + 8); /*0x6f0ccf*/
          if ( !v16 || v10 >= (*(_DWORD *)(v15 + 0xC) - v16) / 6 ) /*0x6f0ceb*/
            _invalid_parameter_noinfo(); /*0x6f0ced*/
          *(_WORD *)((char *)v39 + *(_DWORD *)(v15 + 8) + 2) = v51; /*0x6f0d01*/
          v17 = a3[1]; /*0x6f0d06*/
          if ( !v17 || v40 >= (a3[2] - v17) / 0x14 ) /*0x6f0d27*/
            _invalid_parameter_noinfo(); /*0x6f0d29*/
          v18 = i + a3[1]; /*0x6f0d31*/
          v19 = *(_DWORD *)(v18 + 8); /*0x6f0d35*/
          if ( !v19 || v10 >= (*(_DWORD *)(v18 + 0xC) - v19) / 6 ) /*0x6f0d51*/
            _invalid_parameter_noinfo(); /*0x6f0d53*/
          v20 = v39; /*0x6f0d58*/
          v21 = *(_DWORD *)(v18 + 8); /*0x6f0d5c*/
          v4 = v40; /*0x6f0d67*/
          *(_WORD *)((char *)v39 + v21 + 4) = v52; /*0x6f0d6b*/
          ++v10; /*0x6f0d70*/
          v39 = (char **)((char *)v20 + 6); /*0x6f0d7a*/
          if ( v10 >= v46 ) /*0x6f0d7e*/
            goto LABEL_37; /*0x6f0d7e*/
        }
        goto LABEL_4; /*0x6f0c37*/
      }
LABEL_37:
      i += 0x14; /*0x6f0d84*/
      v40 = ++v4; /*0x6f0d90*/
      if ( v4 >= v47 ) /*0x6f0d94*/
      {
        v4 = 0; /*0x6f0d9a*/
        goto LABEL_39; /*0x6f0d9a*/
      }
    }
    goto LABEL_4; /*0x6f0bd8*/
  }
LABEL_39:
  v22 = 0; /*0x6f0d9c*/
  if ( v48 ) /*0x6f0da2*/
  {
    v23 = 0; /*0x6f0da8*/
    v43 = 0; /*0x6f0daa*/
    v40 = 0; /*0x6f0db4*/
    while ( 1 ) /*0x6f0db8*/
    {
      v24 = a4[1]; /*0x6f0db8*/
      if ( !v24 || v22 >= (a4[2] - v24) / 0x14 ) /*0x6f0dd7*/
        _invalid_parameter_noinfo(); /*0x6f0dd9*/
      v25 = (int *)(a4[1] + v23 + 4); /*0x6f0de8*/
      LOWORD(v38) = 0; /*0x6f0df3*/
      sub_6F0400(v25, v46, v43, v38); /*0x6f0dfc*/
      if ( !sub_6F5D40(v44, (int)&v42, 4u, 1) ) /*0x6f0e0e*/
        break; /*0x6f0e0e*/
      v26 = a4[1]; /*0x6f0e1b*/
      if ( !v26 || v22 >= (a4[2] - v26) / 0x14 ) /*0x6f0e3a*/
        _invalid_parameter_noinfo(); /*0x6f0e3c*/
      *(float *)(v23 + a4[1]) = v42; /*0x6f0e48*/
      if ( v46 ) /*0x6f0e50*/
      {
        v39 = 0; /*0x6f0e56*/
        while ( sub_6F5D40(v44, (int)&v50, 2u, 3) ) /*0x6f0e75*/
        {
          v27 = a4[1]; /*0x6f0e7b*/
          if ( !v27 || v22 >= (a4[2] - v27) / 0x14 ) /*0x6f0e9a*/
            _invalid_parameter_noinfo(); /*0x6f0e9c*/
          v28 = v40 + a4[1]; /*0x6f0ea4*/
          v29 = *(_DWORD *)(v28 + 8); /*0x6f0ea8*/
          if ( !v29 || v4 >= (*(_DWORD *)(v28 + 0xC) - v29) / 6 ) /*0x6f0ec4*/
            _invalid_parameter_noinfo(); /*0x6f0ec6*/
          *(_WORD *)((char *)v39 + *(_DWORD *)(v28 + 8)) = v50; /*0x6f0eda*/
          v30 = a4[1]; /*0x6f0ede*/
          if ( !v30 || v22 >= (a4[2] - v30) / 0x14 ) /*0x6f0efd*/
            _invalid_parameter_noinfo(); /*0x6f0eff*/
          v31 = v40 + a4[1]; /*0x6f0f07*/
          v32 = *(_DWORD *)(v31 + 8); /*0x6f0f0b*/
          if ( !v32 || v4 >= (*(_DWORD *)(v31 + 0xC) - v32) / 6 ) /*0x6f0f27*/
            _invalid_parameter_noinfo(); /*0x6f0f29*/
          *(_WORD *)((char *)v39 + *(_DWORD *)(v31 + 8) + 2) = v51; /*0x6f0f3d*/
          v33 = a4[1]; /*0x6f0f42*/
          if ( !v33 || v22 >= (a4[2] - v33) / 0x14 ) /*0x6f0f61*/
            _invalid_parameter_noinfo(); /*0x6f0f63*/
          v34 = v40 + a4[1]; /*0x6f0f6b*/
          v35 = *(_DWORD *)(v34 + 8); /*0x6f0f6f*/
          if ( !v35 || v4 >= (*(_DWORD *)(v34 + 0xC) - v35) / 6 ) /*0x6f0f8b*/
            _invalid_parameter_noinfo(); /*0x6f0f8d*/
          v36 = v39; /*0x6f0f92*/
          *(_WORD *)((char *)v39 + *(_DWORD *)(v34 + 8) + 4) = v52; /*0x6f0fa1*/
          ++v4; /*0x6f0fa6*/
          v39 = (char **)((char *)v36 + 6); /*0x6f0fb0*/
          if ( v4 >= v46 ) /*0x6f0fb4*/
          {
            v23 = v40; /*0x6f0fba*/
            goto LABEL_71; /*0x6f0fba*/
          }
        }
        v44[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6f1039*/
        v53 = 1; /*0x6f1047*/
        if ( v45 ) /*0x6f1052*/
          (**v45)(v45, 1); /*0x6f105a*/
        v45 = 0; /*0x6f1060*/
        v53 = 0xFFFFFFFF; /*0x6f1068*/
        FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v44, v4); /*0x6f1073*/
        return 0; /*0x6f1078*/
      }
LABEL_71:
      ++v22; /*0x6f0fbe*/
      v23 += 0x14; /*0x6f0fc1*/
      v4 = 0; /*0x6f0fc4*/
      v40 = v23; /*0x6f0fca*/
      if ( v22 >= v48 ) /*0x6f0fce*/
        goto LABEL_72; /*0x6f0fce*/
    }
LABEL_4:
    v53 = 0xFFFFFFFF; /*0x6f0aea*/
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v44, v4); /*0x6f0af9*/
    return 0; /*0x6f0b00*/
  }
LABEL_72:
  v44[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6f0fd4*/
  v53 = 2; /*0x6f0fe2*/
  if ( v45 ) /*0x6f0fed*/
    (**v45)(v45, 1); /*0x6f0ff5*/
  v45 = 0; /*0x6f0ffb*/
  v53 = 0xFFFFFFFF; /*0x6f0fff*/
  FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v44, 0); /*0x6f100a*/
  return 1; /*0x6f1011*/
}
