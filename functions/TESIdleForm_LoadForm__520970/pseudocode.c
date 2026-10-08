// IDLE record loader. Loads model, condition data, ANAM byte, and parent/previous idle links; separate from KFFZ special anim file list.
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

  v3 = a2; /*0x52099d*/
  if ( TESFile_GetRecordType(a2) != 0x3C ) /*0x5209aa*/
    return 0; /*0x5209ae*/
  TESFile_InitializeFormFromRecord(a2, this, v25[0], v25[1]); /*0x5209b6*/
  ChunkType = TESFile_GetChunkType(a2); /*0x5209bd*/
  v6 = 0; /*0x5209c2*/
  if ( ChunkType ) /*0x5209c6*/
  {
    while ( ChunkType > 0x4C444F4D ) /*0x5209d5*/
    {
      switch ( ChunkType ) /*0x520c93*/
      {
        case 0x4D414E41: /*0x520c93*/
          TESFile_GetChunkData(v3, (char *)this + 0x38, 1u); /*0x520ce4*/
          break;
        case 0x54444F4D: /*0x520c93*/
          goto LABEL_51; /*0x520c9a*/
        case 0x54445443: /*0x520c93*/
          goto LABEL_50; /*0x520ca1*/
      }
LABEL_26:
      if ( TESFile_GetNextChunk(v3) ) /*0x520b72*/
      {
        ChunkType = TESFile_GetChunkType(v3); /*0x520b7d*/
        v6 = 0; /*0x520b82*/
        if ( ChunkType ) /*0x520b86*/
          continue; /*0x520b86*/
      }
      return 1; /*0x520b86*/
    }
    if ( ChunkType == 0x4C444F4D ) /*0x5209db*/
      goto LABEL_51; /*0x5209db*/
    if ( ChunkType > 0x42444F4D ) /*0x5209e6*/
    {
      if ( ChunkType == 0x44494445 ) /*0x520c5c*/
      {
        _alloca_(v25[0]); /*0x520c68*/
        TESFile_GetChunkData(v3, (char *)v25, 0x200u); /*0x520c77*/
        this->vtbl->SetEditorID(this, (const char *)v25); /*0x520c87*/
      }
      goto LABEL_26; /*0x520c89*/
    }
    if ( ChunkType == 0x42444F4D ) /*0x5209ec*/
    {
LABEL_51:
      if ( this ) /*0x520cb7*/
        TESModel_Load((float *)this + 6, v3); /*0x520cbe*/
      else
        TESModel_Load(0, v3); /*0x520ccf*/
      goto LABEL_26; /*0x520cc6*/
    }
    if ( ChunkType != 0x41445443 ) /*0x5209f7*/
    {
      if ( ChunkType != 0x41544144 ) /*0x520a02*/
        goto LABEL_26; /*0x520a02*/
      *(_DWORD *)ArgList = 0; /*0x520a0a*/
      a1.vtbl = 0; /*0x520a0d*/
      TESFile_GetChunkData(v3, ArgList, 8u); /*0x520a18*/
      v7 = 0; /*0x520a1d*/
      if ( *(_DWORD *)ArgList ) /*0x520a22*/
      {
        OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x520a28*/
        TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x520a32*/
        v9 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x520a4a*/
        v7 = OblivionDynamicCast( /*0x520a58*/
               v9,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESIdleForm `RTTI Type Descriptor',
               0);
        if ( !v7 ) /*0x520a5f*/
        {
          v29 = 0; /*0x520a61*/
          v30 = 0; /*0x520a64*/
          v31 = 0; /*0x520a68*/
          GetDescription = this->vtbl->GetDescription; /*0x520a6e*/
          a1.member.modlist.data = 0; /*0x520a77*/
          GetDescription(this, (BSStringT *)&v29); /*0x520a7a*/
          PrintError("Could not find parent idle (%08X) for %s.", *(_DWORD *)ArgList, v29); /*0x520a89*/
          a1.member.modlist.data = (Data *)0xFFFFFFFF; /*0x520a94*/
          BSStringT_Clear((unsigned int *)&v29); /*0x520a9b*/
        }
      }
      v11 = a1.vtbl == 0; /*0x520aa0*/
      *((_DWORD *)this + 0x10) = v7; /*0x520aa4*/
      if ( !v11 ) /*0x520aa7*/
      {
        v12 = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x520ab1*/
        TESForm_ResolveFormID((UInt32 *)&a1, v12); /*0x520abb*/
        v13 = TESForm_LookupByFormID((UInt32)a1.vtbl); /*0x520ad5*/
        v6 = OblivionDynamicCast( /*0x520ae3*/
               v13,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESIdleForm `RTTI Type Descriptor',
               0);
        if ( !v6 ) /*0x520aea*/
        {
          v26 = 0; /*0x520aec*/
          v27 = 0; /*0x520aef*/
          v28 = 0; /*0x520af3*/
          v14 = this->vtbl->GetDescription; /*0x520af9*/
          a1.member.modlist.data = (Data *)1; /*0x520b02*/
          v14(this, (BSStringT *)&v26); /*0x520b09*/
          PrintError("Could not find previous idle (%08X) for %s.", a1.vtbl, v26); /*0x520b18*/
          a1.member.modlist.data = (Data *)0xFFFFFFFF; /*0x520b23*/
          BSStringT_Clear((unsigned int *)&v26); /*0x520b2a*/
        }
      }
      *((_DWORD *)this + 0x11) = v6; /*0x520b31*/
      if ( v7 ) /*0x520b34*/
      {
        v15 = 0; /*0x520b36*/
        if ( v6 ) /*0x520b3a*/
        {
          v16 = *((unsigned int **)v7 + 0xF); /*0x520b3c*/
          v15 = 0xFFFFFFFF; /*0x520b3f*/
          if ( v16 ) /*0x520b44*/
            v15 = sub_494E90(v16, (int)v6); /*0x520b47*/
          if ( v15 != 0xFFFFFFFF ) /*0x520b4f*/
            ++v15; /*0x520b51*/
        }
        else if ( (this->member.flags & 0x20) != 0 ) /*0x520b5f*/
        {
          v15 = 0xFFFFFFFF; /*0x520b61*/
        }
        TESIdleForm_InsertChild((TESObjectREFR **)v7, v15, (unsigned int)this); /*0x520b68*/
        goto LABEL_25; /*0x520b68*/
      }
      v17 = (TESObjectREFR *)sub_5216A0((_DWORD *)MEMORY[0xB362C0], this); /*0x520bbb*/
      v32 = v17; /*0x520bbf*/
      if ( !v17 ) /*0x520bc2*/
        goto LABEL_25; /*0x520bc2*/
      v18 = 0; /*0x520bc4*/
      if ( v6 ) /*0x520bc8*/
      {
        v19 = sub_494E90((unsigned int *)v17, (int)v6); /*0x520bcb*/
        if ( v19 != 0xFFFFFFFF ) /*0x520bd3*/
          ++v19; /*0x520bd5*/
        v17 = v32; /*0x520bd8*/
        v18 = v19; /*0x520bdb*/
      }
      refID = v17->member.super.refID; /*0x520bdd*/
      if ( !refID ) /*0x520be2*/
      {
        if ( v18 ) /*0x520be6*/
          goto LABEL_36; /*0x520be6*/
LABEL_41:
        sub_52F3C0((unsigned int *)v17, v18, (unsigned int)this); /*0x520c3b*/
LABEL_25:
        v3 = a2; /*0x520b6d*/
        goto LABEL_26; /*0x520b6d*/
      }
      if ( v18 ) /*0x520c49*/
      {
LABEL_36:
        if ( v18 > refID ) /*0x520bea*/
          goto LABEL_37; /*0x520bea*/
      }
      else
      {
        if ( (this->member.flags & 0x20) == 0 ) /*0x520c53*/
          goto LABEL_38; /*0x520c53*/
LABEL_37:
        v18 = v17->member.super.refID; /*0x520bec*/
      }
LABEL_38:
      v21 = (void *)sub_494ED0(v17, v18); /*0x520bee*/
      v22 = OblivionDynamicCast( /*0x520c03*/
              v21,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESIdleForm `RTTI Type Descriptor',
              0);
      if ( v22 ) /*0x520c0d*/
        v22[0x11] = this; /*0x520c0f*/
      v23 = (void *)sub_494ED0(v32, v18 - 1); /*0x520c27*/
      v24 = OblivionDynamicCast( /*0x520c2d*/
              v23,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESIdleForm `RTTI Type Descriptor',
              0);
      v17 = v32; /*0x520c32*/
      *((_DWORD *)this + 0x11) = v24; /*0x520c38*/
      goto LABEL_41; /*0x520c38*/
    }
LABEL_50:
    ConditionList_LoadCondition((_DWORD *)this + 0xC, v3); /*0x520ca7*/
    goto LABEL_26; /*0x520cb0*/
  }
  return 1; /*0x520b91*/
}
