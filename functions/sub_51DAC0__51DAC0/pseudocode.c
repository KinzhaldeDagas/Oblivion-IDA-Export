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

  TESForm_InitializeFormRecord((TESForm *)this, a2);
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0xA0));
  TESModel_Save((void *)(this + 0xAC), 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESSpellList_SaveComponent((int *)(this + 0x54));
  sub_46DBE0((_DWORD *)(this + 0xEC), a3, 0x5A46494E, 0x5446494E);
  v4 = this + 0x24;
  TESActorBaseData_SaveComponent((_DWORD *)(this + 0x24));
  LODWORD(v15) = 6;
  TESForm_SaveGenericComponents((TESForm *)this, this + 0x24, (void *)(this + 0x104), v15);
  LODWORD(v16) = 1;
  TESForm_PutFormRecordChunkData(0x4D414E52, (void *)(this + 0x10A), v16);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x120))(this) )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x120))(this);
    TESForm_PutCurrentChunkData4(0x4D414E5A, *(_DWORD *)(v5 + 0xC));
  }
  TESForm_PutCurrentChunkData4(0x4D414E54, COERCE_INT(*(float *)(this + 0x10C)));
  TESForm_PutCurrentChunkData4(0x4D414E42, COERCE_INT(*(float *)(this + 0x114)));
  TESForm_PutCurrentChunkData4(0x4D414E57, COERCE_INT(*(float *)(this + 0x110)));
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x28))(this + 0x24) )
  {
    LOWORD(v6) = *(_WORD *)(this + 0x124);
    if ( (_WORD)v6 == 0xFFFF )
      v6 = strlen(*(const char **)(this + 0x120));
    else
      v6 = (unsigned __int16)v6;
    if ( v6 )
    {
      LOWORD(v7) = *(_WORD *)(this + 0x124);
      if ( (_WORD)v7 == 0xFFFF )
        v7 = strlen(*(const char **)(this + 0x120));
      else
        v7 = (unsigned __int16)v7;
      LODWORD(v17) = v7 + 1;
      v8 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 0x11C) + 0x14))(this + 0x11C);
      TESForm_PutFormRecordChunkData(0x304D414E, v8, v17);
    }
  }
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x30))(this + 0x24) )
  {
    LOWORD(v9) = *(_WORD *)(this + 0x13C);
    if ( (_WORD)v9 == 0xFFFF )
      v9 = strlen(*(const char **)(this + 0x138));
    else
      v9 = (unsigned __int16)v9;
    if ( v9 )
    {
      LOWORD(v10) = *(_WORD *)(this + 0x13C);
      if ( (_WORD)v10 == 0xFFFF )
        v10 = strlen(*(const char **)(this + 0x138));
      else
        v10 = (unsigned __int16)v10;
      v11 = *(CHAR **)(this + 0x138);
      if ( !v11 )
        v11 = EmptyString;
      LODWORD(v17) = v10 + 1;
      TESForm_PutFormRecordChunkData(0x314D414E, v11, v17);
    }
  }
  if ( (*(_DWORD *)(this + 0x28) & 0x100) != 0 )
  {
    v12 = *(_DWORD **)(this + 0x100);
    if ( v12 )
    {
      CreatureSoundArray_Save(v12);
      return TESForm_FinalizeFormRecord((TESForm *)this);
    }
  }
  else
  {
    v14 = *(_DWORD *)(this + 0x100);
    if ( v14 )
      TESForm_PutCurrentChunkData4(0x52435343, *(_DWORD *)(v14 + 0xC));
  }
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
