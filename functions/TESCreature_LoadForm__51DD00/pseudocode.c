char __thiscall TESCreature_LoadForm(Creature *this, Data *a2)
{
  signed int ChunkType; // eax
  _DWORD *CreatureSoundArray; // eax
  int v6; // eax
  int *v7; // eax
  int v8; // [esp+0h] [ebp-3Ch] BYREF
  int v9; // [esp+4h] [ebp-38h]
  int v10; // [esp+8h] [ebp-34h]
  char v11[4]; // [esp+Ch] [ebp-30h] BYREF
  int v12; // [esp+10h] [ebp-2Ch]
  int v13; // [esp+14h] [ebp-28h]
  int v14; // [esp+18h] [ebp-24h] BYREF
  char v15[4]; // [esp+1Ch] [ebp-20h] BYREF
  int v16; // [esp+20h] [ebp-1Ch]
  unsigned int v17; // [esp+24h] [ebp-18h] BYREF
  char Dst[4]; // [esp+28h] [ebp-14h] BYREF
  int v19; // [esp+2Ch] [ebp-10h]
  unsigned int v20; // [esp+30h] [ebp-Ch]
  void *v21; // [esp+34h] [ebp-8h] BYREF

  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x24 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v8, v9);
  TESForm_SetIsLinked((TESForm *)this, 0);
  v20 = 0xFFFFFFFF;
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( ChunkType <= 0x4D414E52 )
    {
      if ( ChunkType == 0x4D414E52 )
      {
        TESFile_GetChunkData(a2, (char *)this + 0x10A, 1u);
        goto TESCreature_LoadForm___def_51DFA5;
      }
      if ( ChunkType > 0x46445343 )
      {
        if ( ChunkType > 0x4C4C5546 )
        {
          v6 = ChunkType - 0x4D414E42;
          if ( v6 )
          {
            if ( v6 == 7 )
            {
              v21 = 0;
              TESFile_GetChunkData4(a2, (char *)&v21);
              LODWORD(this->members.super.super.super.scale) = v21;
            }
          }
          else
          {
            TESFile_GetChunkData4(a2, (char *)this + 0x114);
          }
          goto TESCreature_LoadForm___def_51DFA5;
        }
        if ( ChunkType == 0x4C4C5546 )
        {
          if ( this )
            TESFullname_Load((TESFullName *)&this->members.super.greaterPowerList.next, a2);
          else
            TESFullname_Load(0, a2);
          goto TESCreature_LoadForm___def_51DFA5;
        }
        if ( ChunkType != 0x49445343 )
        {
          if ( ChunkType == 0x49524353 )
          {
            v21 = 0;
            TESFile_GetChunkData4(a2, (char *)&v21);
            this->members.super.unk0B4[5] = (UInt32)v21;
            TESScriptableForm_Link((int)&this->members.super.unk0B4[4], (TESForm *)this);
          }
          else if ( ChunkType == 0x4C444F4D )
          {
            goto LABEL_27;
          }
          goto TESCreature_LoadForm___def_51DFA5;
        }
      }
      else if ( ChunkType != 0x46445343 )
      {
        if ( ChunkType > 0x42444F4D )
        {
          if ( ChunkType == 0x44494445 )
          {
            _alloca_();
            TESFile_GetChunkData(a2, (char *)&v8, 0x200u);
            this->__vftable->super.super.super.SetEditorID((TESForm *)this, (const char *)&v8);
          }
          else if ( ChunkType == 0x44494B50 )
          {
            v21 = 0;
            TESFile_GetChunkData4(a2, (char *)&v21);
            TESAIForm_AddPackage(&this->members.super.magicTarget.vtbl, (int)v21);
          }
        }
        else
        {
          switch ( ChunkType )
          {
            case 0x42444F4D:
LABEL_27:
              if ( this )
                TESModel_Load(&this->members.super.unk0AC, a2);
              else
                TESModel_Load(0, a2);
              break;
            case 0x304D414E:
              if ( a2->currentChunk.length )
              {
                _alloca_();
                TESFile_GetChunkData(a2, (char *)&v8, 0);
                (*(void (__thiscall **)(char *, int *))(*((_DWORD *)this + 0x47) + 0x18))((char *)this + 0x11C, &v8);
              }
              break;
            case 0x314D414E:
              if ( a2->currentChunk.length )
              {
                _alloca_();
                TESFile_GetChunkData(a2, (char *)&v8, 0);
                BSStringT_Set((BSStringT *)this + 0x27, (const char *)&v8, 0);
              }
              break;
            case 0x41544144:
              TESForm_LoadGenericComponents((TESForm *)this, a2, &this->members.unk104, 6u);
              break;
          }
        }
        goto TESCreature_LoadForm___def_51DFA5;
      }
      CreatureSoundArray = (_DWORD *)TESCreature_GetCreatureSoundArray(v8, v9, v10, *(int *)v11);
      if ( CreatureSoundArray_LoadAndLinkSoundEntry(CreatureSoundArray, a2, v20, this) )
        goto TESCreature_LoadForm___def_51DFA5;
LABEL_75:
      ChunkType = TESFile_GetChunkType(a2);
      if ( !ChunkType )
        return 1;
    }
    if ( ChunkType <= 0x4F4C5053 )
    {
      if ( ChunkType == 0x4F4C5053 )
      {
        v21 = 0;
        TESFile_GetChunkData4(a2, (char *)&v21);
        TESSpellList_AddFormToSpellList(
          (char *)&this->members.super.super.super.baseExtraList.members.m_presenceBitfield[8],
          v21);
      }
      else
      {
        switch ( ChunkType )
        {
          case 0x4D414E53:
            *(_DWORD *)Dst = 0;
            v19 = 0;
            TESFile_GetChunkData(a2, Dst, 8u);
            TESActorBaseData_SetFactionRank((char *)&this->members.super.super.super.rot.y, *(int *)Dst, v19, v8, v9);
            break;
          case 0x4D414E54:
            TESFile_GetChunkData4(a2, (char *)this + 0x10C);
            break;
          case 0x4D414E57:
            TESFile_GetChunkData4(a2, (char *)this + 0x110);
            break;
          case 0x4D414E5A:
            TESFile_GetChunkData4(a2, (char *)&v14);
            ((void (__thiscall *)(Creature *, int))this->__vftable->super.super.GetMagicTarget)(this, v14);
            break;
          default:
            goto TESCreature_LoadForm___def_51DFA5;
        }
      }
      goto TESCreature_LoadForm___def_51DFA5;
    }
    if ( ChunkType <= 0x54444F4D )
    {
      if ( ChunkType == 0x54444F4D )
        goto LABEL_27;
      if ( ChunkType > 0x53424341 )
      {
        if ( ChunkType == 0x54444941 )
        {
          *(_DWORD *)v11 = 0;
          v12 = 0;
          v13 = 0;
          TESFile_GetChunkData(a2, v11, 0xCu);
          TESAIForm_SetNonPackageData(&this->members.super.magicTarget, (int)v11);
        }
      }
      else
      {
        switch ( ChunkType )
        {
          case 0x53424341:
            TESFile_GetChunkData(a2, (char *)&this->members.super.super.super.rot.z, 0x10u);
            break;
          case 0x4F544E43:
            *(_DWORD *)v15 = 0;
            v16 = 0;
            TESFile_GetChunkData(a2, v15, 8u);
            TESContainer_SetLinkFlag(&this->members.super.super.super.baseExtraList, 0);
            TESContainer_AddUnlinkedForm(&this->members.super.super.super.baseExtraList, (int)v15);
            break;
          case 0x52435343:
            v21 = 0;
            TESFile_GetChunkData4(a2, (char *)&v21);
            TESCreature_SetInheritedSoundSource((unsigned int *)this, (unsigned int)v21);
            break;
        }
      }
      goto TESCreature_LoadForm___def_51DFA5;
    }
    if ( ChunkType > 0x5A46464B )
    {
      if ( ChunkType != 0x5A46494E )
        goto TESCreature_LoadForm___def_51DFA5;
    }
    else
    {
      if ( ChunkType == 0x5A46464B )
      {
        if ( this )
          TESAnimation_LoadAnimationChunk(
            (char **)&this->members.super.avModifiers.fatigue,
            (int)&this->members.super.avModifiers.fatigue,
            a2);
        else
          TESAnimation_LoadAnimationChunk((char **)0x94, 0, a2);
        goto TESCreature_LoadForm___def_51DFA5;
      }
      if ( ChunkType == 0x54445343 )
      {
        TESFile_GetChunkData4(a2, (char *)&v17);
        v20 = v17;
        goto TESCreature_LoadForm___def_51DFA5;
      }
      if ( ChunkType != 0x5446494E )
      {
TESCreature_LoadForm___def_51DFA5:
        if ( !TESFile_GetNextChunk(a2) )
          return 1;
        goto LABEL_75;
      }
    }
    if ( this )
      v7 = (int *)&this->members.super.unk0E8[1];
    else
      v7 = 0;
    sub_46DFE0(&this->members.super.unk0E8[1], v7, a2);
    goto TESCreature_LoadForm___def_51DFA5;
  }
  return 1;
}
