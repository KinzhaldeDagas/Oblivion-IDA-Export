UInt32 __usercall sub_52BF20@<eax>(int this@<ecx>, int a2@<edi>)
{
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  void *v8; // esp
  char *v9; // ebx
  void *v10; // ebx
  unsigned int v11; // edi
  int v12; // ebx
  _DWORD *v13; // edi
  unsigned int v14; // ecx
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  unsigned int v17; // ebx
  _DWORD *v18; // ecx
  _DWORD *v19; // edi
  unsigned int v20; // ecx
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  unsigned int v23; // ebx
  _DWORD *v24; // ecx
  unsigned int v25; // ebx
  unsigned int j; // edi
  int v27; // eax
  int v28; // edx
  void *v29; // edi
  unsigned int v30; // edi
  FreeEntry *v31; // ebx
  int v32; // edi
  int v33; // eax
  int v34; // edx
  bool v35; // cf
  unsigned int v36; // edi
  FreeEntry *v37; // ebx
  int v38; // edi
  int v39; // eax
  int v40; // eax
  _BYTE v42[12]; // [esp-14h] [ebp-38h] BYREF
  int v43; // [esp-4h] [ebp-28h] BYREF
  size_t v44; // [esp+0h] [ebp-24h]
  int Size; // [esp+10h] [ebp-14h]
  int Src; // [esp+14h] [ebp-10h] BYREF
  int v47; // [esp+18h] [ebp-Ch]
  void *i; // [esp+1Ch] [ebp-8h]
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  TESForm_InitializeFormRecord((TESForm *)this, (char)&savedregs); /*0x52bf35*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x18)); /*0x52bf3d*/
  TESDescription_Save(this + 0x24, a2); /*0x52bf45*/
  TESSpellList_SaveComponent((int *)(this + 0x2C)); /*0x52bf4d*/
  sub_46E650((char *)(this + 0x40)); /*0x52bf55*/
  LODWORD(v44) = 0x24; /*0x52bf5a*/
  TESForm_SaveGenericComponents((TESForm *)this, a2, (void *)(this + 0x50), v44); /*0x52bf62*/
  v3 = *(_DWORD *)(this + 0x300); /*0x52bf67*/
  v4 = 0; /*0x52bf6d*/
  if ( v3 ) /*0x52bf71*/
  {
    Src = *(_DWORD *)(v3 + 0xC); /*0x52bf82*/
  }
  else
  {
    if ( !*(_DWORD *)(this + 0x304) ) /*0x52bf79*/
      goto LABEL_9; /*0x52bf79*/
    Src = 0; /*0x52bf87*/
  }
  v5 = *(_DWORD *)(this + 0x304); /*0x52bf8a*/
  if ( v5 ) /*0x52bf92*/
    v47 = *(_DWORD *)(v5 + 0xC); /*0x52bf97*/
  else
    v47 = 0; /*0x52bf9c*/
  LODWORD(v44) = 8; /*0x52bf9f*/
  TESForm_PutFormRecordChunkData(0x4D414E56, &Src, v44); /*0x52bfaa*/
LABEL_9:
  v6 = *(_DWORD *)(this + 0x94); /*0x52bfb2*/
  if ( v6 ) /*0x52bfba*/
  {
    Src = *(_DWORD *)(v6 + 0xC); /*0x52bfcb*/
  }
  else
  {
    if ( !*(_DWORD *)(this + 0x98) ) /*0x52bfc2*/
      goto LABEL_17; /*0x52bfc2*/
    Src = 0; /*0x52bfd0*/
  }
  v7 = *(_DWORD *)(this + 0x98); /*0x52bfd3*/
  if ( v7 ) /*0x52bfdb*/
    v47 = *(_DWORD *)(v7 + 0xC); /*0x52bfe0*/
  else
    v47 = 0; /*0x52bfe5*/
  LODWORD(v44) = 8; /*0x52bfe8*/
  TESForm_PutFormRecordChunkData(0x4D414E44, &Src, v44); /*0x52bff3*/
LABEL_17:
  LODWORD(v44) = 1; /*0x52bffb*/
  j_TESForm_PutCurrentChunkData(0x4D414E43, (void *)(this + 0x9C), v44); /*0x52c009*/
  TESForm_PutCurrentChunkData4(0x4D414E50, COERCE_INT(*(float *)(this + 0xA0))); /*0x52c01f*/
  TESForm_PutCurrentChunkData4(0x4D414E55, COERCE_INT(*(float *)(this + 0xA4))); /*0x52c035*/
  v8 = alloca(0x10); /*0x52c042*/
  sub_468C80((_DWORD *)(this + 0x74), &v42[8]); /*0x52c04d*/
  sub_468C80((_DWORD *)(this + 0x80), &v43); /*0x52c05c*/
  *(_DWORD *)&v42[4] = 0x10; /*0x52c061*/
  j_TESForm_PutCurrentChunkData(0x52545441, &v42[8], *(size_t *)&v42[4]); /*0x52c069*/
  TESForm_AddChunk(0x304D414E); /*0x52c073*/
  i = (void *)(this + 0x1B8); /*0x52c081*/
  v9 = (char *)(this + 0xE0); /*0x52c084*/
  do /*0x52c0ce*/
  {
    TESForm_PutCurrentChunkData4(0x58444E49, v4); /*0x52c096*/
    TESModel_Save(v9, 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x52c0af*/
    TESTexture_Save((int)i, 0x4E4F4349); /*0x52c0bc*/
    i = (char *)i + 0xC; /*0x52c0c1*/
    ++v4; /*0x52c0c5*/
    v9 += 0x18; /*0x52c0c8*/
  }
  while ( v4 < 9 ); /*0x52c0ce*/
  TESForm_AddChunk(0x314D414E); /*0x52c0d5*/
  v10 = 0; /*0x52c0dd*/
  for ( i = 0; ; v10 = i )
  {
    *(_DWORD *)&v42[4] = v10 ? 0x4D414E46 : 0x4D414E4D;
    TESForm_AddChunk(*(int *)&v42[4]); /*0x52c0fc*/
    TESModel_Save((void *)(this + 0x18 * (_DWORD)v10 + 0xB0), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x52c11d*/
    v11 = 0; /*0x52c127*/
    v12 = this + 0x3C * (_DWORD)v10 + 0x224; /*0x52c12b*/
    do /*0x52c155*/
    {
      TESForm_PutCurrentChunkData4(0x58444E49, v11); /*0x52c138*/
      TESTexture_Save(v12, 0x4E4F4349); /*0x52c147*/
      ++v11; /*0x52c14c*/
      v12 += 0xC; /*0x52c14f*/
    }
    while ( v11 < 5 ); /*0x52c155*/
    i = (char *)i + 1; /*0x52c160*/
    if ( (unsigned int)i >= 2 ) /*0x52c163*/
      break; /*0x52c163*/
  }
  v13 = (_DWORD *)(this + 0x8C); /*0x52c169*/
  v14 = 0; /*0x52c16f*/
  i = 0; /*0x52c173*/
  v15 = (_DWORD *)(this + 0x8C); /*0x52c176*/
  if ( this != 0xFFFFFF74 ) /*0x52c178*/
  {
    do /*0x52c18d*/
    {
      if ( *v15 ) /*0x52c180*/
        ++v14; /*0x52c185*/
      v15 = (_DWORD *)v15[1]; /*0x52c188*/
    }
    while ( v15 ); /*0x52c18d*/
    i = (void *)v14; /*0x52c18f*/
  }
  v16 = (_DWORD *)FormHeapAlloc((unsigned __int64)v14 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v14);
  v17 = (unsigned int)v16; /*0x52c1af*/
  if ( this != 0xFFFFFF74 ) /*0x52c1b1*/
  {
    v18 = v16; /*0x52c1b3*/
    do /*0x52c1c8*/
    {
      if ( !*v13 ) /*0x52c1b5*/
        break; /*0x52c1b9*/
      *v18 = *(_DWORD *)(*v13 + 0xC); /*0x52c1be*/
      v13 = (_DWORD *)v13[1]; /*0x52c1c0*/
      ++v18; /*0x52c1c3*/
    }
    while ( v13 ); /*0x52c1c8*/
  }
  *(_DWORD *)&v42[4] = 4 * (_DWORD)i; /*0x52c1d4*/
  TESForm_PutFormRecordChunkData(0x4D414E48, v16, *(size_t *)&v42[4]); /*0x52c1db*/
  FormHeapFree(v17); /*0x52c1e1*/
  v19 = (_DWORD *)(this + 0xA8); /*0x52c1e6*/
  v20 = 0; /*0x52c1ec*/
  i = 0; /*0x52c1f3*/
  v21 = (_DWORD *)(this + 0xA8); /*0x52c1f6*/
  if ( this != 0xFFFFFF58 ) /*0x52c1f8*/
  {
    do /*0x52c20d*/
    {
      if ( *v21 ) /*0x52c200*/
        ++v20; /*0x52c205*/
      v21 = (_DWORD *)v21[1]; /*0x52c208*/
    }
    while ( v21 ); /*0x52c20d*/
    i = (void *)v20; /*0x52c20f*/
  }
  v22 = (_DWORD *)FormHeapAlloc((unsigned __int64)v20 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v20);
  v23 = (unsigned int)v22; /*0x52c22f*/
  if ( this != 0xFFFFFF58 ) /*0x52c231*/
  {
    v24 = v22; /*0x52c233*/
    do /*0x52c248*/
    {
      if ( !*v19 ) /*0x52c235*/
        break; /*0x52c239*/
      *v24 = *(_DWORD *)(*v19 + 0xC); /*0x52c23e*/
      v19 = (_DWORD *)v19[1]; /*0x52c240*/
      ++v24; /*0x52c243*/
    }
    while ( v19 ); /*0x52c248*/
  }
  *(_DWORD *)&v42[4] = 4 * (_DWORD)i; /*0x52c254*/
  TESForm_PutFormRecordChunkData(0x4D414E45, v22, *(size_t *)&v42[4]); /*0x52c25b*/
  FormHeapFree(v23); /*0x52c261*/
  v25 = *(_DWORD *)(this + 0x29C); /*0x52c266*/
  if ( v25 ) /*0x52c271*/
  {
    *(_DWORD *)&v42[4] = 1; /*0x52c27e*/
    *(_DWORD *)v42 = 4 * v25; /*0x52c280*/
    Size = 4 * v25; /*0x52c286*/
    i = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, *(size_t *)v42, *(int *)&v42[8]); /*0x52c292*/
    _memset((int)i, 0, 4 * v25); /*0x52c295*/
    for ( j = 0; j < v25; *((float *)i + j - 1) = *(float *)(*(_DWORD *)(this + 0x2A8) + 4 * v28) ) /*0x52c29d*/
    {
      v27 = *(_DWORD *)(this + 0x2A8); /*0x52c2a3*/
      if ( !v27 || !((*(_DWORD *)(this + 0x2AC) - v27) >> 2) ) /*0x52c2b5*/
        _invalid_parameter_noinfo(); /*0x52c2ba*/
      v28 = j * *(_DWORD *)(this + 0x2A0); /*0x52c2cb*/
      ++j; /*0x52c2d4*/
    }
    v29 = i; /*0x52c2e2*/
    *(_DWORD *)&v42[4] = Size; /*0x52c2e5*/
    TESForm_PutFormRecordChunkData(0x53474746, i, *(size_t *)&v42[4]); /*0x52c2ec*/
    MemoryHeap_Free_checked(v29); /*0x52c2fa*/
  }
  i = *(void **)(this + 0x2B4); /*0x52c307*/
  if ( i ) /*0x52c30a*/
  {
    v30 = 4 * (_DWORD)i; /*0x52c310*/
    *(_DWORD *)&v42[4] = 1; /*0x52c317*/
    *(_DWORD *)v42 = 4 * (_DWORD)i; /*0x52c319*/
    Size = 4 * (_DWORD)i; /*0x52c31f*/
    v31 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, *(size_t *)v42, *(int *)&v42[8]); /*0x52c328*/
    _memset((int)v31, 0, v30); /*0x52c32d*/
    v32 = 0; /*0x52c332*/
    if ( i ) /*0x52c33a*/
    {
      do /*0x52c374*/
      {
        v33 = *(_DWORD *)(this + 0x2C0); /*0x52c33c*/
        if ( !v33 || !((*(_DWORD *)(this + 0x2C4) - v33) >> 2) ) /*0x52c34e*/
          _invalid_parameter_noinfo(); /*0x52c353*/
        v34 = v32 * *(_DWORD *)(this + 0x2B8); /*0x52c364*/
        v35 = ++v32 < (unsigned int)i; /*0x52c36a*/
        *((float *)v31 + v32 - 1) = *(float *)(*(_DWORD *)(this + 0x2C0) + 4 * v34); /*0x52c370*/
      }
      while ( v35 ); /*0x52c374*/
    }
    *(_DWORD *)&v42[4] = Size; /*0x52c379*/
    TESForm_PutFormRecordChunkData(0x41474746, v31, *(size_t *)&v42[4]); /*0x52c380*/
    MemoryHeap_Free_checked(v31); /*0x52c38e*/
  }
  i = *(void **)(this + 0x2CC); /*0x52c39b*/
  if ( i ) /*0x52c39e*/
  {
    v36 = 4 * (_DWORD)i; /*0x52c3a4*/
    *(_DWORD *)&v42[4] = 1; /*0x52c3ab*/
    *(_DWORD *)v42 = 4 * (_DWORD)i; /*0x52c3ad*/
    Size = 4 * (_DWORD)i; /*0x52c3b3*/
    v37 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, *(size_t *)v42, *(int *)&v42[8]); /*0x52c3bc*/
    _memset((int)v37, 0, v36); /*0x52c3c1*/
    v38 = 0; /*0x52c3c6*/
    if ( i ) /*0x52c3ce*/
    {
      do /*0x52c408*/
      {
        v39 = *(_DWORD *)(this + 0x2D8); /*0x52c3d0*/
        if ( !v39 || !((*(_DWORD *)(this + 0x2DC) - v39) >> 2) ) /*0x52c3e2*/
          _invalid_parameter_noinfo(); /*0x52c3e7*/
        v40 = v38 * *(_DWORD *)(this + 0x2D0); /*0x52c3f8*/
        v35 = ++v38 < (unsigned int)i; /*0x52c3fe*/
        *((float *)v37 + v38 - 1) = *(float *)(*(_DWORD *)(this + 0x2D8) + 4 * v40); /*0x52c404*/
      }
      while ( v35 ); /*0x52c408*/
    }
    *(_DWORD *)&v42[4] = Size; /*0x52c40d*/
    TESForm_PutFormRecordChunkData(0x53544746, v37, *(size_t *)&v42[4]); /*0x52c414*/
    MemoryHeap_Free_checked(v37); /*0x52c422*/
  }
  *(_DWORD *)&v42[4] = 2; /*0x52c427*/
  TESForm_PutFormRecordChunkData(0x4D414E53, (void *)(this + 0x2FC), *(size_t *)&v42[4]); /*0x52c435*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x52c447*/
}
