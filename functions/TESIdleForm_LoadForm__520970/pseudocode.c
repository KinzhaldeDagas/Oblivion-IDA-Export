char __thiscall TESIdleForm_LoadForm(TESForm *this, Data *a2)
{
  Data *v3; // ebx
  signed int ChunkType; // eax
  void *v6; // edi
  void *v7; // ebx
  Data *OverrideFile; // eax
  TESForm *v9; // eax
  void (__thiscall *GetDescription)(TESForm *, BSStringT *); // edx
  bool v11; // zf
  Data *v12; // eax
  TESForm *v13; // eax
  void (__thiscall *v14)(TESForm *, BSStringT *); // edx
  UInt32 v15; // eax
  unsigned int *v16; // ecx
  TESObjectREFR *v17; // ecx
  unsigned int v18; // ebx
  int v19; // eax
  UInt32 refID; // edi
  void *v21; // eax
  _DWORD *v22; // eax
  void *v23; // eax
  void *v24; // eax
  int v25[4]; // [esp+0h] [ebp-3Ch] BYREF
  const char *v26; // [esp+10h] [ebp-2Ch] BYREF
  __int16 v27; // [esp+14h] [ebp-28h]
  __int16 v28; // [esp+16h] [ebp-26h]
  const char *v29; // [esp+18h] [ebp-24h] BYREF
  __int16 v30; // [esp+1Ch] [ebp-20h]
  __int16 v31; // [esp+1Eh] [ebp-1Eh]
  TESObjectREFR *v32; // [esp+20h] [ebp-1Ch]
  char ArgList[4]; // [esp+24h] [ebp-18h] BYREF
  TESForm a1; // [esp+28h] [ebp-14h] BYREF

  v3 = a2;
  if ( TESFile_GetRecordType(a2) != 0x3C )
    return 0;
  TESFile_InitializeFormFromRecord(a2, this, v25[0], v25[1]);
  ChunkType = TESFile_GetChunkType(a2);
  v6 = 0;
  if ( ChunkType )
  {
    while ( ChunkType > 0x4C444F4D )
    {
      switch ( ChunkType )
      {
        case 0x4D414E41:
          TESFile_GetChunkData(v3, (char *)this + 0x38, 1u);
          break;
        case 0x54444F4D:
          goto LABEL_51;
        case 0x54445443:
          goto LABEL_50;
      }
LABEL_26:
      if ( TESFile_GetNextChunk(v3) )
      {
        ChunkType = TESFile_GetChunkType(v3);
        v6 = 0;
        if ( ChunkType )
          continue;
      }
      return 1;
    }
    if ( ChunkType == 0x4C444F4D )
      goto LABEL_51;
    if ( ChunkType > 0x42444F4D )
    {
      if ( ChunkType == 0x44494445 )
      {
        _alloca_();
        TESFile_GetChunkData(v3, (char *)v25, 0x200u);
        this->vtbl->SetEditorID(this, (const char *)v25);
      }
      goto LABEL_26;
    }
    if ( ChunkType == 0x42444F4D )
    {
LABEL_51:
      if ( this )
        TESModel_Load((float *)this + 6, v3);
      else
        TESModel_Load(0, v3);
      goto LABEL_26;
    }
    if ( ChunkType != 0x41445443 )
    {
      if ( ChunkType != 0x41544144 )
        goto LABEL_26;
      *(_DWORD *)ArgList = 0;
      a1.vtbl = 0;
      TESFile_GetChunkData(v3, ArgList, 8u);
      v7 = 0;
      if ( *(_DWORD *)ArgList )
      {
        OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
        TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
        v9 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
        v7 = OblivionDynamicCast(
               v9,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESIdleForm `RTTI Type Descriptor',
               0);
        if ( !v7 )
        {
          v29 = 0;
          v30 = 0;
          v31 = 0;
          GetDescription = this->vtbl->GetDescription;
          a1.member.modlist.data = 0;
          GetDescription(this, (BSStringT *)&v29);
          PrintError("Could not find parent idle (%08X) for %s.", *(_DWORD *)ArgList, v29);
          a1.member.modlist.data = (Data *)0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&v29);
        }
      }
      v11 = a1.vtbl == 0;
      *((_DWORD *)this + 0x10) = v7;
      if ( !v11 )
      {
        v12 = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
        TESForm_ResolveFormID((UInt32 *)&a1, v12);
        v13 = TESForm_LookupByFormID((UInt32)a1.vtbl);
        v6 = OblivionDynamicCast(
               v13,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESIdleForm `RTTI Type Descriptor',
               0);
        if ( !v6 )
        {
          v26 = 0;
          v27 = 0;
          v28 = 0;
          v14 = this->vtbl->GetDescription;
          a1.member.modlist.data = (Data *)1;
          v14(this, (BSStringT *)&v26);
          PrintError("Could not find previous idle (%08X) for %s.", a1.vtbl, v26);
          a1.member.modlist.data = (Data *)0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&v26);
        }
      }
      *((_DWORD *)this + 0x11) = v6;
      if ( v7 )
      {
        v15 = 0;
        if ( v6 )
        {
          v16 = *((unsigned int **)v7 + 0xF);
          v15 = 0xFFFFFFFF;
          if ( v16 )
            v15 = sub_494E90(v16, (int)v6);
          if ( v15 != 0xFFFFFFFF )
            ++v15;
        }
        else if ( (this->member.flags & 0x20) != 0 )
        {
          v15 = 0xFFFFFFFF;
        }
        sub_520780((TESObjectREFR **)v7, v15, (unsigned int)this);
        goto LABEL_25;
      }
      v17 = (TESObjectREFR *)sub_5216A0((_DWORD *)g_idleAnimationMap, this);
      v32 = v17;
      if ( !v17 )
        goto LABEL_25;
      v18 = 0;
      if ( v6 )
      {
        v19 = sub_494E90((unsigned int *)v17, (int)v6);
        if ( v19 != 0xFFFFFFFF )
          ++v19;
        v17 = v32;
        v18 = v19;
      }
      refID = v17->member.super.refID;
      if ( !refID )
      {
        if ( v18 )
          goto LABEL_36;
LABEL_41:
        sub_52F3C0(v17, v18, (unsigned int)this);
LABEL_25:
        v3 = a2;
        goto LABEL_26;
      }
      if ( v18 )
      {
LABEL_36:
        if ( v18 > refID )
          goto LABEL_37;
      }
      else
      {
        if ( (this->member.flags & 0x20) == 0 )
          goto LABEL_38;
LABEL_37:
        v18 = v17->member.super.refID;
      }
LABEL_38:
      v21 = (void *)sub_494ED0(v17, v18);
      v22 = OblivionDynamicCast(
              v21,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESIdleForm `RTTI Type Descriptor',
              0);
      if ( v22 )
        v22[0x11] = this;
      v23 = (void *)sub_494ED0(v32, v18 - 1);
      v24 = OblivionDynamicCast(
              v23,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESIdleForm `RTTI Type Descriptor',
              0);
      v17 = v32;
      *((_DWORD *)this + 0x11) = v24;
      goto LABEL_41;
    }
LABEL_50:
    ConditionList_LoadCondition((int *)v3);
    goto LABEL_26;
  }
  return 1;
}
