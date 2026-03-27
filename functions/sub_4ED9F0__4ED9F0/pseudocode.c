UInt32 __usercall sub_4ED9F0@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  unsigned int v4; // eax
  CHAR *v5; // ecx
  unsigned int v6; // eax
  CHAR *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  size_t v13; // [esp-1Ch] [ebp-2Ch]
  size_t v14; // [esp-10h] [ebp-20h]
  size_t v15; // [esp-4h] [ebp-14h]
  size_t v16; // [esp-4h] [ebp-14h]
  size_t v17; // [esp-4h] [ebp-14h]
  size_t v18; // [esp-4h] [ebp-14h]
  int Src; // [esp+4h] [ebp-Ch] BYREF
  int v20; // [esp+8h] [ebp-8h]
  int v21; // [esp+Ch] [ebp-4h]

  TESForm_InitializeFormRecord((TESForm *)this, a2);
  LOWORD(v4) = *(_WORD *)(this + 0x28);
  if ( (_WORD)v4 == 0xFFFF )
    v4 = strlen(*(const char **)(this + 0x24));
  else
    v4 = (unsigned __int16)v4;
  v5 = *(CHAR **)(this + 0x24);
  if ( !v5 )
    v5 = EmptyString;
  LODWORD(v15) = v4 + 1;
  j_TESForm_PutCurrentChunkData(0x4D414E54, v5, v15);
  LODWORD(v14) = 1;
  TESForm_PutFormRecordChunkData(0x4D414E41, (void *)(this + 0x2C), v14);
  LODWORD(v13) = 1;
  TESForm_PutFormRecordChunkData(0x4D414E46, (void *)(this + 0x2D), v13);
  LOWORD(v6) = *(_WORD *)(this + 0x34);
  if ( (_WORD)v6 == 0xFFFF )
    v6 = strlen(*(const char **)(this + 0x30));
  else
    v6 = (unsigned __int16)v6;
  v7 = *(CHAR **)(this + 0x30);
  if ( !v7 )
    v7 = EmptyString;
  LODWORD(v16) = v6 + 1;
  TESForm_PutFormRecordChunkData(0x4D414E4D, v7, v16);
  v8 = *(_DWORD *)(this + 0x38);
  if ( v8 )
    TESForm_PutCurrentChunkData4(0x4D414E53, *(_DWORD *)(v8 + 0xC));
  LODWORD(v17) = 0x64;
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x3C), v17);
  v9 = *(_DWORD *)(this + 0xA0);
  if ( v9 )
    Src = *(_DWORD *)(v9 + 0xC);
  else
    Src = 0;
  v10 = *(_DWORD *)(this + 0xA4);
  if ( v10 )
    v20 = *(_DWORD *)(v10 + 0xC);
  else
    v20 = 0;
  v11 = *(_DWORD *)(this + 0xA8);
  if ( v11 )
    v21 = *(_DWORD *)(v11 + 0xC);
  else
    v21 = 0;
  LODWORD(v18) = 0xC;
  TESForm_PutFormRecordChunkData(0x4D414E47, &Src, v18);
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
