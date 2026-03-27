char __thiscall sub_527E40(int this, Data *a2)
{
  Data *v2; // ebx
  signed int ChunkType; // eax
  const char *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  const char *v14; // eax
  TESForm *v15; // eax
  void *v16; // eax
  const char *v17; // eax
  TESForm *v18; // eax
  void *v19; // eax
  const char *v20; // eax
  unsigned int *v21; // edi
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int v24; // ecx
  double v25; // st7
  bool v26; // cf
  int v27; // [esp+0h] [ebp-74h]
  int v28; // [esp+0h] [ebp-74h]
  unsigned int v29; // [esp+0h] [ebp-74h]
  const char *v30; // [esp+4h] [ebp-70h]
  const char *v31; // [esp+4h] [ebp-70h]
  int v32; // [esp+4h] [ebp-70h]
  int v33; // [esp+4h] [ebp-70h]
  int v34; // [esp+8h] [ebp-6Ch] BYREF
  int v35; // [esp+Ch] [ebp-68h]
  char v36[4]; // [esp+18h] [ebp-5Ch] BYREF
  int v37; // [esp+1Ch] [ebp-58h]
  int v38; // [esp+20h] [ebp-54h]
  Data *v39; // [esp+24h] [ebp-50h]
  int v40; // [esp+28h] [ebp-4Ch] BYREF
  char v41[4]; // [esp+2Ch] [ebp-48h] BYREF
  int v42; // [esp+30h] [ebp-44h]
  char Dst[4]; // [esp+34h] [ebp-40h] BYREF
  int v44; // [esp+38h] [ebp-3Ch]
  char *v45; // [esp+3Ch] [ebp-38h]
  unsigned int v46; // [esp+40h] [ebp-34h]
  TESForm *a1; // [esp+44h] [ebp-30h] BYREF
  TESForm *a1_4; // [esp+48h] [ebp-2Ch] BYREF
  float a1_8; // [esp+4Ch] [ebp-28h] BYREF
  char a1_15; // [esp+53h] [ebp-21h]
  unsigned int a1_16; // [esp+54h] [ebp-20h] BYREF
  _WORD a1_20[11]; // [esp+58h] [ebp-1Ch] BYREF
  char v53; // [esp+6Eh] [ebp-6h]

  v2 = a2;
  v39 = a2;
  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x23 )
    return 0;
  *(_DWORD *)(this + 0x1EC) = a2->currentRecordOffset;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v34, v35);
  TESForm_SetIsLinked((TESForm *)this, 0);
  a1_15 = 0;
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    while ( ChunkType <= 0x4D414E43 )
    {
      if ( ChunkType == 0x4D414E43 )
      {
        a1_16 = 0;
        TESFile_GetChunkData4(v2, (char *)&a1_16);
        *(_DWORD *)(this + 0x104) = a1_16;
        goto LABEL_85;
      }
      if ( ChunkType > 0x41544144 )
      {
        if ( ChunkType > 0x49524353 )
        {
          if ( ChunkType != 0x4C444F4D )
          {
            if ( ChunkType == 0x4C4C5546 )
              TESFullname_Load((TESFullName *)(this + 0xA0), v2);
            goto LABEL_85;
          }
        }
        else
        {
          if ( ChunkType == 0x49524353 )
          {
            a1_16 = 0;
            TESFile_GetChunkData4(v2, (char *)&a1_16);
            *(_DWORD *)(this + 0xC8) = a1_16;
            TESScriptableForm_Link(this + 0xC4, (TESForm *)this);
            goto LABEL_85;
          }
          if ( ChunkType != 0x42444F4D )
          {
            if ( ChunkType == 0x44494445 )
            {
              _alloca_();
              TESFile_GetChunkData(v2, (char *)&v34, 0x200u);
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, &v34);
            }
            else if ( ChunkType == 0x44494B50 )
            {
              a1_16 = 0;
              TESFile_GetChunkData4(v2, (char *)&a1_16);
              TESAIForm_AddPackage((_DWORD *)(this + 0x68), a1_16);
            }
            goto LABEL_85;
          }
        }
LABEL_82:
        TESModel_Load((float *)(this + 0xAC), v2);
        goto LABEL_85;
      }
      if ( ChunkType == 0x41544144 )
      {
        v9 = v2->currentChunk.length - sub_46BFD0((TESForm *)this);
        if ( v9 == 0x17 )
        {
          memset(a1_20, 0, sizeof(a1_20));
          v53 = 0;
          TESForm_LoadGenericComponents((TESForm *)this, v2, a1_20, 0x17u);
          v10 = *(_DWORD *)((char *)&a1_20[2] + 1);
          v11 = *(_DWORD *)((char *)&a1_20[4] + 1);
          *(_DWORD *)(this + 0xEC) = *(_DWORD *)((char *)a1_20 + 1);
          v12 = *(_DWORD *)((char *)&a1_20[6] + 1);
          *(_DWORD *)(this + 0xF0) = v10;
          v13 = *(_DWORD *)((char *)&a1_20[8] + 1);
          *(_DWORD *)(this + 0xF4) = v11;
          LOBYTE(v11) = HIBYTE(a1_20[0xA]);
          *(_DWORD *)(this + 0xF8) = v12;
          *(_DWORD *)(this + 0xFC) = v13;
          *(_BYTE *)(this + 0x100) = v11;
        }
        else if ( v9 == 0x15 )
        {
          TESForm_LoadGenericComponents((TESForm *)this, v2, (void *)(this + 0xEC), 0x15u);
        }
        else
        {
          v14 = (const char *)(*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)this + 0xD4))(
                                this,
                                *(_DWORD *)(this + 0xC),
                                v2->name);
          PrintError("Unrecognized data format for NPC '%s' (%08X) in file '%s'.", v14, v28, v31);
        }
        goto LABEL_85;
      }
      if ( ChunkType <= 0x334D414E )
      {
        if ( (ChunkType == 0x334D414E || ChunkType == 0x304D414E || ChunkType == 0x314D414E || ChunkType == 0x324D414E)
          && !a1_15 )
        {
          v6 = (const char *)(*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)this + 0xD4))(
                               this,
                               *(_DWORD *)(this + 0xC),
                               v2->name);
          PrintError("Found face texture for NPC '%s' (%08X) in file '%s'", v6, v27, v30);
          a1_15 = 1;
        }
        goto LABEL_85;
      }
      if ( ChunkType == 0x394D414E )
        goto LABEL_64;
      if ( ChunkType == 0x41474746 )
      {
        v7 = 0;
        v8 = 1;
        goto LABEL_75;
      }
