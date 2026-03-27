char __thiscall TESRace::LoadForm(TESRace *this, Data *a2)
{
  TESRace *v2; // ebx
  signed int ChunkType; // esi
  Data *v5; // edi
  int v6; // eax
  int v7; // ecx
  char *v8; // esi
  UInt32 v9; // eax
  TESRace *v10; // edx
  TESHair *v11; // ecx
  UInt32 **v12; // esi
  TESForm *v13; // edx
  TESForm *v14; // eax
  void *v15; // eax
  const char *v16; // eax
  TESForm *v17; // edx
  TESForm *v18; // eax
  void *v19; // eax
  const char *v20; // eax
  void *v21; // esp
  unsigned int v22; // edi
  int v23; // eax
  Unk *v24; // esi
  unsigned int v25; // edi
  unsigned int i; // ebx
  UInt32 unk3; // eax
  int v28; // edx
  double v29; // st7
  bool v30; // al
  int v31; // [esp-8h] [ebp-4Ch] BYREF
  struct _s_RTTICompleteObjectLocator *v32; // [esp-4h] [ebp-48h]
  int v33; // [esp+0h] [ebp-44h] BYREF
  int v34; // [esp+4h] [ebp-40h]
  int v35[2]; // [esp+8h] [ebp-3Ch] BYREF
  char v36[4]; // [esp+14h] [ebp-30h] BYREF
  TESHair *v37; // [esp+18h] [ebp-2Ch]
  char Dst[4]; // [esp+1Ch] [ebp-28h] BYREF
  TESRace *v39; // [esp+20h] [ebp-24h]
  TESRace *v40; // [esp+24h] [ebp-20h]
  int v41; // [esp+28h] [ebp-1Ch]
  int v42; // [esp+2Ch] [ebp-18h] BYREF
  unsigned int a4; // [esp+30h] [ebp-14h] BYREF
  unsigned int length; // [esp+34h] [ebp-10h]
  unsigned int v45; // [esp+38h] [ebp-Ch]
  char v46; // [esp+3Fh] [ebp-5h]

  v2 = this;
  v40 = this;
  v41 = 0;
  v42 = 0;
  v46 = 0;
  if ( TESFile_GetRecordType(a2) != 9 )
    return 0;
  TESFile_InitializeFormFromRecord(a2, (TESForm *)v2, v35[0], v35[1]);
  ChunkType = TESFile_GetChunkType(a2);
  if ( ChunkType )
  {
    v5 = a2;
    while ( 1 )
    {
      if ( ChunkType > 0x4D414E43 )
      {
        if ( ChunkType <= SPLO_ID )
        {
          if ( ChunkType == SPLO_ID )
          {
            a4 = 0;
            TESFile_GetChunkData4(v5, (char *)&a4);
            TESSpellList_AddFormToSpellList((char *)&v2->spells, (void *)a4);
          }
          else
          {
            switch ( ChunkType )
            {
              case 0x4D414E44:
                TESFile_GetChunkData(v5, v36, 8u);
                v11 = v37;
                v2->defaultHair[0] = *(TESHair **)v36;
                v2->defaultHair[1] = v11;
                goto LABEL_78;
              case 0x4D414E45:
                length = v5->currentChunk.length;
                if ( (length & 3) != 0 )
                  goto LABEL_78;
                v45 = length >> 2;
                if ( !(length >> 2) )
                  goto LABEL_78;
                v5 = a2;
                v12 = (UInt32 **)FormHeapAlloc((unsigned __int64)(length >> 2) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (length >> 2));
                a4 = (unsigned int)v12;
                TESFile_GetChunkData(a2, (char *)v12, length);
                if ( v45 )
                {
                  length = v45;
                  do
                  {
                    TESForm_ResolveFormID((UInt32 *)v12, a2);
                    v17 = (TESForm *)*v12;
                    *(float *)&v34 = 0.0;
                    v33 = (int)&TESEyes `RTTI Type Descriptor';
                    v32 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor';
                    v31 = 0;
                    v18 = TESDataHandler_LookupFormByID(v17);
                    v19 = OblivionDynamicCast(v18, v31, v32, (struct TypeDescriptor *)v33, v34);
                    if ( v19 )
                    {
                      sub_52B610((int *)v2, (int)v19);
                    }
                    else
                    {
                      v20 = (const char *)((int (__thiscall *)(TESRace *, UInt32))v2->vtbl->GetEditorName)(
                                            v2,
                                            v2->super.refID);
                      PrintError("Could not find eyes (%08X) for race '%s' (%08X).", *v12, v20, v34);
                    }
                    ++v12;
                    --length;
                  }
                  while ( length );
                  v12 = (UInt32 **)a4;
                }
                break;
              case 0x4D414E46:
                v41 = 1;
                goto LABEL_78;
              case 0x4D414E48:
                a4 = v5->currentChunk.length;
                if ( (a4 & 3) != 0 )
                  goto LABEL_78;
                v45 = a4 >> 2;
                if ( !(a4 >> 2) )
                  goto LABEL_78;
                v5 = a2;
                v12 = (UInt32 **)FormHeapAlloc((unsigned __int64)(a4 >> 2) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (a4 >> 2));
                length = (unsigned int)v12;
                TESFile_GetChunkData(a2, (char *)v12, a4);
                if ( v45 )
                {
                  do
                  {
                    TESForm_ResolveFormID((UInt32 *)v12, a2);
                    v13 = (TESForm *)*v12;
                    *(float *)&v34 = 0.0;
                    v33 = (int)&TESHair `RTTI Type Descriptor';
                    v32 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor';
                    v31 = 0;
                    v14 = TESDataHandler_LookupFormByID(v13);
                    v15 = OblivionDynamicCast(v14, v31, v32, (struct TypeDescriptor *)v33, v34);
                    if ( v15 )
                    {
                      sub_52B550((int *)v2, (int)v15);
                    }
                    else
                    {
                      v16 = (const char *)((int (__thiscall *)(TESRace *, UInt32))v2->vtbl->GetEditorName)(
                                            v2,
                                            v2->super.refID);
                      PrintError("Could not find hair (%08X) for race '%s' (%08X).", *v12, v16, v34);
                    }
                    ++v12;
                    --v45;
                  }
                  while ( v45 );
                  v12 = (UInt32 **)length;
                }
                break;
              case 0x4D414E4D:
                v41 = 0;
                goto LABEL_78;
              case 0x4D414E50:
                TESFile_GetChunkData4(v5, (char *)&v2->unk09C[1]);
                goto LABEL_78;
              case 0x4D414E53:
                if ( v5->currentChunk.length >= 2 )
                  TESFile_GetChunkData2(v5, (char *)&v2->unk13);
                goto LABEL_78;
              case 0x4D414E55:
                TESFile_GetChunkData4(v5, (char *)&v2->unk09C[2]);
                goto LABEL_78;
              case 0x4D414E56:
                v9 = v5->currentChunk.length;
                if ( v9 == 4 )
                {
                  v2->voiceRaces[0] = 0;
                  v2->voiceRaces[1] = 0;
                }
                else if ( v9 == 8 )
                {
                  TESFile_GetChunkData(v5, Dst, 8u);
                  v10 = v39;
                  v2->voiceRaces[0] = *(TESRace **)Dst;
                  v2->voiceRaces[1] = v10;
                }
                goto LABEL_78;
              case 0x4D414E58:
                v8 = (char *)FormHeapAlloc(8u);
                TESFile_GetChunkData(v5, v8, 8u);
                BSSimpleList_PushBack(&v2->reaction.targetList.node.data, (int)v8);
                goto LABEL_78;
              default:
                goto LABEL_82;
            }
            FormHeapFree((unsigned int)v12);
          }
          goto LABEL_78;
        }
        if ( ChunkType > 0x53544746 )
        {
          if ( ChunkType == 0x58444E49 )
          {
            TESFile_GetChunkData4(v5, (char *)&v42);
            if ( v46 )
            {
              v2->unk9[v42].vtbl->super.InitializeComponent((BaseFormComponent *)&v2->unk9[v42]);
              v2->unk10[v42].vtbl->InitializeComponent((BaseFormComponent *)&v2->unk10[v42]);
            }
            goto LABEL_78;
          }
LABEL_82:
          v30 = sub_46FF00(ChunkType);
          if ( v46 )
          {
            if ( v30 )
            {
              TESTexture_Load((int)&v2->unk10[v42], v5);
            }
            else if ( sub_46D3D0(ChunkType) )
            {
              TESModel_Load((float *)&v2->unk9[v42], v5);
            }
          }
          else if ( v30 )
          {
            TESTexture_Load((int)&v2->unk11[4 * v41 + v41 + v42], v5);
          }
          else if ( sub_46D3D0(ChunkType) )
          {
            TESModel_Load((float *)&v2->tails[v41], v5);
          }
          goto LABEL_78;
        }
        if ( ChunkType == 0x53544746 )
        {
          v6 = 1;
          goto LABEL_69;
        }
        if ( ChunkType != 0x52545441 )
        {
          if ( ChunkType != 0x53474746 )
            goto LABEL_82;
          v6 = 0;
LABEL_69:
          v7 = 0;
LABEL_70:
          v22 = a2->currentChunk.length;
          v23 = v7 + 2 * v6;
          *(float *)&v34 = 0.0;
          v24 = &v2->unk12[v23];
          v45 = v22;
          v25 = v22 >> 2;
          v33 = v25;
          v24->unk0 = v25;
          v24->unk1 = 1;
          sub_527160(&v2->unk12[v23].unk2, v33, v34);
          _alloca_();
          a4 = (unsigned int)v35;
          _memset(v35, 0, v45);
          TESFile_GetChunkData(a2, (char *)a4, v45);
          length = 0;
          if ( v25 )
          {
            for ( i = length; i < v25; ++i )
            {
              unk3 = v24->unk3;
              if ( !unk3 || !((int)(v24->unk4 - unk3) >> 2) )
                _invalid_parameter_noinfo();
              v28 = i * v24->unk1;
              v29 = *(float *)(a4 + 4 * i);
              *(float *)(v24->unk3 + 4 * v28) = v29;
            }
            v2 = v40;
          }
          v5 = a2;
          goto LABEL_78;
        }
        v21 = alloca(0x10);
        TESFile_GetChunkData(v5, (char *)&v31, 0x10u);
        sub_468CA0(&v2->maleAttr, &v31);
        sub_468CA0(&v2->femaleAttr, &v33);
      }
      else if ( ChunkType == 0x4D414E43 )
      {
        TESFile_GetChunkData(v5, (char *)v2->unk09C, 1u);
      }
      else if ( ChunkType > 0x41544144 )
      {
        if ( ChunkType == 0x43534544 )
        {
          if ( v2 )
            TESDescription_Load((int)&v2->desc, (int)v5);
          else
            TESDescription_Load(0, (int)v5);
          goto LABEL_78;
        }
        if ( ChunkType != 0x44494445 )
        {
          if ( ChunkType == 0x4C4C5546 )
          {
            if ( v2 )
              TESFullname_Load(&v2->name, v5);
            else
              TESFullname_Load(0, v5);
            goto LABEL_78;
          }
          goto LABEL_82;
        }
        _alloca_();
        TESFile_GetChunkData(v5, (char *)v35, 0x200u);
        v2->vtbl->SetEditorID((TESForm *)v2, (const char *)v35);
      }
      else
      {
        switch ( ChunkType )
        {
          case 0x41544144:
            TESForm_LoadGenericComponents((TESForm *)v2, v5, v2->bonusSkills, 0x24u);
            break;
          case 0x304D414E:
            v46 = 1;
            break;
          case 0x314D414E:
            v46 = 0;
            break;
          case 0x41474746:
            v6 = 0;
            v7 = 1;
            goto LABEL_70;
          default:
            goto LABEL_82;
        }
      }
LABEL_78:
      if ( TESFile_GetNextChunk(v5) )
      {
        ChunkType = TESFile_GetChunkType(v5);
        if ( ChunkType )
          continue;
      }
      return 1;
    }
  }
  return 1;
}
