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

  TESForm_InitializeFormRecord((TESForm *)this, this);
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x18));
  sub_46E650((char *)(this + 0x24));
  LODWORD(v15) = 1;
  TESForm_SaveGenericComponents((TESForm *)this, a2, (void *)(this + 0x34), v15);
  LODWORD(v16) = 4;
  TESForm_PutFormRecordChunkData(0x4D414E43, (void *)(this + 0x38), v16);
  v3 = (int *)(this + 0x3C);
  Src = 0;
  if ( this != 0xFFFFFFC4 )
  {
    HIDWORD(v14) = a2;
    do
    {
      if ( !v3[1] && !*v3 )
        break;
      v4 = *v3;
      LODWORD(v14) = 4;
      TESForm_PutFormRecordChunkData(0x4D414E52, &Src, v14);
      v5 = *(_WORD *)(v4 + 4);
      if ( v5 == 0xFFFF ? strlen(*(const char **)v4) : v5 )
      {
        if ( v5 == 0xFFFF )
          v7 = strlen(*(const char **)v4);
        else
          v7 = v5;
        LODWORD(v14) = v7 + 1;
        j_TESForm_PutCurrentChunkData(0x4D414E4D, *(void **)v4, v14);
      }
      LOWORD(v8) = *(_WORD *)(v4 + 0xC);
      v8 = (_WORD)v8 == 0xFFFF ? strlen(*(const char **)(v4 + 8)) : (unsigned __int16)v8;
      if ( v8 )
      {
        LOWORD(v9) = *(_WORD *)(v4 + 0xC);
        if ( (_WORD)v9 == 0xFFFF )
          v9 = strlen(*(const char **)(v4 + 8));
        else
          v9 = (unsigned __int16)v9;
        LODWORD(v14) = v9 + 1;
        j_TESForm_PutCurrentChunkData(0x4D414E46, *(void **)(v4 + 8), v14);
      }
      LOWORD(v10) = *(_WORD *)(v4 + 0x18);
      v10 = (_WORD)v10 == 0xFFFF ? strlen(*(const char **)(v4 + 0x14)) : (unsigned __int16)v10;
      if ( v10 )
      {
        LOWORD(v11) = *(_WORD *)(v4 + 0x18);
        if ( (_WORD)v11 == 0xFFFF )
          v11 = strlen(*(const char **)(v4 + 0x14));
        else
          v11 = (unsigned __int16)v11;
        v12 = *(CHAR **)(v4 + 0x14);
        if ( !v12 )
          v12 = EmptyString;
        LODWORD(v14) = v11 + 1;
        j_TESForm_PutCurrentChunkData(0x4D414E49, v12, v14);
      }
      ++Src;
      v3 = (int *)v3[1];
    }
    while ( v3 );
  }
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