LABEL_85:
      if ( TESFile_GetNextChunk(v2) )
      {
        ChunkType = TESFile_GetChunkType(v2);
        if ( ChunkType )
          continue;
      }
      goto LABEL_87;
    }
    if ( ChunkType <= 0x4D414E5A )
    {
      if ( ChunkType == 0x4D414E5A )
      {
        TESFile_GetChunkData4(v2, (char *)&v40);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 0x124))(this, v40);
      }
      else
      {
        switch ( ChunkType )
        {
          case 0x4D414E45:
            TESFile_GetChunkData4(v2, (char *)&a1);
            TESForm_ResolveFormID((UInt32 *)&a1, v2);
            v18 = TESDataHandler_LookupFormByID(a1);
            v19 = OblivionDynamicCast(
                    v18,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEyes `RTTI Type Descriptor',
                    0);
            if ( v19 )
            {
              *(_DWORD *)(this + 0x1D0) = v19;
            }
            else
            {
              v20 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 0xD4))(
                                    this,
                                    *(_DWORD *)(this + 0xC));
              PrintError("Could not find eyes (%08X) on NPC '%s' (%08X).", a1, v20, v33);
            }
            break;
          case 0x4D414E46:
            if ( v2->currentChunk.length >= 2 )
              TESFile_GetChunkData2(v2, (char *)(this + 0x1E0));
            break;
          case 0x4D414E48:
            TESFile_GetChunkData4(v2, (char *)&a1_4);
            TESForm_ResolveFormID((UInt32 *)&a1_4, v2);
            v15 = TESDataHandler_LookupFormByID(a1_4);
            v16 = OblivionDynamicCast(
                    v15,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESHair `RTTI Type Descriptor',
                    0);
            if ( v16 )
            {
              *(_DWORD *)(this + 0x1C8) = v16;
            }
            else
            {
              v17 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 0xD4))(
                                    this,
                                    *(_DWORD *)(this + 0xC));
              PrintError("Could not find hair (%08X) on NPC '%s' (%08X).", a1_4, v17, v32);
            }
            break;
          case 0x4D414E49:
            a1_16 = 0;
            TESFile_GetChunkData4(v2, (char *)&a1_16);
            *(_DWORD *)(this + 0x38) = a1_16;
            break;
          case 0x4D414E4C:
            TESFile_GetChunkData4(v2, (char *)&a1_8);
            if ( a1_8 >= 0.0 )
            {
              if ( a1_8 > 1.0 )
                a1_8 = 1.0;
              *(float *)(this + 0x1CC) = a1_8;
            }
            else
            {
              a1_8 = 0.0;
              *(float *)(this + 0x1CC) = 0.0;
            }
            break;
          case 0x4D414E52:
            a1_16 = 0;
            TESFile_GetChunkData4(v2, (char *)&a1_16);
            *(_DWORD *)(this + 0xE8) = a1_16;
            break;
          case 0x4D414E53:
            *(_DWORD *)Dst = 0;
            v44 = 0;
            TESFile_GetChunkData(v2, Dst, 8u);
            TESActorBaseData_SetFactionRank((char *)(this + 0x24), *(int *)Dst, v44, v34, v35);
            break;
          default:
            goto LABEL_85;
        }
      }
      goto LABEL_85;
    }
    if ( ChunkType <= 0x53474746 )
    {
      if ( ChunkType == 0x53474746 )
      {
        v7 = 0;
        goto LABEL_74;
      }
      if ( ChunkType > 0x524C4348 )
      {
        if ( ChunkType == 0x53424341 )
          TESFile_GetChunkData(v2, (char *)(this + 0x28), 0x10u);
        goto LABEL_85;
      }
      if ( ChunkType != 0x524C4348 )
      {
        if ( ChunkType == 0x4F4C5053 )
        {
          a1_16 = 0;
          TESFile_GetChunkData4(v2, (char *)&a1_16);
          TESSpellList_AddFormToSpellList((char *)(this + 0x54), (void *)a1_16);
        }
        else if ( ChunkType == 0x4F544E43 )
        {
          *(_DWORD *)v41 = 0;
          v42 = 0;
          TESFile_GetChunkData(v2, v41, 8u);
          TESContainer_SetLinkFlag((_BYTE *)(this + 0x44), 0);
          TESContainer_AddUnlinkedForm((_BYTE *)(this + 0x44), (int)v41);
        }
        goto LABEL_85;
      }
LABEL_64:
      TESFile_GetChunkData4(v2, (char *)(this + 0x1E8));
      goto LABEL_85;
    }
    if ( ChunkType > 0x54444F4D )
    {
      if ( ChunkType == 0x5A46464B )
        TESAnimation_LoadAnimationChunk((char **)(this + 0x94), this + 0x94, v2);
      goto LABEL_85;
    }
    if ( ChunkType != 0x54444F4D )
    {
      if ( ChunkType != 0x53544746 )
      {
        if ( ChunkType == 0x54444941 )
        {
          *(_DWORD *)v36 = 0;
          v37 = 0;
          v38 = 0;
          TESFile_GetChunkData(v2, v36, 0xCu);
          TESAIForm_SetNonPackageData((_BYTE *)(this + 0x68), (int)v36);
        }
        goto LABEL_85;
      }
      v7 = 1;
LABEL_74:
      v8 = 0;
LABEL_75:
      v21 = (unsigned int *)(this + 0x18 * (v8 + 2 * v7 + 0xB));
      a1_16 = v2->currentChunk.length;
      v29 = a1_16 >> 2;
      v46 = a1_16 >> 2;
      *v21 = a1_16 >> 2;
      v21[1] = 1;
      sub_527160(v21 + 2, v29, COERCE_INT(0.0));
      _alloca_();
      v45 = (char *)&v34;
      _memset(&v34, 0, a1_16);
      TESFile_GetChunkData(v2, v45, a1_16);
      v22 = 0;
      a1_16 = 0;
      if ( v46 )
      {
        do
        {
          v23 = v21[3];
          if ( !v23 || !((int)(v21[4] - v23) >> 2) )
          {
            _invalid_parameter_noinfo();
            v22 = a1_16;
          }
          v24 = v22 * v21[1];
          v25 = *(float *)&v45[4 * v22++];
          v26 = v22 < v46;
          *(float *)(v21[3] + 4 * v24) = v25;
          a1_16 = v22;
        }
        while ( v26 );
        v2 = v39;
      }
      sub_5528F0((int *)(this + 0x108), this + 0x168);
      goto LABEL_85;
    }
    goto LABEL_82;
  }
LABEL_87:
  if ( *(_DWORD *)(this + 0xC) == 7 )
  {
    if ( TESDataHandler_g_PlayerRef )
    {
      if ( !TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef) )
        TESObjectREFR_SetBaseForm((TESObjectREFR *)TESDataHandler_g_PlayerRef, this);
    }
  }
  return 1;
}
