// 0x4CD600: Common-extra inventory audit 2026-09-05: CELL forwards the same nine reference-bearing extra cases XESP/XTEL/XLOC/XPSN/XPSL/XMRC/XHRS/XTRG/XRTM to ExtraDataList_Load. Load acceptance is confirmed separately from any later owner-sensitive resolution and writer effects. CELL deletion does not bypass payload dispatch.
//
// 0x4CD923: CELL common-reference extras verified 2026-09-05: XESP, XTEL, XLOC, XPSN, XPSL, XMRC, XHRS, XTRG, XRTM reach ExtraDataList_Load 0x4259E0. This is load-stage acceptance. Loader resets internal linked bit0x8 at 0x4CD940; it does not short-circuit serialized payload for deleted0x20. Preserve XPCI/XMRK nested cursor consumption.
char __thiscall TESObjectCELL_LoadForm(TESObjectCELL *this, Data *a1)
{
  CHUNK_ID ChunkType; // eax
  UInt8 *p_flags0; // esi
  UInt8 flags0; // al
  char *CellCoordinatesIfExterior; // eax
  TESCELL_CoordOrLight v8; // eax
  int v9[2]; // [esp+8h] [ebp-14h] BYREF
  UInt32 currentRecordOffset; // [esp+14h] [ebp-8h]

  if ( (unsigned __int8)TESFile_GetRecordType(a1) != 0x30 ) /*0x4cd621*/
    return 0; /*0x4cd625*/
  currentRecordOffset = 0; /*0x4cd62c*/
  if ( TESFile_GetIsMaster(a1) ) /*0x4cd633*/
    currentRecordOffset = a1->currentRecordOffset; /*0x4cd642*/
  TESFile_InitializeFormFromRecord(a1, (TESForm *)this, v9[0], v9[1]); /*0x4cd648*/
  do /*0x4cd92f*/
  {
    ChunkType = TESFile_GetChunkType(a1); /*0x4cd64f*/
    if ( ChunkType > FULL_ID ) /*0x4cd659*/
    {
      if ( ChunkType > XESP_ID ) /*0x4cd88a*/
      {
        if ( ChunkType > XCMT_ID ) /*0x4cd8e8*/
        {
          if ( ChunkType == XCNT_ID || ChunkType == XCWT_ID || ChunkType == XCLW_ID ) /*0x4cd921*/
            goto LABEL_86; /*0x4cd921*/
        }
        else
        {
          if ( ChunkType == XCMT_ID ) /*0x4cd8ea*/
            goto LABEL_86; /*0x4cd8ea*/
          if ( ChunkType > XACT_ID ) /*0x4cd8f1*/
          {
            if ( ChunkType == XHLT_ID ) /*0x4cd90a*/
              goto LABEL_86; /*0x4cd90a*/
          }
          else if ( ChunkType == XACT_ID || ChunkType == XCLR_ID || ChunkType == XHRS_ID ) /*0x4cd901*/
          {
            goto LABEL_86; /*0x4cd901*/
          }
        }
      }
      else
      {
        if ( ChunkType == XESP_ID ) /*0x4cd88c*/
          goto LABEL_86; /*0x4cd88c*/
        if ( ChunkType > XTIM_ID ) /*0x4cd897*/
        {
          if ( ChunkType > XPSN_ID ) /*0x4cd8c6*/
          {
            if ( ChunkType == XOWN_ID ) /*0x4cd8df*/
              goto LABEL_86; /*0x4cd8df*/
          }
          else if ( ChunkType == XPSN_ID || ChunkType == XCLM_ID || ChunkType == XRTM_ID ) /*0x4cd8d6*/
          {
            goto LABEL_86; /*0x4cd8d6*/
          }
        }
        else
        {
          if ( ChunkType == XTIM_ID ) /*0x4cd899*/
            goto LABEL_86; /*0x4cd899*/
          if ( ChunkType > XCCM_ID ) /*0x4cd8a4*/
          {
            if ( ChunkType == XLCM_ID ) /*0x4cd8bd*/
              goto LABEL_86; /*0x4cd8bd*/
          }
          else if ( ChunkType == XCCM_ID || ChunkType == XSOL_ID || ChunkType == XPSL_ID ) /*0x4cd8b4*/
          {
            goto LABEL_86; /*0x4cd8b4*/
          }
        }
      }
    }
    else if ( ChunkType == FULL_ID ) /*0x4cd65f*/
    {
      if ( this ) /*0x4cd860*/
        TESFullname_Load(&this->members.fullName, a1); /*0x4cd867*/
      else
        TESFullname_Load(0, a1); /*0x4cd878*/
    }
    else if ( ChunkType > XUSE_ID ) /*0x4cd66a*/
    {
      if ( ChunkType > XMRK_ID ) /*0x4cd7df*/
      {
        if ( ChunkType == XEDL_ID || ChunkType == XTEL_ID ) /*0x4cd82f*/
          goto LABEL_86; /*0x4cd82f*/
        if ( ChunkType == XCLL_ID ) /*0x4cd83a*/
        {
          v8.coords = TESObjectCELL::GetLightDataIfInterior(this).coords; /*0x4cd842*/
          if ( v8.coords ) /*0x4cd849*/
            TESFile_GetChunkData(a1, (char *)v8.coords, 0x28u); /*0x4cd854*/
        }
      }
      else
      {
        if ( ChunkType == XMRK_ID ) /*0x4cd7e1*/
          goto LABEL_86; /*0x4cd7e1*/
        if ( ChunkType > XPCI_ID ) /*0x4cd7ec*/
        {
          if ( ChunkType == XRNK_ID ) /*0x4cd814*/
            goto LABEL_86; /*0x4cd814*/
        }
        else if ( ChunkType == XPCI_ID || ChunkType == XCHG_ID || ChunkType == (XPRD_ID|0x3000400) ) /*0x4cd804*/
        {
          goto LABEL_86; /*0x4cd804*/
        }
      }
    }
    else
    {
      if ( ChunkType == XUSE_ID ) /*0x4cd670*/
        goto LABEL_86; /*0x4cd670*/
      if ( ChunkType > XMRC_ID ) /*0x4cd67b*/
      {
        if ( ChunkType > EDID_ID ) /*0x4cd77f*/
        {
          if ( ChunkType == XLOD_ID ) /*0x4cd7cf*/
            goto LABEL_86; /*0x4cd7cf*/
        }
        else
        {
          if ( ChunkType == EDID_ID ) /*0x4cd781*/
          {
            _alloca_(v9[0]); /*0x4cd7a4*/
            TESFile_GetChunkData(a1, (char *)v9, 0x200u); /*0x4cd7b3*/
            this->vtbl->SetEditorID((TESForm *)this, (const char *)v9); /*0x4cd7c3*/
            continue; /*0x4cd7c5*/
          }
          if ( ChunkType == XSED_ID || ChunkType == XRGD_ID ) /*0x4cd793*/
LABEL_86:
            ExtraDataList_Load(&this->members.extraData, a1, (TESForm *)this); /*0x4cd923*/
        }
      }
      else
      {
        if ( ChunkType == XMRC_ID ) /*0x4cd681*/
          goto LABEL_86; /*0x4cd681*/
        if ( ChunkType > XCLC_ID ) /*0x4cd68c*/
        {
          if ( ChunkType == XLOC_ID ) /*0x4cd76f*/
            goto LABEL_86; /*0x4cd76f*/
        }
        else
        {
          switch ( ChunkType ) /*0x4cd692*/
          {
            case XCLC_ID: /*0x4cd692*/
              CellCoordinatesIfExterior = (char *)TESObjectCELL::GetCellCoordinatesIfExterior(this); /*0x4cd74e*/
              if ( CellCoordinatesIfExterior ) /*0x4cd755*/
                TESFile_GetChunkData(a1, CellCoordinatesIfExterior, 8u); /*0x4cd760*/
              break;
            case DATA_ID: /*0x4cd692*/
              p_flags0 = &this->members.flags0; /*0x4cd6b1*/
              TESFile_GetChunkData(a1, (char *)&this->members.flags0, 1u); /*0x4cd6b7*/
              flags0 = this->members.flags0; /*0x4cd6bc*/
              if ( (flags0 & 1) == 0 ) /*0x4cd6f3*/
                *p_flags0 = flags0 | 2; /*0x4cd6f7*/
              if ( (*p_flags0 & 1) != 0 && (char)*p_flags0 < 0 ) /*0x4cd701*/
                ExtraDataList_SetWaterHeight(&this->members.extraData, 0.0); /*0x4cd70c*/
              if ( !g_TESDataHandler->activeFileState.retainActiveFile )// Verified cell-load gate: when activeFileState.retainActiveFile is zero, TESObjectCELL_LoadForm clears flags0 bit 0x40; when nonzero it preserves the serialized bit. This bit is toggled by linked-door lock/unlock and tested with bit 0x20 in public-cell access decisions. Probable semantic label is TempPublic; the exact historical/runtime reason for the DataHandler gate remains Unknown. /*0x4cd716*/
                *p_flags0 &= ~0x40u; /*0x4cd71f*/
              sub_4CA710(this); /*0x4cd724*/
              if ( (*p_flags0 & 1) != 0 ) /*0x4cd72c*/
              {
                if ( currentRecordOffset ) /*0x4cd736*/
                  sub_4C9D30(this, currentRecordOffset); /*0x4cd742*/
              }
              break;
            case XGLB_ID: /*0x4cd692*/
              goto LABEL_86; /*0x4cd6a4*/
          }
        }
      }
    }
  }
  while ( TESFile_GetNextChunk(a1) ); /*0x4cd92f*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x4cd940*/
  return 1; /*0x4cd94a*/
}
