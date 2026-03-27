UInt32 __usercall sub_4AD010@<eax>(int this@<ecx>, char a2@<bpl>)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  CHAR *v5; // ecx
  int v6; // edi
  unsigned int v7; // eax
  unsigned int v8; // eax
  CHAR *v9; // ecx
  size_t v11; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord((TESForm *)this, a2);
  LOWORD(v3) = *(_WORD *)(this + 0x100);
  if ( (_WORD)v3 == 0xFFFF )
    v3 = strlen(*(const char **)(this + 0xFC));
  else
    v3 = (unsigned __int16)v3;
  if ( v3 )
  {
    v6 = this + 0xF8;
    TESTexture_Save(this + 0xF8, 0x4E4F4349);
  }
  else
  {
    LOWORD(v4) = *(_WORD *)(this + 0x100);
    if ( (_WORD)v4 == 0xFFFF )
      v4 = strlen(*(const char **)(this + 0xFC));
    else
      v4 = (unsigned __int16)v4;
    v5 = *(CHAR **)(this + 0xFC);
    v6 = this + 0xF8;
    if ( !v5 )
      v5 = EmptyString;
    LODWORD(v11) = v4 + 1;
    j_TESForm_PutCurrentChunkData(0x4E4F4349, v5, v11);
  }
  LOWORD(v7) = *(_WORD *)(this + 0x10C);
  if ( (_WORD)v7 == 0xFFFF )
    v7 = strlen(*(const char **)(this + 0x108));
  else
    v7 = (unsigned __int16)v7;
  if ( v7 )
  {
    TESTexture_Save(this + 0x104, 0x324F4349);
  }
  else
  {
    LOWORD(v8) = *(_WORD *)(this + 0x100);
    if ( (_WORD)v8 == 0xFFFF )
      v8 = strlen(*(const char **)(this + 0xFC));
    else
      v8 = (unsigned __int16)v8;
    v9 = *(CHAR **)(v6 + 4);
    if ( !v9 )
      v9 = EmptyString;
    LODWORD(v11) = v8 + 1;
    j_TESForm_PutCurrentChunkData(0x324F4349, v9, v11);
  }
  LODWORD(v11) = 0xE0;
  TESForm_SaveGenericComponents((TESForm *)this, v6, (void *)(this + 0x18), v11);
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
