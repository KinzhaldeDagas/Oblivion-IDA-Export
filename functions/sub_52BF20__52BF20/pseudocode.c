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
  int v30; // edi
  FreeEntry *v31; // ebx
  int v32; // edi
  int v33; // eax
  int v34; // edx
  bool v35; // cf
  int v36; // edi
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

  TESForm_InitializeFormRecord((TESForm *)this, (char)&savedregs);
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x18));
  TESDescription_Save((void *)(this + 0x24));
  TESSpellList_SaveComponent((int *)(this + 0x2C));
  sub_46E650((char *)(this + 0x40));
  LODWORD(v44) = 0x24;
  TESForm_SaveGenericComponents((TESForm *)this, a2, (void *)(this + 0x50), v44);
  v3 = *(_DWORD *)(this + 0x300);
  v4 = 0;
  if ( v3 )
  {
    Src = *(_DWORD *)(v3 + 0xC);
  }
  else
  {
    if ( !*(_DWORD *)(this + 0x304) )
      goto LABEL_9;
    Src = 0;
  }
  v5 = *(_DWORD *)(this + 0x304);
  if ( v5 )
    v47 = *(_DWORD *)(v5 + 0xC);
  else
    v47 = 0;
  LODWORD(v44) = 8;
  TESForm_PutFormRecordChunkData(0x4D414E56, &Src, v44);
LABEL_9:
  v6 = *(_DWORD *)(this + 0x94);
  if ( v6 )
  {
    Src = *(_DWORD *)(v6 + 0xC);
  }
  else
  {
    if ( !*(_DWORD *)(this + 0x98) )
      goto LABEL_17;
    Src = 0;
  }
  v7 = *(_DWORD *)(this + 0x98);
  if ( v7 )
    v47 = *(_DWORD *)(v7 + 0xC);
  else
    v47 = 0;
  LODWORD(v44) = 8;
  TESForm_PutFormRecordChunkData(0x4D414E44, &Src, v44);
