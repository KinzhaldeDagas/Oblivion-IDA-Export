BOOL __userpurge TESObjectREFR_LoadForm@<eax>(
        TESChildCELL *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        void *tesFile)
{
  BSExtraDataVtbl *v6; // ebx
  signed int ChunkType; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  void *v15; // eax
  int ProcessLevel; // eax
  void (__thiscall ***v17)(_DWORD, int); // ecx
  int v18[3]; // [esp+0h] [ebp-34h] BYREF
  char Dst[4]; // [esp+Ch] [ebp-28h] BYREF
  int v20; // [esp+10h] [ebp-24h]
  int v21; // [esp+14h] [ebp-20h]
  int v22; // [esp+18h] [ebp-1Ch]
  int v23; // [esp+1Ch] [ebp-18h]
  int v24; // [esp+20h] [ebp-14h]
  void *v25; // [esp+24h] [ebp-10h] BYREF
  char ArgList[4]; // [esp+28h] [ebp-Ch] BYREF
  char v27; // [esp+2Fh] [ebp-5h]
  int savedregs; // [esp+34h] [ebp+0h] BYREF

  TESForm_SetIsLinked((TESForm *)this, 0);
  v27 = 0;
  *(_DWORD *)ArgList = 0;
  TESFile_InitializeFormFromRecord((Data *)tesFile, (TESForm *)this, v18[0], v18[1]);
  TESForm_SetIsLinked((TESForm *)this, 0);
  if ( (*(_DWORD *)(this + 2) & 0x20) != 0 )
  {
    v6 = sub_41FF80((ExtraDataList *)(this + 0x11));
    BaseExtraList_Clear((ExtraDataList *)(this + 0x11), 1);
    if ( v6 )
      sub_4247B0((ExtraDataList *)(this + 0x11), v6);
    return (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) != 0;
  }
  do
  {
    ChunkType = TESFile_GetChunkType((Data *)tesFile);
    if ( !ChunkType )
      break;
    if ( ChunkType > 0x4C4F5358 )
    {
      if ( ChunkType > 0x50534558 )
      {
        if ( ChunkType > 0x544D4358 )
        {
          if ( ChunkType == 0x544E4358 || ChunkType == 0x54574358 )
          {
LABEL_65:
            ExtraDataList_Load((ExtraDataList *)(this + 0x11), (signed int)tesFile, (int)this);
            continue;
          }
          v9 = ChunkType == 0x574C4358;
        }
        else
        {
          if ( ChunkType == 0x544D4358 )
            goto LABEL_65;
          if ( ChunkType > 0x54434158 )
          {
            v9 = ChunkType == 0x544C4858;
          }
          else
          {
            if ( ChunkType == 0x54434158 || ChunkType == 0x524C4358 )
              goto LABEL_65;
            v9 = ChunkType == 0x53524858;
          }
        }
        goto LABEL_63;
      }
      if ( ChunkType == 0x50534558 )
        goto LABEL_65;
      if ( ChunkType > 0x4D495458 )
      {
        if ( ChunkType > 0x4E535058 )
        {
          v9 = ChunkType == 0x4E574F58;
        }
        else
        {
          if ( ChunkType == 0x4E535058 || ChunkType == 0x4D4C4358 )
            goto LABEL_65;
          v9 = ChunkType == 0x4D545258;
        }
        goto LABEL_63;
      }
      if ( ChunkType == 0x4D495458 )
        goto LABEL_65;
      if ( ChunkType > 0x4D434358 )
      {
        v9 = ChunkType == 0x4D434C58;
LABEL_63:
        if ( v9 )
          goto LABEL_65;
        goto LABEL_64;
      }
      if ( ChunkType == 0x4D434358 || ChunkType == 0x4C535058 )
        goto LABEL_65;
      if ( ChunkType != 0x4D414E4F )
        goto LABEL_64;
      sub_423DF0((ExtraDataList *)(this + 0x11), 8);
    }
    else
    {
      if ( ChunkType == 0x4C4F5358 )
        goto LABEL_65;
      if ( ChunkType > 0x45535558 )
      {
        if ( ChunkType <= 0x4B524D58 )
        {
          if ( ChunkType == 0x4B524D58 )
            goto LABEL_65;
          if ( ChunkType > 0x49435058 )
          {
            v9 = ChunkType == 0x4B4E5258;
          }
          else
          {
            if ( ChunkType == 0x49435058 || ChunkType == 0x47484358 )
              goto LABEL_65;
            v9 = ChunkType == 0x47525458;
          }
          goto LABEL_63;
        }
        if ( ChunkType != 0x4C435358 )
        {
          if ( ChunkType == 0x4C444558 )
            goto LABEL_65;
          v9 = ChunkType == 0x4C455458;
          goto LABEL_63;
        }
        TESFile_GetChunkData4((Data *)tesFile, (char *)this + 0x38);
      }
      else
      {
        if ( ChunkType == 0x45535558 )
          goto LABEL_65;
        if ( ChunkType <= 0x44455358 )
        {
          if ( ChunkType == 0x44455358 )
            goto LABEL_65;
          if ( ChunkType > 0x434F4C58 )
          {
            v9 = ChunkType == 0x43524D58;
          }
          else
          {
            if ( ChunkType == 0x434F4C58 )
              goto LABEL_65;
            if ( ChunkType == 0x41544144 )
            {
              if ( !v27 )
              {
                (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x23))(this, 0);
                TESFile_GetChunkData((Data *)tesFile, Dst, 0x18u);
                v10 = v20;
                v11 = v21;
                *(this + 0xB) = *(TESChildCELL *)Dst;
                v12 = v22;
                *((_DWORD *)this + 0xC) = v10;
                v13 = v23;
                *((_DWORD *)this + 0xD) = v11;
                v14 = v24;
                *((_DWORD *)this + 8) = v12;
                *((_DWORD *)this + 9) = v13;
                *((_DWORD *)this + 0xA) = v14;
              }
              continue;
            }
            v9 = ChunkType == 0x424C4758;
          }
          goto LABEL_63;
        }
        if ( ChunkType > 0x444F4C58 )
        {
          if ( ChunkType == 0x454D414E )
          {
            TESFile_GetChunkData4((Data *)tesFile, ArgList);
            TESForm_ResolveFormID((UInt32 *)ArgList, (Data *)tesFile);
            v25 = 0;
            NiTMap_GetAt(&TESForm_FormIDMap, *(int *)ArgList, &v25);
            v15 = OblivionDynamicCast(
                    v25,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                    0);
            *((_DWORD *)this + 7) = v15;
            if ( !v15 )
            {
              PrintError("Missing object (%08X) for reference (%08X)", *(_DWORD *)ArgList, *((_DWORD *)this + 3));
              v27 = 1;
            }
            continue;
          }
LABEL_64:
          PrintError("TESObjectREFR::Load abnormally terminated.\n\n");
          continue;
        }
        if ( ChunkType == 0x444F4C58 || ChunkType == 0x44475258 )
          goto LABEL_65;
        if ( ChunkType != 0x44494445 )
          goto LABEL_64;
        _alloca_();
        TESFile_GetChunkData((Data *)tesFile, (char *)v18, 0x200u);
        (*((void (__thiscall **)(TESChildCELL *, int *))this->vtbl + 0x36))(this, v18);
      }
    }
  }
  while ( TESFile_GetNextChunk((Data *)tesFile) );
  if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) )
  {
    if ( (*(_DWORD *)(this + 2) & 0x800) != 0 && (SaveLoad_CurrentSavegame->flags & 4) == 0 )
    {
      ProcessLevel = Actor::GetProcessLevel((Actor *)this);
      sub_674550((char)&savedregs, a2, a3, a4, (int)this, ProcessLevel);
      v17 = *((void (__thiscall ****)(_DWORD, int))this + 0x16);
      if ( v17 )
        (**v17)(v17, 1);
      *((_DWORD *)this + 0x16) = 0;
    }
  }
  return *((_DWORD *)this + 7) != 0;
}
