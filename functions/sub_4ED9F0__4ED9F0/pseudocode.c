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

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4ed9f6*/
  LOWORD(v4) = *(_WORD *)(this + 0x28); /*0x4ed9fb*/
  if ( (_WORD)v4 == 0xFFFF ) /*0x4eda03*/
    v4 = strlen(*(const char **)(this + 0x24)); /*0x4eda08*/
  else
    v4 = (unsigned __int16)v4; /*0x4eda1d*/
  v5 = *(CHAR **)(this + 0x24); /*0x4eda20*/
  if ( !v5 ) /*0x4eda25*/
    v5 = EmptyString; /*0x4eda27*/
  LODWORD(v15) = v4 + 1; /*0x4eda2f*/
  j_TESForm_PutCurrentChunkData(0x4D414E54, v5, v15); /*0x4eda36*/
  LODWORD(v14) = 1; /*0x4eda3b*/
  TESForm_PutFormRecordChunkData(0x4D414E41, (void *)(this + 0x2C), v14); /*0x4eda46*/
  LODWORD(v13) = 1; /*0x4eda4b*/
  TESForm_PutFormRecordChunkData(0x4D414E46, (void *)(this + 0x2D), v13); /*0x4eda56*/
  LOWORD(v6) = *(_WORD *)(this + 0x34); /*0x4eda5b*/
  if ( (_WORD)v6 == 0xFFFF ) /*0x4eda66*/
    v6 = strlen(*(const char **)(this + 0x30)); /*0x4eda6b*/
  else
    v6 = (unsigned __int16)v6; /*0x4eda7d*/
  v7 = *(CHAR **)(this + 0x30); /*0x4eda80*/
  if ( !v7 ) /*0x4eda85*/
    v7 = EmptyString; /*0x4eda87*/
  LODWORD(v16) = v6 + 1; /*0x4eda8f*/
  TESForm_PutFormRecordChunkData(0x4D414E4D, v7, v16); /*0x4eda96*/
  v8 = *(_DWORD *)(this + 0x38); /*0x4eda9b*/
  if ( v8 ) /*0x4edaa3*/
    TESForm_PutCurrentChunkData4(0x4D414E53, *(_DWORD *)(v8 + 0xC)); /*0x4edaae*/
  LODWORD(v17) = 0x64; /*0x4edab6*/
  TESForm_SaveGenericComponents((TESForm *)this, a3, (void *)(this + 0x3C), v17); /*0x4edabe*/
  v9 = *(_DWORD *)(this + 0xA0); /*0x4edac3*/
  if ( v9 ) /*0x4edacb*/
    Src = *(_DWORD *)(v9 + 0xC); /*0x4edad0*/
  else
    Src = 0; /*0x4edad6*/
  v10 = *(_DWORD *)(this + 0xA4); /*0x4edade*/
  if ( v10 ) /*0x4edae6*/
    v20 = *(_DWORD *)(v10 + 0xC); /*0x4edaeb*/
  else
    v20 = 0; /*0x4edaf1*/
  v11 = *(_DWORD *)(this + 0xA8); /*0x4edaf9*/
  if ( v11 ) /*0x4edb01*/
    v21 = *(_DWORD *)(v11 + 0xC); /*0x4edb06*/
  else
    v21 = 0; /*0x4edb0c*/
  LODWORD(v18) = 0xC; /*0x4edb14*/
  TESForm_PutFormRecordChunkData(0x4D414E47, &Src, v18); /*0x4edb20*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4edb2f*/
}