LABEL_17:
  LODWORD(v44) = 1;
  j_TESForm_PutCurrentChunkData(0x4D414E43, (void *)(this + 0x9C), v44);
  TESForm_PutCurrentChunkData4(0x4D414E50, COERCE_INT(*(float *)(this + 0xA0)));
  TESForm_PutCurrentChunkData4(0x4D414E55, COERCE_INT(*(float *)(this + 0xA4)));
  v8 = alloca(0x10);
  sub_468C80((_DWORD *)(this + 0x74), &v42[8]);
  sub_468C80((_DWORD *)(this + 0x80), &v43);
  *(_DWORD *)&v42[4] = 0x10;
  j_TESForm_PutCurrentChunkData(0x52545441, &v42[8], *(size_t *)&v42[4]);
  sub_46BA10(0x304D414E);
  i = (void *)(this + 0x1B8);
  v9 = (char *)(this + 0xE0);
  do
  {
    TESForm_PutCurrentChunkData4(0x58444E49, v4);
    TESModel_Save(v9, 0x4C444F4D, 0x42444F4D, 0x54444F4D);
    TESTexture_Save((int)i, 0x4E4F4349);
    i = (char *)i + 0xC;
    ++v4;
    v9 += 0x18;
  }
  while ( v4 < 9 );
  sub_46BA10(0x314D414E);
  v10 = 0;
  for ( i = 0; ; v10 = i )
  {
    *(_DWORD *)&v42[4] = v10 ? 0x4D414E46 : 0x4D414E4D;
    sub_46BA10(*(int *)&v42[4]);
    TESModel_Save((void *)(this + 0x18 * (_DWORD)v10 + 0xB0), 0x4C444F4D, 0x42444F4D, 0x54444F4D);
    v11 = 0;
    v12 = this + 0x3C * (_DWORD)v10 + 0x224;
    do
    {
      TESForm_PutCurrentChunkData4(0x58444E49, v11);
      TESTexture_Save(v12, 0x4E4F4349);
      ++v11;
      v12 += 0xC;
    }
    while ( v11 < 5 );
    i = (char *)i + 1;
    if ( (unsigned int)i >= 2 )
      break;
  }
  v13 = (_DWORD *)(this + 0x8C);
  v14 = 0;
  i = 0;
  v15 = (_DWORD *)(this + 0x8C);
  if ( this != 0xFFFFFF74 )
  {
    do
    {
      if ( *v15 )
        ++v14;
      v15 = (_DWORD *)v15[1];
    }
    while ( v15 );
    i = (void *)v14;
  }
  v16 = (_DWORD *)FormHeapAlloc((unsigned __int64)v14 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v14);
  v17 = (unsigned int)v16;
  if ( this != 0xFFFFFF74 )
  {
    v18 = v16;
    do
    {
      if ( !*v13 )
        break;
      *v18 = *(_DWORD *)(*v13 + 0xC);
      v13 = (_DWORD *)v13[1];
      ++v18;
    }
    while ( v13 );
  }
  *(_DWORD *)&v42[4] = 4 * (_DWORD)i;
  TESForm_PutFormRecordChunkData(0x4D414E48, v16, *(size_t *)&v42[4]);
  FormHeapFree(v17);
  v19 = (_DWORD *)(this + 0xA8);
  v20 = 0;
  i = 0;
  v21 = (_DWORD *)(this + 0xA8);
  if ( this != 0xFFFFFF58 )
  {
    do
    {
      if ( *v21 )
        ++v20;
      v21 = (_DWORD *)v21[1];
    }
    while ( v21 );
    i = (void *)v20;
  }
  v22 = (_DWORD *)FormHeapAlloc((unsigned __int64)v20 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v20);
  v23 = (unsigned int)v22;
  if ( this != 0xFFFFFF58 )
  {
    v24 = v22;
    do
    {
      if ( !*v19 )
        break;
      *v24 = *(_DWORD *)(*v19 + 0xC);
      v19 = (_DWORD *)v19[1];
      ++v24;
    }
    while ( v19 );
  }
  *(_DWORD *)&v42[4] = 4 * (_DWORD)i;
  TESForm_PutFormRecordChunkData(0x4D414E45, v22, *(size_t *)&v42[4]);
  FormHeapFree(v23);
  v25 = *(_DWORD *)(this + 0x29C);
  if ( v25 )
  {
    *(_DWORD *)&v42[4] = 1;
    *(_DWORD *)v42 = 4 * v25;
    Size = 4 * v25;
    i = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, *(size_t *)v42, *(int *)&v42[8]);
    _memset(i, 0, 4 * v25);
    for ( j = 0; j < v25; *((float *)i + j - 1) = *(float *)(*(_DWORD *)(this + 0x2A8) + 4 * v28) )
    {
      v27 = *(_DWORD *)(this + 0x2A8);
      if ( !v27 || !((*(_DWORD *)(this + 0x2AC) - v27) >> 2) )
        _invalid_parameter_noinfo();
      v28 = j * *(_DWORD *)(this + 0x2A0);
      ++j;
    }
    v29 = i;
    *(_DWORD *)&v42[4] = Size;
    TESForm_PutFormRecordChunkData(0x53474746, i, *(size_t *)&v42[4]);
    MemoryHeap_Free_checked(v29);
  }
  i = *(void **)(this + 0x2B4);
  if ( i )
  {
    v30 = 4 * (_DWORD)i;
    *(_DWORD *)&v42[4] = 1;
    *(_DWORD *)v42 = 4 * (_DWORD)i;
    Size = 4 * (_DWORD)i;
    v31 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, *(size_t *)v42, *(int *)&v42[8]);
    _memset(v31, 0, v30);
    v32 = 0;
    if ( i )
    {
      do
      {
        v33 = *(_DWORD *)(this + 0x2C0);
        if ( !v33 || !((*(_DWORD *)(this + 0x2C4) - v33) >> 2) )
          _invalid_parameter_noinfo();
        v34 = v32 * *(_DWORD *)(this + 0x2B8);
        v35 = ++v32 < (unsigned int)i;
        *((float *)v31 + v32 - 1) = *(float *)(*(_DWORD *)(this + 0x2C0) + 4 * v34);
      }
      while ( v35 );
    }
    *(_DWORD *)&v42[4] = Size;
    TESForm_PutFormRecordChunkData(0x41474746, v31, *(size_t *)&v42[4]);
    MemoryHeap_Free_checked(v31);
  }
  i = *(void **)(this + 0x2CC);
  if ( i )
  {
    v36 = 4 * (_DWORD)i;
    *(_DWORD *)&v42[4] = 1;
    *(_DWORD *)v42 = 4 * (_DWORD)i;
    Size = 4 * (_DWORD)i;
    v37 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, *(size_t *)v42, *(int *)&v42[8]);
    _memset(v37, 0, v36);
    v38 = 0;
    if ( i )
    {
      do
      {
        v39 = *(_DWORD *)(this + 0x2D8);
        if ( !v39 || !((*(_DWORD *)(this + 0x2DC) - v39) >> 2) )
          _invalid_parameter_noinfo();
        v40 = v38 * *(_DWORD *)(this + 0x2D0);
        v35 = ++v38 < (unsigned int)i;
        *((float *)v37 + v38 - 1) = *(float *)(*(_DWORD *)(this + 0x2D8) + 4 * v40);
      }
      while ( v35 );
    }
    *(_DWORD *)&v42[4] = Size;
    TESForm_PutFormRecordChunkData(0x53544746, v37, *(size_t *)&v42[4]);
    MemoryHeap_Free_checked(v37);
  }
  *(_DWORD *)&v42[4] = 2;
  TESForm_PutFormRecordChunkData(0x4D414E53, (void *)(this + 0x2FC), *(size_t *)&v42[4]);
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
