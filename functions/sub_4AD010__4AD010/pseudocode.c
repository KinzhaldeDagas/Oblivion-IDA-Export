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

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x4ad014*/
  LOWORD(v3) = *(_WORD *)(this + 0x100); /*0x4ad019*/
  if ( (_WORD)v3 == 0xFFFF ) /*0x4ad024*/
    v3 = strlen(*(const char **)(this + 0xFC)); /*0x4ad02c*/
  else
    v3 = (unsigned __int16)v3; /*0x4ad03d*/
  if ( v3 ) /*0x4ad042*/
  {
    v6 = this + 0xF8; /*0x4ad099*/
    TESTexture_Save(this + 0xF8, 0x4E4F4349); /*0x4ad0a6*/
  }
  else
  {
    LOWORD(v4) = *(_WORD *)(this + 0x100); /*0x4ad044*/
    if ( (_WORD)v4 == 0xFFFF ) /*0x4ad04f*/
      v4 = strlen(*(const char **)(this + 0xFC)); /*0x4ad057*/
    else
      v4 = (unsigned __int16)v4; /*0x4ad06d*/
    v5 = *(CHAR **)(this + 0xFC); /*0x4ad070*/
    v6 = this + 0xF8; /*0x4ad078*/
    if ( !v5 ) /*0x4ad07e*/
      v5 = EmptyString; /*0x4ad080*/
    LODWORD(v11) = v4 + 1; /*0x4ad088*/
    j_TESForm_PutCurrentChunkData(0x4E4F4349, v5, v11); /*0x4ad08f*/
  }
  LOWORD(v7) = *(_WORD *)(this + 0x10C); /*0x4ad0ab*/
  if ( (_WORD)v7 == 0xFFFF ) /*0x4ad0b6*/
    v7 = strlen(*(const char **)(this + 0x108)); /*0x4ad0be*/
  else
    v7 = (unsigned __int16)v7; /*0x4ad0ce*/
  if ( v7 ) /*0x4ad0d3*/
  {
    TESTexture_Save(this + 0x104, 0x324F4349); /*0x4ad12b*/
  }
  else
  {
    LOWORD(v8) = *(_WORD *)(this + 0x100); /*0x4ad0d5*/
    if ( (_WORD)v8 == 0xFFFF ) /*0x4ad0e0*/
      v8 = strlen(*(const char **)(this + 0xFC)); /*0x4ad0e8*/
    else
      v8 = (unsigned __int16)v8; /*0x4ad0fd*/
    v9 = *(CHAR **)(v6 + 4); /*0x4ad100*/
    if ( !v9 ) /*0x4ad105*/
      v9 = EmptyString; /*0x4ad107*/
    LODWORD(v11) = v8 + 1; /*0x4ad10f*/
    j_TESForm_PutCurrentChunkData(0x324F4349, v9, v11); /*0x4ad116*/
  }
  LODWORD(v11) = 0xE0; /*0x4ad130*/
  TESForm_SaveGenericComponents((TESForm *)this, v6, (void *)(this + 0x18), v11); /*0x4ad13b*/
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x4ad140*/
}
