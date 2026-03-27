char __thiscall TESObjectCELL_LoadForm(TESObjectCELL *this, Data *a1)
{
  CHUNK_ID ChunkType; // eax
  UInt8 *p_flags0; // esi
  UInt8 flags0; // al
  char *CellCoordinatesIfExterior; // eax
  TESCELL_CoordOrLight v8; // eax
  int v9[2]; // [esp+8h] [ebp-14h] BYREF
  UInt32 currentRecordOffset; // [esp+14h] [ebp-8h]

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x30 )
    return 0;
  currentRecordOffset = 0;
  if ( TESFile_GetIsMaster(a1) )
    currentRecordOffset = a1->currentRecordOffset;
  TESFile_InitializeFormFromRecord(a1, (TESForm *)this, v9[0], v9[1]);
  do
  {
    ChunkType = TESFile_GetChunkType(a1);
    if ( ChunkType > FULL_ID )
    {
      if ( ChunkType > XESP_ID )
      {
        if ( ChunkType > XCMT_ID )
        {
          if ( ChunkType == XCNT_ID || ChunkType == XCWT_ID || ChunkType == XCLW_ID )
            goto LABEL_86;
        }
        else
        {
          if ( ChunkType == XCMT_ID )
            goto LABEL_86;
          if ( ChunkType > XACT_ID )
          {
            if ( ChunkType == XHLT_ID )
              goto LABEL_86;
          }
          else if ( ChunkType == XACT_ID || ChunkType == XCLR_ID || ChunkType == XHRS_ID )
          {
            goto LABEL_86;
          }
        }
      }
      else
      {
        if ( ChunkType == XESP_ID )
          goto LABEL_86;
        if ( ChunkType > XTIM_ID )
        {
          if ( ChunkType > XPSN_ID )
          {
            if ( ChunkType == XOWN_ID )
              goto LABEL_86;
          }
          else if ( ChunkType == XPSN_ID || ChunkType == XCLM_ID || ChunkType == XRTM_ID )
          {
            goto LABEL_86;
          }
        }
        else
        {
          if ( ChunkType == XTIM_ID )
            goto LABEL_86;
          if ( ChunkType > XCCM_ID )
          {
            if ( ChunkType == XLCM_ID )
              goto LABEL_86;
          }
          else if ( ChunkType == XCCM_ID || ChunkType == XSOL_ID || ChunkType == XPSL_ID )
          {
            goto LABEL_86;
          }
        }
      }
    }
    else if ( ChunkType == FULL_ID )
    {
      if ( this )
        TESFullname_Load(&this->members.fullName, a1);
      else
        TESFullname_Load(0, a1);
    }
    else if ( ChunkType > XUSE_ID )
    {
      if ( ChunkType > XMRK_ID )
      {
        if ( ChunkType == XEDL_ID || ChunkType == XTEL_ID )
          goto LABEL_86;
        if ( ChunkType == XCLL_ID )
        {
          v8.coords = TESObjectCELL::GetLightDataIfInterior(this).coords;
          if ( v8.coords )
            TESFile_GetChunkData(a1, (char *)v8.coords, 0x28u);
        }
      }
      else
      {
        if ( ChunkType == XMRK_ID )
          goto LABEL_86;
        if ( ChunkType > XPCI_ID )
        {
          if ( ChunkType == XRNK_ID )
            goto LABEL_86;
        }
        else if ( ChunkType == XPCI_ID || ChunkType == XCHG_ID || ChunkType == (XPRD_ID|0x3000400) )
        {
          goto LABEL_86;
        }
      }
    }
    else
    {
      if ( ChunkType == XUSE_ID )
        goto LABEL_86;
      if ( ChunkType > XMRC_ID )
      {
        if ( ChunkType > EDID_ID )
        {
          if ( ChunkType == XLOD_ID )
            goto LABEL_86;
        }
        else
        {
          if ( ChunkType == EDID_ID )
          {
            _alloca_();
            TESFile_GetChunkData(a1, (char *)v9, 0x200u);
            this->vtbl->SetEditorID((TESForm *)this, (const char *)v9);
            continue;
          }
          if ( ChunkType == XSED_ID || ChunkType == XRGD_ID )
LABEL_86:
            ExtraDataList_Load(&this->members.extraData, (signed int)a1, (int)this);
        }
      }
      else
      {
        if ( ChunkType == XMRC_ID )
          goto LABEL_86;
        if ( ChunkType > XCLC_ID )
        {
          if ( ChunkType == XLOC_ID )
            goto LABEL_86;
        }
        else
        {
          switch ( ChunkType )
          {
            case XCLC_ID:
              CellCoordinatesIfExterior = (char *)TESObjectCELL::GetCellCoordinatesIfExterior(this);
              if ( CellCoordinatesIfExterior )
                TESFile_GetChunkData(a1, CellCoordinatesIfExterior, 8u);
              break;
            case DATA_ID:
              p_flags0 = &this->members.flags0;
              TESFile_GetChunkData(a1, (char *)&this->members.flags0, 1u);
              flags0 = this->members.flags0;
              if ( (flags0 & 1) == 0 )
                *p_flags0 = flags0 | 2;
              if ( (*p_flags0 & 1) != 0 && (char)*p_flags0 < 0 )
                sub_423FF0(&this->members.extraData, 0.0);
              if ( !*(_BYTE *)(TESDataHandler + 0xCD1) )
                *p_flags0 &= ~0x40u;
              sub_4CA710(this);
              if ( (*p_flags0 & 1) != 0 )
              {
                if ( currentRecordOffset )
                  sub_4C9D30(this, currentRecordOffset);
              }
              break;
            case XGLB_ID:
              goto LABEL_86;
          }
        }
      }
    }
  }
  while ( TESFile_GetNextChunk(a1) );
  TESForm_SetIsLinked((TESForm *)this, 0);
  return 1;
}
