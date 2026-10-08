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

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x525799*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0xA0)); /*0x5257a4*/
  TESModel_Save((void *)(this + 0xAC), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x5257be*/
  TESActorBaseData_SaveComponent((_DWORD *)(this + 0x24)); /*0x5257c6*/
  sub_46E460((_DWORD *)(this + 0xE4)); /*0x5257d1*/
  TESSpellList_SaveComponent((int *)(this + 0x54)); /*0x5257d9*/
  v4 = *(_DWORD *)(this + 0x104); /*0x5257de*/
  if ( v4 ) /*0x5257e6*/
    TESForm_PutCurrentChunkData4(0x4D414E43, *(_DWORD *)(v4 + 0xC)); /*0x5257f1*/
  LODWORD(v27) = 0x15; /*0x5257f9*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0xEC), v27); /*0x525804*/
  v5 = *(_DWORD *)(this + 0x1C8); /*0x525809*/
  if ( v5 ) /*0x525811*/
  {
    TESForm_PutCurrentChunkData4(0x4D414E48, *(_DWORD *)(v5 + 0xC)); /*0x52581c*/
    TESForm_PutCurrentChunkData4(0x4D414E4C, COERCE_INT(*(float *)(this + 0x1CC))); /*0x525832*/
  }
  v6 = *(_DWORD *)(this + 0x1D0); /*0x52583a*/
  if ( v6 ) /*0x525842*/
    TESForm_PutCurrentChunkData4(0x4D414E45, *(_DWORD *)(v6 + 0xC)); /*0x52584d*/
  TESForm_PutCurrentChunkData4(0x524C4348, *(_DWORD *)(this + 0x1E8)); /*0x525861*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x120))(this) ) /*0x525873*/
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x120))(this); /*0x525883*/
    TESForm_PutCurrentChunkData4(0x4D414E5A, *(_DWORD *)(v7 + 0xC)); /*0x52588e*/
  }
  v8 = *(_DWORD *)(this + 0x108); /*0x525896*/
  if ( v8 ) /*0x52589e*/
  {
    HIDWORD(v24) = 1; /*0x5258ab*/
    LODWORD(v24) = 4 * v8; /*0x5258ad*/
    v9 = j_MemoryHeap_Alloc(&FormHeap, a2, v24, v31); /*0x5258bd*/
    _memset((int)v9, 0, 4 * v8); /*0x5258c2*/
    for ( i = 0; i < v8; *((float *)v9 + i - 1) = *(float *)(*(_DWORD *)(this + 0x114) + 4 * v12) ) /*0x5258ca*/
    {
      v11 = *(_DWORD *)(this + 0x114); /*0x5258d0*/
      if ( !v11 || !((*(_DWORD *)(this + 0x118) - v11) >> 2) ) /*0x5258e2*/
        _invalid_parameter_noinfo(v8, i, this); /*0x5258e7*/
      v12 = i * *(_DWORD *)(this + 0x10C); /*0x5258f8*/
      ++i; /*0x5258fb*/
    }
    LODWORD(v28) = 4 * v8; /*0x52590d*/
    TESForm_PutFormRecordChunkData(0x53474746, v9, v28); /*0x525914*/
    MemoryHeap_Free_checked(v9); /*0x525922*/
  }
  v13 = *(_DWORD *)(this + 0x120); /*0x525927*/
  if ( v13 ) /*0x52592f*/
  {
    HIDWORD(v25) = 1; /*0x52593c*/
    LODWORD(v25) = 4 * v13; /*0x52593e*/
    v14 = j_MemoryHeap_Alloc(&FormHeap, v13, v25, v31); /*0x52594e*/
    _memset((int)v14, 0, 4 * v13); /*0x525953*/
    for ( j = 0; j < v13; *((float *)v14 + j - 1) = *(float *)(*(_DWORD *)(this + 0x12C) + 4 * v17) ) /*0x52595b*/
    {
      v16 = *(_DWORD *)(this + 0x12C); /*0x525961*/
      if ( !v16 || !((*(_DWORD *)(this + 0x130) - v16) >> 2) ) /*0x525973*/
        _invalid_parameter_noinfo((int)v14, j, this); /*0x525978*/
      v17 = j * *(_DWORD *)(this + 0x124); /*0x525989*/
      ++j; /*0x52598c*/
    }
    LODWORD(v29) = 4 * v13; /*0x52599e*/
    TESForm_PutFormRecordChunkData(0x41474746, v14, v29); /*0x5259a5*/
    MemoryHeap_Free_checked(v14); /*0x5259b3*/
  }
  v18 = *(_DWORD *)(this + 0x138); /*0x5259b8*/
  if ( v18 ) /*0x5259c0*/
  {
    HIDWORD(v26) = 1; /*0x5259cd*/
    LODWORD(v26) = 4 * v18; /*0x5259cf*/
    v19 = j_MemoryHeap_Alloc(&FormHeap, v18, v26, v31); /*0x5259df*/
    _memset((int)v19, 0, 4 * v18); /*0x5259e4*/
    for ( k = 0; k < v18; *((float *)v19 + k - 1) = *(float *)(*(_DWORD *)(this + 0x144) + 4 * v22) ) /*0x5259ec*/
    {
      v21 = *(_DWORD *)(this + 0x144); /*0x5259f2*/
      if ( !v21 || !((*(_DWORD *)(this + 0x148) - v21) >> 2) ) /*0x525a04*/
        _invalid_parameter_noinfo((int)v19, k, this); /*0x525a09*/
      v22 = k * *(_DWORD *)(this + 0x13C); /*0x525a1a*/
      ++k; /*0x525a1d*/
    }
    LODWORD(v30) = 4 * v18; /*0x525a2f*/
    TESForm_PutFormRecordChunkData(0x53544746, v19, v30); /*0x525a36*/
    MemoryHeap_Free_checked(v19); /*0x525a44*/
  }
  TESForm_PutCurrentChunkData2(0x4D414E46, *(_WORD *)(this + 0x1E0)); /*0x525a56*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x525a5e*/
}
