void __thiscall ExtraDataList_Load(ExtraDataList *this, signed int a2, int a3)
{
  Data *v4; // edi
  signed int ChunkType; // eax
  BSExtraData *v6; // eax
  int v7; // ebp
  int vtbl; // esi
  int v9; // eax
  float v10; // eax
  BSExtraData *v11; // eax
  UInt32 length; // eax
  char v13; // cl
  int v14; // edx
  bool v15; // zf
  BSExtraData *ExtraData; // esi
  ExtraRagDollData *v17; // eax
  float v18; // eax
  BSExtraDataVtbl *v19; // eax
  TESFullName *v20; // esi
  float v21; // eax
  BSExtraDataVtbl *v22; // eax
  TeleportData *Teleport; // esi
  TeleportData *v24; // eax
  TeleportData *v25; // eax
  UInt32 v26; // ebp
  float v27; // eax
  TESForm *v28; // esi
  int v29; // eax
  float v30; // [esp+8h] [ebp-3Ch]
  TESForm *a1; // [esp+20h] [ebp-24h] BYREF
  int v32; // [esp+24h] [ebp-20h] BYREF
  float v33; // [esp+28h] [ebp-1Ch]
  int v34; // [esp+2Ch] [ebp-18h]
  float v35; // [esp+30h] [ebp-14h]
  unsigned int a4; // [esp+34h] [ebp-10h] BYREF
  int v37; // [esp+40h] [ebp-4h]

  v4 = (Data *)a2;
  ChunkType = TESFile_GetChunkType((Data *)a2);
  if ( ChunkType > 0x4D434358 )
  {
    if ( ChunkType > 0x53524858 )
    {
      if ( ChunkType > 0x544E4358 )
      {
        if ( ChunkType == 0x54574358 )
        {
          *(float *)&a2 = 0.0;
          TESFile_GetChunkData4(v4, (int)&a2);
          sub_4204E0(this, (BSExtraDataVtbl *)a2);
        }
        else if ( ChunkType == 0x574C4358 )
        {
          *(float *)&a2 = 0.0;
          TESFile_GetChunkData4(v4, (int)&a2);
          sub_423FF0(this, *(float *)&a2);
        }
      }
      else
      {
        switch ( ChunkType )
        {
          case 0x544E4358:
            *(float *)&a2 = 0.0;
            TESFile_GetChunkData4(v4, (int)&a2);
            ExtraDataList_SetExtraCount(this, a2);
            break;
          case 0x54434158:
            *(float *)&a2 = 0.0;
            TESFile_GetChunkData4(v4, (int)&a2);
            sub_423DA0(this, a2);
            break;
          case 0x544C4858:
            *(float *)&a2 = 0.0;
            TESFile_GetChunkData4(v4, (int)&a2);
            v30 = (float)a2;
            ExtraDataList_SetHealthValue(this, (BSExtraDataVtbl *)LODWORD(v30));
            break;
          case 0x544D4358:
            LOBYTE(a2) = 0;
            TESFile_GetChunkData(v4, (char *)&a2, 1u);
            sub_4242C0(this, (char)a2);
            break;
        }
      }
    }
    else if ( ChunkType == 0x53524858 )
    {
      *(float *)&a2 = 0.0;
      TESFile_GetChunkData4(v4, (int)&a2);
      sub_420860(this, (BSExtraDataVtbl *)a2);
    }
    else if ( ChunkType > 0x4E535058 )
    {
      switch ( ChunkType )
      {
        case 0x4E574F58:
          *(float *)&a2 = 0.0;
          TESFile_GetChunkData4(v4, (int)&a2);
          ExtraDataList::SetOrRemoveExtraOwnership(this, (TESForm *)a2);
          break;
        case 0x50534558:
          *(float *)&a1 = 0.0;
          *(float *)&v32 = 0.0;
          TESFile_GetChunkData(v4, (char *)&a1, 8u);
          sub_420280(this, (BSExtraDataVtbl *)a1);
          sub_420380(this, v32);
          break;
        case 0x524C4358:
          v26 = v4->currentChunk.length >> 2;
          a4 = v4->currentChunk.length;
          if ( (a4 & 3) != 0 )
          {
            PrintError("Invalid Extra Data - Region List in file \"%s\".", v4->name);
          }
          else
          {
            v27 = COERCE_FLOAT(FormHeapAlloc(0x10u));
            *(float *)&a2 = v27;
            v37 = 3;
            if ( v27 == 0.0 )
              *(float *)&a2 = 0.0;
            else
              *(float *)&a2 = COERCE_FLOAT(TESRegionList_constr((_DWORD *)LODWORD(v27), 0));
            v37 = 0xFFFFFFFF;
            *(float *)&a1 = COERCE_FLOAT(FormHeapAlloc((unsigned __int64)v26 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v26));
            TESFile_GetChunkData(v4, (char *)a1, a4);
            if ( v26 )
            {
              v28 = a1;
              do
              {
                TESForm_ResolveFormID((UInt32 *)v28, v4);
                v29 = sub_4A63E0(*(_DWORD **)(TESDataHandler + 0xBC), (int)v28->vtbl);
                if ( v29 )
                  sub_4A6350((_DWORD *)a2, v29);
                v28 = (TESForm *)((char *)v28 + 4);
                --v26;
              }
              while ( v26 );
            }
            sub_4241E0(this, (BSExtraDataVtbl *)a2);
            FormHeapFree((unsigned int)a1);
          }
          break;
      }
    }
    else
    {
      switch ( ChunkType )
      {
        case 0x4E535058:
          *(float *)&a2 = 0.0;
          TESFile_GetChunkData4(v4, (int)&a2);
          sub_41EFD0(this, (BSExtraDataVtbl *)a2);
          break;
        case 0x4D434C58:
          a4 = 0;
          TESFile_GetChunkData4(v4, (int)&a4);
          sub_420780(this, (BSExtraDataVtbl *)a4);
          break;
        case 0x4D495458:
          *(float *)&a2 = 0.0;
          TESFile_GetChunkData4(v4, (int)&a2);
          sub_41EDF0(this, (BSExtraDataVtbl *)a2);
          break;
        case 0x4D545258:
          *(float *)&a2 = 0.0;
          TESFile_GetChunkData4(v4, (int)&a2);
          sub_4205C0(this, (BSExtraDataVtbl *)a2);
          break;
      }
    }
  }
  else if ( ChunkType == 0x4D434358 )
  {
    *(float *)&a2 = 0.0;
    TESFile_GetChunkData4(v4, (int)&a2);
    TESObjectCELL_SetInteriorClimate(this, (BSExtraDataVtbl *)a2);
  }
  else if ( ChunkType > 0x47484358 )
  {
    if ( ChunkType > 0x4B524D58 )
    {
      switch ( ChunkType )
      {
        case 0x4C455458:
          Teleport = ExtraDataList_GetTeleport(this);
          if ( !Teleport )
          {
            *(float *)&v24 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
            a2 = (signed int)v24;
            v37 = 1;
            if ( *(float *)&v24 == 0.0 )
              v25 = 0;
            else
              v25 = sub_42B590(v24);
            v37 = 0xFFFFFFFF;
            Teleport = v25;
            ExtraDataList::SetTeleportData(this, v25);
          }
          sub_42B670(Teleport, (int *)v4);
          break;
        case 0x4C4F5358:
          if ( v4->currentChunk.length == 1 )
          {
            LOBYTE(a2) = 0;
            TESFile_GetChunkData(v4, (char *)&a2, 1u);
            BaseExtraList_SetSoulLevel(this, a2);
          }
          break;
        case 0x4C535058:
          *(float *)&a1 = 0.0;
          *(float *)&v32 = 0.0;
          v33 = 0.0;
          v34 = 0;
          v35 = 0.0;
          TESFile_GetChunkData(v4, (char *)&a1, 0x14u);
          sub_41F4C0(this, (BSExtraDataVtbl *)a1, 0, &v32, v35);
          break;
      }
    }
    else
    {
      switch ( ChunkType )
      {
        case 0x4B524D58:
          v20 = (TESFullName *)ExtraDataList_MapMarker(this);
          if ( !v20 )
          {
            v21 = COERCE_FLOAT(FormHeapAlloc(0x10u));
            *(float *)&a2 = v21;
            v37 = 2;
            if ( v21 == 0.0 )
              v22 = 0;
            else
              v22 = (BSExtraDataVtbl *)sub_42B3F0((_DWORD *)LODWORD(v21));
            v37 = 0xFFFFFFFF;
            v20 = (TESFullName *)v22;
            sub_423590(this, v22);
          }
          sub_42B200(v20, (int *)v4);
          break;
        case 0x47525458:
          *(float *)&a2 = 0.0;
          TESFile_GetChunkData4(v4, (int)&a2);
          sub_420D40(this, (BSExtraDataVtbl *)a2);
          break;
        case 0x49435058:
          TESFile_GetNextChunk(v4);
          break;
        case 0x4B4E5258:
          *(float *)&a2 = 0.0;
          TESFile_GetChunkData4(v4, (int)&a2);
          sub_4237E0(this, (BSExtraDataVtbl *)a2);
          break;
      }
    }
  }
  else if ( ChunkType == 0x47484358 )
  {
    *(float *)&a2 = 0.0;
    TESFile_GetChunkData4(v4, (int)&a2);
    sub_41EE90(this, (BSExtraDataVtbl *)a2);
  }
  else if ( ChunkType > 0x44455358 )
  {
    switch ( ChunkType )
    {
      case 0x44475258:
        ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RagDollData);
        if ( !ExtraData )
        {
          *(float *)&v17 = COERCE_FLOAT(FormHeapAlloc(0x10u));
          a2 = (signed int)v17;
          v37 = 4;
          if ( *(float *)&v17 == 0.0 )
            ExtraData = 0;
          else
            ExtraData = (BSExtraData *)ExtraRagDollData::ExtraRagDollData(v17);
          v18 = COERCE_FLOAT(FormHeapAlloc(8u));
          *(float *)&a2 = v18;
          v37 = 5;
          if ( v18 == 0.0 )
            v19 = 0;
          else
            v19 = (BSExtraDataVtbl *)sub_497210((_DWORD *)LODWORD(v18));
          v37 = 0xFFFFFFFF;
          ExtraData[1].vtbl = v19;
          BaseExtraList_AddExtra(this, ExtraData);
        }
        if ( !sub_497470(&ExtraData[1].vtbl->Destructor, (int *)v4) )
        {
          PrintError("Failed to load RagDoll Data.");
          BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
        }
        break;
      case 0x444F4C58:
        *(float *)&a1 = 0.0;
        *(float *)&v32 = 0.0;
        v33 = 0.97000003;
        TESFile_GetChunkData(v4, (char *)&a1, 0xCu);
        sub_420100(this, (BSExtraDataVtbl **)&a1);
        break;
      case 0x45535558:
        *(float *)&a2 = 0.0;
        TESFile_GetChunkData4(v4, (int)&a2);
        ExtraDataList_SetUses(this, a2);
        break;
    }
  }
  else
  {
    switch ( ChunkType )
    {
      case 0x44455358:
        v15 = v4->currentChunk.length == 4;
        LOBYTE(a2) = 0;
        if ( v15 )
        {
          *(float *)&a1 = 0.0;
          TESFile_GetChunkData4(v4, (int)&a1);
          LOBYTE(a2) = (_BYTE)a1;
          sub_423BD0(this, (char)a1);
        }
        else
        {
          TESFile_GetChunkData(v4, (char *)&a2, 1u);
          sub_423BD0(this, a2);
        }
        break;
      case 0x424C4758:
        *(float *)&a2 = 0.0;
        TESFile_GetChunkData4(v4, (int)&a2);
        sub_423720(this, (BSExtraDataVtbl *)a2);
        break;
      case 0x434F4C58:
        v6 = BaseExtraList_GetExtraData(this, kExtraData_Lock);
        v7 = (int)v6;
        vtbl = 0;
        if ( v6 )
        {
          vtbl = (int)v6[1].vtbl;
        }
        else
        {
          v9 = FormHeapAlloc(0xCu);
          if ( v9 )
          {
            *(_DWORD *)(v9 + 4) = 0;
            *(_BYTE *)v9 = 0;
            *(_BYTE *)(v9 + 8) = 0;
            vtbl = v9;
          }
          v10 = COERCE_FLOAT(FormHeapAlloc(0x10u));
          *(float *)&a2 = v10;
          v37 = 0;
          if ( v10 == 0.0 )
            v11 = 0;
          else
            v11 = (BSExtraData *)sub_429A80((_BYTE *)LODWORD(v10), vtbl);
          v37 = 0xFFFFFFFF;
          v7 = (int)v11;
          BaseExtraList_AddExtra(this, v11);
        }
        length = v4->currentChunk.length;
        if ( length == 0xC )
        {
          TESFile_GetChunkData(v4, (char *)vtbl, 0xCu);
        }
        else
        {
          if ( length != 0x10 )
          {
            PrintError("Unrecognized format for lock data in file '%s'.", v4->name);
            BaseExtraList_RemoveExtraByPtr(this, v7, 1);
            return;
          }
          TESFile_GetChunkData(v4, (char *)&a1, 0x10u);
          v13 = (char)a1;
          v14 = v32;
          *(_BYTE *)(vtbl + 8) = v34;
          *(_BYTE *)vtbl = v13;
          *(_DWORD *)(vtbl + 4) = v14;
        }
        if ( vtbl )
          *(_BYTE *)(vtbl + 8) |= 1u;
        break;
      case 0x43524D58:
        *(float *)&a2 = 0.0;
        TESFile_GetChunkData4(v4, (int)&a2);
        sub_4206A0(this, (BSExtraDataVtbl *)a2);
        break;
    }
  }
}
