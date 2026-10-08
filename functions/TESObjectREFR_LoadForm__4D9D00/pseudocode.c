// Authoritative common placed-reference loader used by TESObjectREFR, Character/ACHR, and Creature/ACRE vtables (LoadForm slots at 0xA46C60, 0xA6FCB8, 0xA71110; matching SaveFormChunks slots at +8). Replays recognized chunks in stream order and forwards common extras to ExtraDataList_Load; there is no REFR-vs-ACHR/ACRE filter here.
//
// 0x4DA017: Placed owner acceptance pass, 2026-10-01: this REFR/ACHR/ACRE loader forwards CELL-schema XCMT/XCLW/XCCM/XCWT/XCLR tags to shared ExtraDataList_Load0x4259E0. These cases have no placed-owner or CELL-owner discriminator; the extra list and later common writer supply behavior.
//
// 0x4DA017: REFR/ACHR/ACRE outer loader forwards CELL-schema XCCM,XCWT,XCMT,XCLW,XCLR chunks into common ExtraDataList_Load0x4259E0 at this dispatcher branch. There is no placed owner-kind gate in the outer loop or these common branches.
BOOL __thiscall TESObjectREFR_LoadForm(TESObjectREFR *this, Data *tesFile)
{
  BSExtraDataVtbl *PersistentCell; // ebx
  signed int ChunkType; // eax
  bool v6; // zf
  float v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  float v11; // ecx
  TESForm *v12; // eax
  int ProcessLevel; // eax
  void (__thiscall ***v14)(_DWORD, int); // ecx
  int v15[3]; // [esp+0h] [ebp-34h] BYREF
  char Dst[4]; // [esp+Ch] [ebp-28h] BYREF
  float v17; // [esp+10h] [ebp-24h]
  float v18; // [esp+14h] [ebp-20h]
  float v19; // [esp+18h] [ebp-1Ch]
  float v20; // [esp+1Ch] [ebp-18h]
  float v21; // [esp+20h] [ebp-14h]
  void *v22; // [esp+24h] [ebp-10h] BYREF
  char ArgList[4]; // [esp+28h] [ebp-Ch] BYREF
  char v24; // [esp+2Fh] [ebp-5h]

  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4d9d18*/
  v24 = 0; /*0x4d9d23*/
  *(_DWORD *)ArgList = 0; /*0x4d9d27*/
  TESFile_InitializeFormFromRecord(tesFile, (TESForm *)this, v15[0], v15[1]); /*0x4d9d2a*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4d9d32*/
  if ( (this->member.super.flags & 0x20) != 0 ) /*0x4d9d3f*/
  {
    PersistentCell = ExtraDataList_GetPersistentCell(&this->member.baseExtraList); /*0x4d9d4f*/
    BaseExtraList_Clear(&this->member.baseExtraList, 1); /*0x4d9d51*/
    if ( PersistentCell ) /*0x4d9d58*/
      sub_4247B0(&this->member.baseExtraList, PersistentCell); /*0x4d9d5d*/
    return this->vtbl->GetBaseForm(this) != 0; /*0x4d9d74*/
  }
  do /*0x4d9d82*/
  {
    ChunkType = TESFile_GetChunkType(tesFile); /*0x4d9d82*/
    if ( !ChunkType ) /*0x4d9d89*/
      break; /*0x4d9d89*/
    if ( ChunkType > 0x4C4F5358 ) /*0x4d9d94*/
    {
      if ( ChunkType > 0x50534558 ) /*0x4d9f67*/
      {
        if ( ChunkType > 0x544D4358 ) /*0x4d9fd1*/
        {
          if ( ChunkType == 0x544E4358 || ChunkType == 0x54574358 ) /*0x4d9fff*/
          {
LABEL_65:
            ExtraDataList_Load(&this->member.baseExtraList, tesFile, (TESForm *)this);// Shared REFR/ACHR/ACRE dispatch also forwards XUSE, XPSL, XPSN, and XTIM to ExtraDataList_Load; no placed-kind gate excludes them. /*0x4da017*/
            continue; /*0x4da01c*/
          }
          v6 = ChunkType == 0x574C4358; /*0x4da001*/
        }
        else
        {
          if ( ChunkType == 0x544D4358 ) /*0x4d9fd3*/
            goto LABEL_65; /*0x4d9fd3*/
          if ( ChunkType > 0x54434158 ) /*0x4d9fda*/
          {
            v6 = ChunkType == 0x544C4858; /*0x4d9fec*/
          }
          else
          {
            if ( ChunkType == 0x54434158 || ChunkType == 0x524C4358 ) /*0x4d9fe3*/
              goto LABEL_65; /*0x4d9fe3*/
            v6 = ChunkType == 0x53524858; /*0x4d9fe5*/
          }
        }
        goto LABEL_63; /*0x4d9fea*/
      }
      if ( ChunkType == 0x50534558 ) /*0x4d9f69*/
        goto LABEL_65; /*0x4d9f69*/
      if ( ChunkType > 0x4D495458 ) /*0x4d9f74*/
      {
        if ( ChunkType > 0x4E535058 ) /*0x4d9fb3*/
        {
          v6 = ChunkType == 0x4E574F58; /*0x4d9fc5*/
        }
        else
        {
          if ( ChunkType == 0x4E535058 || ChunkType == 0x4D4C4358 ) /*0x4d9fbc*/
            goto LABEL_65; /*0x4d9fbc*/
          v6 = ChunkType == 0x4D545258; /*0x4d9fbe*/
        }
        goto LABEL_63; /*0x4d9fc3*/
      }
      if ( ChunkType == 0x4D495458 ) /*0x4d9f76*/
        goto LABEL_65; /*0x4d9f76*/
      if ( ChunkType > 0x4D434358 ) /*0x4d9f81*/
      {
        v6 = ChunkType == 0x4D434C58; /*0x4d9fa7*/
LABEL_63:
        if ( v6 ) /*0x4da006*/
          goto LABEL_65; /*0x4da006*/
        goto LABEL_64; /*0x4da006*/
      }
      if ( ChunkType == 0x4D434358 || ChunkType == 0x4C535058 ) /*0x4d9f8e*/
        goto LABEL_65; /*0x4d9f8e*/
      if ( ChunkType != 0x4D414E4F ) /*0x4d9f99*/
        goto LABEL_64; /*0x4d9f99*/
      ExtraDataList_SetActionFlagBits(&this->member.baseExtraList, 8u);// ONAM is an empty semantic marker; payload is never read. It ORs action flag bit 0x08 into existing flags, or into default 1 when creating ExtraAction. Repeated ONAM is idempotent. Ordering matters: later XACT replaces the flag byte and can clear 0x08; later ONAM restores it. /*0x4d9fa0*/
    }
    else
    {
      if ( ChunkType == 0x4C4F5358 ) /*0x4d9d9a*/
        goto LABEL_65; /*0x4d9d9a*/
      if ( ChunkType > 0x45535558 ) /*0x4d9da5*/
      {
        if ( ChunkType <= 0x4B524D58 ) /*0x4d9f02*/
        {
          if ( ChunkType == 0x4B524D58 ) /*0x4d9f04*/
            goto LABEL_65; /*0x4d9f04*/
          if ( ChunkType > 0x49435058 ) /*0x4d9f0f*/
          {
            v6 = ChunkType == 0x4B4E5258; /*0x4d9f2c*/
          }
          else
          {
            if ( ChunkType == 0x49435058 || ChunkType == 0x47484358 ) /*0x4d9f1c*/
              goto LABEL_65; /*0x4d9f1c*/
            v6 = ChunkType == 0x47525458; /*0x4d9f22*/
          }
          goto LABEL_63; /*0x4d9f27*/
        }
        if ( ChunkType != 0x4C435358 ) /*0x4d9f3b*/
        {
          if ( ChunkType == 0x4C444558 ) /*0x4d9f42*/
            goto LABEL_65; /*0x4d9f42*/
          v6 = ChunkType == 0x4C455458; /*0x4d9f48*/
          goto LABEL_63; /*0x4d9f4d*/
        }
        TESFile_GetChunkData4(tesFile, (char *)&this->member.scale);// XSCL bounded max-4 read targets the existing object scale directly. Omitted/empty chunks preserve it; short chunks overlay a byte prefix; oversized chunks copy 3 bytes and zero the high byte; repeated chunks apply in order. /*0x4d9f58*/
      }
      else
      {
        if ( ChunkType == 0x45535558 ) /*0x4d9dab*/
          goto LABEL_65; /*0x4d9dab*/
        if ( ChunkType <= 0x44455358 ) /*0x4d9db6*/
        {
          if ( ChunkType == 0x44455358 ) /*0x4d9db8*/
            goto LABEL_65; /*0x4d9db8*/
          if ( ChunkType > 0x434F4C58 ) /*0x4d9dc3*/
          {
            v6 = ChunkType == 0x43524D58; /*0x4d9e29*/
          }
          else
          {
            if ( ChunkType == 0x434F4C58 ) /*0x4d9dc5*/
              goto LABEL_65; /*0x4d9dc5*/
            if ( ChunkType == 0x41544144 ) /*0x4d9dd0*/
            {
              if ( !v24 ) /*0x4d9de0*/
              {
                ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl->super.Unk_23)(this, 0); /*0x4d9df1*/
                TESFile_GetChunkData(tesFile, Dst, 0x18u);// DATA bounded read max 24: size 0 is a no-op; short chunks prefix-overlay the shared uninitialized/local prior buffer; oversized chunks copy 23 bytes and force byte 23 to zero. Each unguarded DATA copies all 24 scratch bytes to the reference transform. /*0x4d9dfb*/
                v7 = v17; /*0x4d9e03*/
                v8 = v18; /*0x4d9e06*/
                this->member.pos[0] = *(float *)Dst; /*0x4d9e09*/
                v9 = v19; /*0x4d9e0c*/
                this->member.pos[1] = v7; /*0x4d9e0f*/
                v10 = v20; /*0x4d9e12*/
                this->member.pos[2] = v8; /*0x4d9e15*/
                v11 = v21; /*0x4d9e18*/
                this->member.rot.x = v9; /*0x4d9e1b*/
                this->member.rot.y = v10; /*0x4d9e1e*/
                this->member.rot.z = v11; /*0x4d9e21*/
              }
              continue; /*0x4d9e24*/
            }
            v6 = ChunkType == 0x424C4758; /*0x4d9dd2*/
          }
          goto LABEL_63; /*0x4d9dd7*/
        }
        if ( ChunkType > 0x444F4C58 ) /*0x4d9e38*/
        {                                       // NAME replay path. The 4-byte scratch accumulator was zeroed once at loader entry and persists across repeated NAME chunks; bounded short reads overlay its prefix, oversized reads force the high byte to zero, and every occurrence performs lookup/store. Any lookup/cast failure latches DATA suppression.
          if ( ChunkType == 0x454D414E ) /*0x4d9e89*/
          {
            TESFile_GetChunkData4(tesFile, ArgList); /*0x4d9e95*/
            TESForm_ResolveFormID((UInt32 *)ArgList, tesFile); /*0x4d9e9f*/
            v22 = 0; /*0x4d9eb4*/
            NiTMap_GetAt(&TESForm_FormIDMap, *(int *)ArgList, &v22); /*0x4d9eb7*/
            v12 = (TESForm *)OblivionDynamicCast( /*0x4d9ecc*/
                               v22,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                               0);
            this->member.baseForm = v12; /*0x4d9ed6*/
            if ( !v12 ) /*0x4d9ed9*/
            {
              PrintError("Missing object (%08X) for reference (%08X)", *(_DWORD *)ArgList, this->member.super.refID); /*0x4d9eec*/
              v24 = 1; /*0x4d9ef4*/
            }
            continue; /*0x4d9ef8*/
          }
LABEL_64:
          PrintError("TESObjectREFR::Load abnormally terminated.\n\n"); /*0x4da008*/
          continue; /*0x4da015*/
        }
        if ( ChunkType == 0x444F4C58 || ChunkType == 0x44475258 ) /*0x4d9e45*/
          goto LABEL_65; /*0x4d9e45*/
        if ( ChunkType != 0x44494445 ) /*0x4d9e50*/
          goto LABEL_64; /*0x4d9e50*/
        _alloca_(v15[0]); /*0x4d9e5c*/
        TESFile_GetChunkData(tesFile, (char *)v15, 0x200u); /*0x4d9e6b*/
        this->vtbl->super.SetEditorID((TESForm *)this, (const char *)v15); /*0x4d9e7b*/
      }
    }
  }
  while ( TESFile_GetNextChunk(tesFile) ); /*0x4d9d82*/
  if ( this->vtbl->IsActor(this) && (this->member.super.flags & 0x800) != 0 && (g_TESSaveLoadGame->flags & 4) == 0 ) /*0x4da059*/
  {
    ProcessLevel = Actor::GetProcessLevel((Actor *)this); /*0x4da05d*/
    sub_674550((int)this, ProcessLevel); /*0x4da069*/
    v14 = *((void (__thiscall ****)(_DWORD, int))this + 0x16); /*0x4da06e*/
    if ( v14 ) /*0x4da073*/
      (**v14)(v14, 1); /*0x4da07b*/
    *((_DWORD *)this + 0x16) = 0; /*0x4da07d*/
  }
  return this->member.baseForm != 0; /*0x4da08b*/
}
