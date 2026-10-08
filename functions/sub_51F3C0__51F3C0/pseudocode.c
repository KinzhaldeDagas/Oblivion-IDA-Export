UInt32 __usercall sub_51F3C0@<eax>(int this@<ecx>, int a2@<edi>)
{
  int *v3; // ebx
  int v4; // esi
  unsigned __int16 v5; // dx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  CHAR *v12; // esi
  size_t v14; // [esp-Ch] [ebp-18h]
  size_t v15; // [esp-4h] [ebp-10h]
  size_t v16; // [esp-4h] [ebp-10h]
  int Src; // [esp+8h] [ebp-4h] BYREF

  TESForm_InitializeFormRecord((TESForm *)this, this); /*0x51f3c5*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x18)); /*0x51f3cd*/
  sub_46E650((char *)(this + 0x24)); /*0x51f3d5*/
  LODWORD(v15) = 1; /*0x51f3da*/
  TESForm_SaveGenericComponents((TESForm *)this, a2, (void *)(this + 0x34), v15); /*0x51f3e2*/
  LODWORD(v16) = 4; /*0x51f3e7*/
  TESForm_PutFormRecordChunkData(0x4D414E43, (void *)(this + 0x38), v16); /*0x51f3f2*/
  v3 = (int *)(this + 0x3C); /*0x51f3f7*/
  Src = 0; /*0x51f3ff*/
  if ( this != 0xFFFFFFC4 )
  {
    HIDWORD(v14) = a2; /*0x51f40e*/
    do
    {
      if ( !v3[1] && !*v3 ) /*0x51f416*/
        break; /*0x51f419*/
      v4 = *v3; /*0x51f41f*/
      LODWORD(v14) = 4; /*0x51f421*/
      TESForm_PutFormRecordChunkData(0x4D414E52, &Src, v14); /*0x51f42d*/
      v5 = *(_WORD *)(v4 + 4); /*0x51f432*/
      if ( v5 == 0xFFFF ? strlen(*(const char **)v4) : v5 )
      {
        if ( v5 == 0xFFFF ) /*0x51f45e*/
          v7 = strlen(*(const char **)v4); /*0x51f46e*/
        else
          v7 = v5; /*0x51f472*/
        LODWORD(v14) = v7 + 1; /*0x51f478*/
        j_TESForm_PutCurrentChunkData(0x4D414E4D, *(void **)v4, v14); /*0x51f481*/
      }
      LOWORD(v8) = *(_WORD *)(v4 + 0xC); /*0x51f489*/
      v8 = (_WORD)v8 == 0xFFFF ? strlen(*(const char **)(v4 + 8)) : (unsigned __int16)v8;
      if ( v8 ) /*0x51f4b2*/
      {
        LOWORD(v9) = *(_WORD *)(v4 + 0xC); /*0x51f4b4*/
        if ( (_WORD)v9 == 0xFFFF ) /*0x51f4bc*/
          v9 = strlen(*(const char **)(v4 + 8)); /*0x51f4c1*/
        else
          v9 = (unsigned __int16)v9; /*0x51f4d1*/
        LODWORD(v14) = v9 + 1; /*0x51f4da*/
        j_TESForm_PutCurrentChunkData(0x4D414E46, *(void **)(v4 + 8), v14); /*0x51f4e1*/
      }
      LOWORD(v10) = *(_WORD *)(v4 + 0x18); /*0x51f4e9*/
      v10 = (_WORD)v10 == 0xFFFF ? strlen(*(const char **)(v4 + 0x14)) : (unsigned __int16)v10;
      if ( v10 ) /*0x51f512*/
      {
        LOWORD(v11) = *(_WORD *)(v4 + 0x18); /*0x51f514*/
        if ( (_WORD)v11 == 0xFFFF ) /*0x51f51c*/
          v11 = strlen(*(const char **)(v4 + 0x14)); /*0x51f521*/
        else
          v11 = (unsigned __int16)v11; /*0x51f531*/
        v12 = *(CHAR **)(v4 + 0x14); /*0x51f534*/
        if ( !v12 ) /*0x51f539*/
          v12 = EmptyString; /*0x51f53b*/
        LODWORD(v14) = v11 + 1; /*0x51f543*/
        j_TESForm_PutCurrentChunkData(0x4D414E49, v12, v14); /*0x51f54a*/
      }
      ++Src; /*0x51f552*/
      v3 = (int *)v3[1]; /*0x51f557*/
    }
    while ( v3 );
  }
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x51f56b*/
}
