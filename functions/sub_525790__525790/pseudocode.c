UInt32 __usercall sub_525790@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  FreeEntry *v9; // ebp
  unsigned int i; // edi
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebp
  FreeEntry *v14; // ebx
  unsigned int j; // edi
  int v16; // eax
  int v17; // edx
  unsigned int v18; // ebp
  FreeEntry *v19; // ebx
  unsigned int k; // edi
  int v21; // eax
  int v22; // eax
  size_t v24; // [esp-4h] [ebp-20h]
  size_t v25; // [esp-4h] [ebp-20h]
  size_t v26; // [esp-4h] [ebp-20h]
  size_t v27; // [esp+0h] [ebp-1Ch]
  size_t v28; // [esp+0h] [ebp-1Ch]
  size_t v29; // [esp+0h] [ebp-1Ch]
  size_t v30; // [esp+0h] [ebp-1Ch]
  int v31; // [esp+4h] [ebp-18h]

  TESForm_InitializeFormRecord((TESForm *)this, a2);
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0xA0));
  TESModel_Save((void *)(this + 0xAC), 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESActorBaseData_SaveComponent((_DWORD *)(this + 0x24));
  sub_46E460((_DWORD *)(this + 0xE4));
  TESSpellList_SaveComponent((int *)(this + 0x54));
  v4 = *(_DWORD *)(this + 0x104);
  if ( v4 )
    TESForm_PutCurrentChunkData4(0x4D414E43, *(_DWORD *)(v4 + 0xC));
  LODWORD(v27) = 0x15;
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0xEC), v27);
  v5 = *(_DWORD *)(this + 0x1C8);
  if ( v5 )
  {
    TESForm_PutCurrentChunkData4(0x4D414E48, *(_DWORD *)(v5 + 0xC));
    TESForm_PutCurrentChunkData4(0x4D414E4C, COERCE_INT(*(float *)(this + 0x1CC)));
  }
  v6 = *(_DWORD *)(this + 0x1D0);
  if ( v6 )
    TESForm_PutCurrentChunkData4(0x4D414E45, *(_DWORD *)(v6 + 0xC));
  TESForm_PutCurrentChunkData4(0x524C4348, *(_DWORD *)(this + 0x1E8));
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x120))(this) )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x120))(this);
    TESForm_PutCurrentChunkData4(0x4D414E5A, *(_DWORD *)(v7 + 0xC));
  }
  v8 = *(_DWORD *)(this + 0x108);
  if ( v8 )
  {
    HIDWORD(v24) = 1;
    LODWORD(v24) = 4 * v8;
    v9 = j_MemoryHeap_Alloc(&FormHeap, a2, v24, v31);
    _memset(v9, 0, 4 * v8);
    for ( i = 0; i < v8; *((float *)v9 + i - 1) = *(float *)(*(_DWORD *)(this + 0x114) + 4 * v12) )
    {
      v11 = *(_DWORD *)(this + 0x114);
      if ( !v11 || !((*(_DWORD *)(this + 0x118) - v11) >> 2) )
        _invalid_parameter_noinfo();
      v12 = i * *(_DWORD *)(this + 0x10C);
      ++i;
    }
    LODWORD(v28) = 4 * v8;
    TESForm_PutFormRecordChunkData(0x53474746, v9, v28);
    MemoryHeap_Free_checked(v9);
  }
  v13 = *(_DWORD *)(this + 0x120);
  if ( v13 )
  {
    HIDWORD(v25) = 1;
    LODWORD(v25) = 4 * v13;
    v14 = j_MemoryHeap_Alloc(&FormHeap, v13, v25, v31);
    _memset(v14, 0, 4 * v13);
    for ( j = 0; j < v13; *((float *)v14 + j - 1) = *(float *)(*(_DWORD *)(this + 0x12C) + 4 * v17) )
    {
      v16 = *(_DWORD *)(this + 0x12C);
      if ( !v16 || !((*(_DWORD *)(this + 0x130) - v16) >> 2) )
        _invalid_parameter_noinfo();
      v17 = j * *(_DWORD *)(this + 0x124);
      ++j;
    }
    LODWORD(v29) = 4 * v13;
    TESForm_PutFormRecordChunkData(0x41474746, v14, v29);
    MemoryHeap_Free_checked(v14);
  }
  v18 = *(_DWORD *)(this + 0x138);
  if ( v18 )
  {
    HIDWORD(v26) = 1;
    LODWORD(v26) = 4 * v18;
    v19 = j_MemoryHeap_Alloc(&FormHeap, v18, v26, v31);
    _memset(v19, 0, 4 * v18);
    for ( k = 0; k < v18; *((float *)v19 + k - 1) = *(float *)(*(_DWORD *)(this + 0x144) + 4 * v22) )
    {
      v21 = *(_DWORD *)(this + 0x144);
      if ( !v21 || !((*(_DWORD *)(this + 0x148) - v21) >> 2) )
        _invalid_parameter_noinfo();
      v22 = k * *(_DWORD *)(this + 0x13C);
      ++k;
    }
    LODWORD(v30) = 4 * v18;
    TESForm_PutFormRecordChunkData(0x53544746, v19, v30);
    MemoryHeap_Free_checked(v19);
  }
  TESForm_PutCurrentChunkData2(0x4D414E46, *(_WORD *)(this + 0x1E0));
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
