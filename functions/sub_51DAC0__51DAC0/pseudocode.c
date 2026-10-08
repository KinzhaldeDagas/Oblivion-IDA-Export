UInt32 __usercall sub_51DAC0@<eax>(int this@<ecx>, char a2@<bpl>, int a3@<edi>)
{
  int v4; // edi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  void *v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  CHAR *v11; // ecx
  _DWORD *v12; // ecx
  int v14; // eax
  size_t v15; // [esp+0h] [ebp-Ch]
  size_t v16; // [esp+0h] [ebp-Ch]
  size_t v17; // [esp+0h] [ebp-Ch]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x51dac4*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0xA0)); /*0x51dacf*/
  TESModel_Save((void *)(this + 0xAC), 0x4C444F4D, 0x42444F4D, 0x54444F4D); /*0x51dae9*/
  TESSpellList_SaveComponent((int *)(this + 0x54)); /*0x51daf1*/
  TESModelList_WriteStringChunk((_DWORD *)(this + 0xEC), a3, 0x5A46494E, 0x5446494E); /*0x51db06*/
  v4 = this + 0x24; /*0x51db0b*/
  TESActorBaseData_SaveComponent((_DWORD *)(this + 0x24)); /*0x51db10*/
  LODWORD(v15) = 6; /*0x51db15*/
  TESForm_SaveGenericComponents((TESForm *)this, this + 0x24, (void *)(this + 0x104), v15); /*0x51db20*/
  LODWORD(v16) = 1; /*0x51db25*/
  TESForm_PutFormRecordChunkData(0x4D414E52, (void *)(this + 0x10A), v16); /*0x51db33*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x120))(this) ) /*0x51db45*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x120))(this); /*0x51db55*/
    TESForm_PutCurrentChunkData4(0x4D414E5A, *(_DWORD *)(v5 + 0xC)); /*0x51db60*/
  }
  TESForm_PutCurrentChunkData4(0x4D414E54, COERCE_INT(*(float *)(this + 0x10C))); /*0x51db77*/
  TESForm_PutCurrentChunkData4(0x4D414E42, COERCE_INT(*(float *)(this + 0x114))); /*0x51db8d*/
  TESForm_PutCurrentChunkData4(0x4D414E57, COERCE_INT(*(float *)(this + 0x110))); /*0x51dba3*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x28))(this + 0x24) ) /*0x51dbb2*/
  {
    LOWORD(v6) = *(_WORD *)(this + 0x124); /*0x51dbb8*/
    if ( (_WORD)v6 == 0xFFFF ) /*0x51dbc3*/
      v6 = strlen(*(const char **)(this + 0x120)); /*0x51dbcb*/
    else
      v6 = (unsigned __int16)v6; /*0x51dbdd*/
    if ( v6 ) /*0x51dbe2*/
    {
      LOWORD(v7) = *(_WORD *)(this + 0x124); /*0x51dbe4*/
      if ( (_WORD)v7 == 0xFFFF ) /*0x51dbef*/
        v7 = strlen(*(const char **)(this + 0x120)); /*0x51dbf7*/
      else
        v7 = (unsigned __int16)v7; /*0x51dc0d*/
      LODWORD(v17) = v7 + 1; /*0x51dc1f*/
      v8 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 0x11C) + 0x14))(this + 0x11C); /*0x51dc23*/
      TESForm_PutFormRecordChunkData(0x304D414E, v8, v17); /*0x51dc2b*/
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x30))(this + 0x24) ) /*0x51dc3a*/
  {
    LOWORD(v9) = *(_WORD *)(this + 0x13C); /*0x51dc40*/
    if ( (_WORD)v9 == 0xFFFF ) /*0x51dc4b*/
      v9 = strlen(*(const char **)(this + 0x138)); /*0x51dc53*/
    else
      v9 = (unsigned __int16)v9; /*0x51dc63*/
    if ( v9 ) /*0x51dc68*/
    {
      LOWORD(v10) = *(_WORD *)(this + 0x13C); /*0x51dc6a*/
      if ( (_WORD)v10 == 0xFFFF ) /*0x51dc75*/
        v10 = strlen(*(const char **)(this + 0x138)); /*0x51dc7d*/
      else
        v10 = (unsigned __int16)v10; /*0x51dc8d*/
      v11 = *(CHAR **)(this + 0x138); /*0x51dc90*/
      if ( !v11 ) /*0x51dc98*/
        v11 = EmptyString; /*0x51dc9a*/
      LODWORD(v17) = v10 + 1; /*0x51dca2*/
      TESForm_PutFormRecordChunkData(0x314D414E, v11, v17); /*0x51dca9*/
    }
  }
  if ( (*(_DWORD *)(this + 0x28) & 0x100) != 0 ) /*0x51dcba*/
  {
    v12 = *(_DWORD **)(this + 0x100); /*0x51dcbc*/
    if ( v12 ) /*0x51dcc4*/
    {
      CreatureSoundArray_Save(v12); /*0x51dcc6*/
      return TESForm_FinalizeFormRecord((TESForm *)this); /*0x51dccf*/
    }
  }
  else
  {
    v14 = *(_DWORD *)(this + 0x100); /*0x51dcd4*/
    if ( v14 ) /*0x51dcdc*/
      TESForm_PutCurrentChunkData4(0x52435343, *(_DWORD *)(v14 + 0xC)); /*0x51dce7*/
  }
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x51dccb*/
}
