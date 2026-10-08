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
  UInt32 v22; // edi
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

  v2 = this; /*0x52d816*/
  v40 = this; /*0x52d81c*/
  v41 = 0; /*0x52d81f*/
  v42 = 0; /*0x52d822*/
  v46 = 0; /*0x52d825*/
  if ( TESFile_GetRecordType(a2) != 9 ) /*0x52d831*/
    return 0; /*0x52d835*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)v2, v35[0], v35[1]); /*0x52d83d*/
  ChunkType = TESFile_GetChunkType(a2); /*0x52d849*/
  if ( ChunkType )
  {
    v5 = a2; /*0x52d853*/
    while ( 1 )
    {
      if ( ChunkType > 0x4D414E43 )
      {
        if ( ChunkType <= SPLO_ID )
        {
          if ( ChunkType == SPLO_ID )
          {
            a4 = 0; /*0x52dc2c*/
            TESFile_GetChunkData4(v5, (char *)&a4); /*0x52dc33*/
            TESSpellList_AddFormToSpellList((char *)&v2->spells, (void *)a4); /*0x52dc3f*/
          }
          else
          {
            switch ( ChunkType )
            {
              case 0x4D414E44:
                TESFile_GetChunkData(v5, v36, 8u); /*0x52da35*/
                v11 = v37; /*0x52da3d*/
                v2->defaultHair[0] = *(TESHair **)v36; /*0x52da40*/
                v2->defaultHair[1] = v11; /*0x52da46*/
                goto LABEL_78; /*0x52da4c*/
              case 0x4D414E45:
                length = v5->currentChunk.length; /*0x52db5e*/
                if ( (length & 3) != 0 ) /*0x52db61*/
                  goto LABEL_78; /*0x52db61*/
                v45 = length >> 2; /*0x52db6a*/
                if ( !(length >> 2) ) /*0x52db67*/
                  goto LABEL_78; /*0x52db6d*/
                v5 = a2; /*0x52db89*/
                v12 = (UInt32 **)FormHeapAlloc((unsigned __int64)(length >> 2) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (length >> 2));
                a4 = (unsigned int)v12; /*0x52db98*/
                TESFile_GetChunkData(a2, (char *)v12, length); /*0x52db9b*/
                if ( v45 ) /*0x52dba4*/
                {
                  length = v45; /*0x52dba9*/
                  do /*0x52dc13*/
                  {
                    TESForm_ResolveFormID((UInt32 *)v12, a2); /*0x52dbb2*/
                    v17 = (TESForm *)*v12; /*0x52dbb7*/
                    *(float *)&v34 = 0.0; /*0x52dbc2*/
                    v33 = (int)&TESEyes `RTTI Type Descriptor'; /*0x52dbc4*/
                    v32 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor'; /*0x52dbc9*/
                    v31 = 0; /*0x52dbce*/
                    v18 = TESDataHandler_LookupFormByID(v17); /*0x52dbd1*/
                    v19 = OblivionDynamicCast(v18, v31, v32, (struct TypeDescriptor *)v33, v34); /*0x52dbd7*/
                    if ( v19 ) /*0x52dbe3*/
                    {
                      sub_52B610((int *)v2, (int)v19); /*0x52dbe6*/
                    }
                    else
                    {
                      v20 = (const char *)((int (__thiscall *)(TESRace *, UInt32))v2->vtbl->GetEditorName)( /*0x52dbf9*/
                                            v2,
                                            v2->super.refID);
                      PrintError("Could not find eyes (%08X) for race '%s' (%08X).", *v12, v20, v34); /*0x52dc04*/
                    }
                    ++v12; /*0x52dc0c*/
                    --length; /*0x52dc0f*/
                  }
                  while ( length ); /*0x52dc13*/
                  v12 = (UInt32 **)a4; /*0x52dc15*/
                }
                break; /*0x52dc15*/
              case 0x4D414E46:
                v41 = 1; /*0x52da51*/
                goto LABEL_78; /*0x52da58*/
              case 0x4D414E48:
                a4 = v5->currentChunk.length; /*0x52da91*/
                if ( (a4 & 3) != 0 ) /*0x52da94*/
                  goto LABEL_78; /*0x52da94*/
                v45 = a4 >> 2; /*0x52da9d*/
                if ( !(a4 >> 2) ) /*0x52da9a*/
                  goto LABEL_78; /*0x52daa0*/
                v5 = a2; /*0x52dabc*/
                v12 = (UInt32 **)FormHeapAlloc((unsigned __int64)(a4 >> 2) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (a4 >> 2));
                length = (unsigned int)v12; /*0x52dacb*/
                TESFile_GetChunkData(a2, (char *)v12, a4); /*0x52dace*/
                if ( v45 ) /*0x52dad7*/
                {
                  do /*0x52db43*/
                  {
                    TESForm_ResolveFormID((UInt32 *)v12, a2); /*0x52dae2*/
                    v13 = (TESForm *)*v12; /*0x52dae7*/
                    *(float *)&v34 = 0.0; /*0x52daf2*/
                    v33 = (int)&TESHair `RTTI Type Descriptor'; /*0x52daf4*/
                    v32 = (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor'; /*0x52daf9*/
                    v31 = 0; /*0x52dafe*/
                    v14 = TESDataHandler_LookupFormByID(v13); /*0x52db01*/
                    v15 = OblivionDynamicCast(v14, v31, v32, (struct TypeDescriptor *)v33, v34); /*0x52db07*/
                    if ( v15 ) /*0x52db13*/
                    {
                      sub_52B550((int *)v2, (int)v15); /*0x52db16*/
                    }
                    else
                    {
                      v16 = (const char *)((int (__thiscall *)(TESRace *, UInt32))v2->vtbl->GetEditorName)( /*0x52db29*/
                                            v2,
                                            v2->super.refID);
                      PrintError("Could not find hair (%08X) for race '%s' (%08X).", *v12, v16, v34); /*0x52db34*/
                    }
                    ++v12; /*0x52db3c*/
                    --v45; /*0x52db3f*/
                  }
                  while ( v45 ); /*0x52db43*/
                  v12 = (UInt32 **)length; /*0x52db45*/
                }
                break; /*0x52db45*/
              case 0x4D414E4D:
                v41 = 0; /*0x52da5d*/
                goto LABEL_78; /*0x52da64*/
              case 0x4D414E50:
                TESFile_GetChunkData4(v5, (char *)&v2->unk09C[1]); /*0x52da10*/
                goto LABEL_78; /*0x52da15*/
              case 0x4D414E53:
                if ( v5->currentChunk.length >= 2 ) /*0x52da70*/
                  TESFile_GetChunkData2(v5, (char *)&v2->unk13); /*0x52da7f*/
                goto LABEL_78; /*0x52da84*/
              case 0x4D414E55:
                TESFile_GetChunkData4(v5, (char *)&v2->unk09C[2]); /*0x52da23*/
                goto LABEL_78; /*0x52da28*/
              case 0x4D414E56:
                v9 = v5->currentChunk.length; /*0x52d9bd*/
                if ( v9 == 4 ) /*0x52d9c6*/
                {
                  v2->voiceRaces[0] = 0; /*0x52d9ca*/
                  v2->voiceRaces[1] = 0; /*0x52d9d0*/
                }
                else if ( v9 == 8 ) /*0x52d9de*/
                {
                  TESFile_GetChunkData(v5, Dst, 8u); /*0x52d9eb*/
                  v10 = v39; /*0x52d9f3*/
                  v2->voiceRaces[0] = *(TESRace **)Dst; /*0x52d9f6*/
                  v2->voiceRaces[1] = v10; /*0x52d9fc*/
                }
                goto LABEL_78; /*0x52d9d6*/
              case 0x4D414E58:
                v8 = (char *)FormHeapAlloc(8u); /*0x52d9a3*/
                TESFile_GetChunkData(v5, v8, 8u); /*0x52d9aa*/
                BSSimpleList_PushBack(&v2->reaction.targetList.node.data, (int)v8); /*0x52d9b3*/
                goto LABEL_78; /*0x52d9b8*/
              default:
                goto LABEL_82;
            }
            FormHeapFree((unsigned int)v12); /*0x52db49*/
          }
          goto LABEL_78; /*0x52db51*/
        }
        if ( ChunkType > 0x53544746 ) /*0x52dc4f*/
        {
          if ( ChunkType == 0x58444E49 ) /*0x52dd86*/
          {
            TESFile_GetChunkData4(v5, (char *)&v42); /*0x52de3c*/
            if ( v46 ) /*0x52de45*/
            {
              v2->unk9[v42].vtbl->super.InitializeComponent((BaseFormComponent *)&v2->unk9[v42]); /*0x52de61*/
              v2->unk10[v42].vtbl->InitializeComponent((BaseFormComponent *)&v2->unk10[v42]); /*0x52de79*/
            }
            goto LABEL_78; /*0x52de7b*/
          }
LABEL_82:
          v30 = sub_46FF00(ChunkType); /*0x52dd8c*/
          if ( v46 ) /*0x52dd99*/
          {
            if ( v30 ) /*0x52dd9d*/
            {
              TESTexture_Load((int)&v2->unk10[v42], v5); /*0x52ddae*/
            }
            else if ( sub_46D3D0(ChunkType) ) /*0x52ddb9*/
            {
              TESModel_Load((float *)&v2->unk9[v42], v5); /*0x52ddd4*/
            }
          }
          else if ( v30 ) /*0x52dde3*/
          {
            TESTexture_Load((int)&v2->unk11[4 * v41 + v41 + v42], v5); /*0x52ddfc*/
          }
          else if ( sub_46D3D0(ChunkType) ) /*0x52de0a*/
          {
            TESModel_Load((float *)&v2->tails[v41], v5); /*0x52de29*/
          }
          goto LABEL_78; /*0x52ddb6*/
        }
        if ( ChunkType == 0x53544746 ) /*0x52dc55*/
        {
          v6 = 1; /*0x52dca2*/
          goto LABEL_69; /*0x52dca2*/
        }
        if ( ChunkType != 0x52545441 ) /*0x52dc5d*/
        {
          if ( ChunkType != 0x53474746 ) /*0x52dc65*/
            goto LABEL_82; /*0x52dc65*/
          v6 = 0; /*0x52dc6b*/
LABEL_69:
          v7 = 0; /*0x52dca7*/
LABEL_70:
          v22 = a2->currentChunk.length; /*0x52dca9*/
          v23 = v7 + 2 * v6; /*0x52dcb8*/
          *(float *)&v34 = 0.0; /*0x52dcbb*/
          v24 = &v2->unk12[v23]; /*0x52dcbe*/
          v45 = v22; /*0x52dcc5*/
          v25 = v22 >> 2; /*0x52dcc8*/
          v33 = v25; /*0x52dccb*/
          v24->unk0 = v25; /*0x52dccf*/
          v24->unk1 = 1; /*0x52dcd1*/
          FaceGenFloatVector_ResizeFill(&v2->unk12[v23].unk2, v25, v33, v34); /*0x52dcd8*/
          _alloca_(v35[0]); /*0x52dce0*/
          a4 = (unsigned int)v35; /*0x52dcee*/
          _memset((int)v35, 0, v45); /*0x52dcf1*/
          TESFile_GetChunkData(a2, (char *)a4, v45); /*0x52dd04*/
          length = 0; /*0x52dd0b*/
          if ( v25 ) /*0x52dd12*/
          {
            for ( i = length; i < v25; ++i ) /*0x52dd14*/
            {
              unk3 = v24->unk3; /*0x52dd17*/
              if ( !unk3 || !((int)(v24->unk4 - unk3) >> 2) ) /*0x52dd23*/
                _invalid_parameter_noinfo(i, v25, (int)v24); /*0x52dd28*/
              v28 = i * v24->unk1; /*0x52dd33*/
              v29 = *(float *)(a4 + 4 * i); /*0x52dd36*/
              *(float *)(v24->unk3 + 4 * v28) = v29; /*0x52dd41*/
            }
            v2 = v40; /*0x52dd46*/
          }
          v5 = a2; /*0x52dd49*/
          goto LABEL_78; /*0x52dd49*/
        }
        v21 = alloca(0x10); /*0x52dc74*/
        TESFile_GetChunkData(v5, (char *)&v31, 0x10u); /*0x52dc80*/
        sub_468CA0(&v2->maleAttr, &v31); /*0x52dc89*/
        sub_468CA0(&v2->femaleAttr, &v33); /*0x52dc98*/
      }
      else if ( ChunkType == 0x4D414E43 ) /*0x52d862*/
      {
        TESFile_GetChunkData(v5, (char *)v2->unk09C, 1u); /*0x52d960*/
      }
      else if ( ChunkType > 0x41544144 ) /*0x52d86e*/
      {
        if ( ChunkType == 0x43534544 ) /*0x52d8c5*/
        {
          if ( v2 ) /*0x52d930*/
            TESDescription_Load((int)&v2->desc, (int)v5); /*0x52d937*/
          else
            TESDescription_Load(0, (int)v5); /*0x52d948*/
          goto LABEL_78; /*0x52d93f*/
        }
        if ( ChunkType != 0x44494445 ) /*0x52d8cd*/
        {
          if ( ChunkType == 0x4C4C5546 ) /*0x52d8d5*/
          {
            if ( v2 ) /*0x52d8dd*/
              TESFullname_Load(&v2->name, v5); /*0x52d8e4*/
            else
              TESFullname_Load(0, v5); /*0x52d8f5*/
            goto LABEL_78; /*0x52d8ec*/
          }
          goto LABEL_82; /*0x52d8d5*/
        }
        _alloca_(v35[0]); /*0x52d908*/
        TESFile_GetChunkData(v5, (char *)v35, 0x200u); /*0x52d917*/
        v2->vtbl->SetEditorID((TESForm *)v2, (const char *)v35); /*0x52d927*/
      }
      else
      {
        switch ( ChunkType ) /*0x52d870*/
        {
          case 0x41544144: /*0x52d870*/
            TESForm_LoadGenericComponents((TESForm *)v2, v5, v2->bonusSkills, 0x24u); /*0x52d8b5*/
            break;
          case 0x304D414E: /*0x52d870*/
            v46 = 1; /*0x52d8a3*/
            break;
          case 0x314D414E: /*0x52d870*/
            v46 = 0; /*0x52d89a*/
            break;
          case 0x41474746: /*0x52d870*/
            v6 = 0; /*0x52d88e*/
            v7 = 1; /*0x52d890*/
            goto LABEL_70; /*0x52d895*/
          default:
            goto LABEL_82; /*0x52d888*/
        }
      }
LABEL_78:
      if ( TESFile_GetNextChunk(v5) ) /*0x52dd4e*/
      {
        ChunkType = TESFile_GetChunkType(v5); /*0x52dd5e*/
        if ( ChunkType ) /*0x52dd62*/
          continue; /*0x52dd62*/
      }
      return 1; /*0x52dd62*/
    }
  }
  return 1; /*0x52dd6d*/
}
