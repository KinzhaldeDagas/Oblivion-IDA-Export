// 2026-05-21 SpeedTreeOBSE known-family 4.x load pass: Oblivion stock LoadTree(buffer) remains authoritative and has no later 23000..75000 family dispatch/storage. Compatibility strips known sidecars into a dynamically grown sanitized tail, preserves stock-safe families byte-for-byte around stripped sidecars, and treats unknown terminal remainders as a stock stop boundary in both before-known and after-known ordering. It no longer rejects structurally valid 50000/60000/71000 sidecars on arbitrary local count ceilings; remaining load gaps are nonterminal unknown vendor payloads with no length boundary, grammar variants, allocation failure, deployment logs, and unimplemented feature consumers.
// [2026-10-05 plugin supplemental branch extension] Native parser still has no26000 dispatch. Plugin v115+ reads retained whole26000 raw span in serialized26002..26003 level order, rather than collapsing scalar records without level identity. Hooks implement frequency/fork/pruning793669; resolution792825; variable bark rings792E97/793492, normals793550, LOD7A411E; gnarl792CF3/793280 with azimuth7926CE. These are plugin behaviors, NOT newly discovered native26000 support. Offline corpus:1774 SPT files,930 blocks,0 decoder rejections; live execution UNVERIFIED.
// [2026-10-06] Runtime v138/v139 records show Trees paths at this buffer-load wrapper even when the Bethesda 0x56070C path hook has no entries. Directional identity must be retained after successful buffer loads, using captured wrapper path, not solely at the path callsite.
// [24000 research 2026-10-07] Current authoritative decompile has no supplemental leaf placement dispatch. The plugin parser retains 24002 float bits and 24003 integer bits outside native storage. Do not infer a native placement consumer from those token names. User requires historical semantics and rejected inventing new extension rules; sole reference corpus is C:/Users/mello/Desktop/SpeedTree.
// [24000 restricted-corpus research update 2026-10-07] Sole reference C:/Users/mello/Desktop/SpeedTree. Controlled reference experiment: 32 distance/level variants on BigLeafMaple_RT_Fall cards and Palmetto_RT meshes across its VC8/VC9 RT4.1 DLLs produced byte-identical exported leaf geometry to each baseline; all four changed-seed controls changed output. Tested values include negative distance. This is bounded reference evidence, not an Oblivion runtime test or proof of all historical implementations. CAD4.2 contains parser/writer routines but no direct serializer call/pointer refs were found. Intended24000 generation semantics remain UNKNOWN; do not mark implemented.
// [24000 historical transfer trace 2026-10-07; reference addresses, not Oblivion ABI] In the approved Desktop/SpeedTree CAD4.2 executable, editor SPT serializer4BEAF0 is called at44CD78; its result and byte count pass via44CD94 to42A670. That wrapper calls runtime LoadTree4E2700 at42A73F and Compute4E1830 at42A7B9; Compute calls engine50C090 at4E1887. The editor serializer omits24000 and its dedicated writer4C1AD0 has no found direct call/pointer reference. Candidate bud4F78E0..4F7E18 reads leaf-info dimming depth+54 and calls MakeLeaf4F8F00 at4F7DDB, with no placement+20/+24 read. This closes the inspected preview transfer hypothesis but does not supply historical24000 generation semantics. No native consumer was invented or deployed. Evidence: out/leaf_placement_24000/cad42_transfer_conclusion.json; goal remains incomplete pending an active historical reference.
bool __thiscall CSpeedTreeRT__LoadTreeFromMemory(
        OB_CSpeedTreeRT_010201A0 *this,
        const unsigned __int8 *block,
        unsigned int byteCount)
{
  OB_CTreeEngine_010201A0 *treeEngine; // ecx
  char v5; // bl
  int Dword_010201A0; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // esi
  OB_CFrondEngine_010201A0 *frondEngine; // ecx
  UInt32 DwordAtOffset38; // eax
  bool v12; // zf
  double v13; // st7
  int v15; // [esp+0h] [ebp-60h] BYREF
  OB_stString28_010201A0 result; // [esp+2Ch] [ebp-34h] BYREF
  bool v17; // [esp+4Fh] [ebp-11h]
  int *v18; // [esp+50h] [ebp-10h]
  int v19; // [esp+5Ch] [ebp-4h]
  float bufferSize; // [esp+6Ch] [ebp+Ch]
  float bufferSizea; // [esp+6Ch] [ebp+Ch]
  float bufferSizeb; // [esp+6Ch] [ebp+Ch]

  v18 = &v15; /*0x78dfb8*/
  v17 = 0; /*0x78dfc8*/
  v19 = 0; /*0x78dfcc*/
  OB_CTreeFileAccess_ctor_copy_010201A0((OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1), block, byteCount); /*0x78dfd3*/
  treeEngine = this->treeEngine; /*0x78dfd8*/
  LOBYTE(v19) = 1; /*0x78dfde*/
  if ( OB_CTreeEngine_Parse_010201A0(treeEngine, (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1)) ) /*0x78dfe2*/
  {
    if ( *((_DWORD *)&result.storage.heapData + 3) /*0x78e002*/
      && *((_DWORD *)&result.storage.heapData + 1) < result.size - *((_DWORD *)&result.storage.heapData + 3) )
    {
      v5 = 0; /*0x78e00b*/
      Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0((OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1)); /*0x78e00d*/
      while ( Dword_010201A0 > 0x3E8D ) /*0x78e017*/
      {
        if ( Dword_010201A0 <= 0x4E20 ) /*0x78e102*/
        {
          switch ( Dword_010201A0 ) /*0x78e104*/
          {
            case 0x4E20: /*0x78e104*/
              CSpeedTreeRT__ParseSupplementalTexCoordInfo( /*0x78e157*/
                this,
                (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1));
              goto LABEL_45; /*0x78e15c*/
            case 0x3E8E: /*0x78e104*/
              bufferSize = OB_CTreeFileAccess_ReadFloat_010201A0((OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData /*0x78e143*/
                                                                                               + 1));// 2026-05-26 SpeedTreeOBSE: stock top-level 16014 reads one float into CSpeedTreeRT+0x28 old transition-factor state. This is not 75000/75005 parsing; retained 75005 remains sidecar-only and diagnostic unless a later Oblivion consumer is proven.
              this->leafTransitionFactor16014 = bufferSize; /*0x78e149*/
              goto LABEL_45; /*0x78e14c*/
            case 0x4650: /*0x78e104*/
              CSpeedTreeRT__ParseShadowProjectionInfo( /*0x78e131*/
                this,
                (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1));
              goto LABEL_45; /*0x78e136*/
            case 0x4A38: /*0x78e104*/
              CSpeedTreeRT__ParseUserData(this, (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1)); /*0x78e121*/
              goto LABEL_45; /*0x78e126*/
          }
          goto LABEL_38; /*0x78e119*/
        }
        v7 = Dword_010201A0 - 0x5208; /*0x78e15e*/
        if ( v7 ) /*0x78e163*/
        {
          v8 = v7 - 1; /*0x78e165*/
          if ( v8 ) /*0x78e168*/
          {
            if ( v8 == 0x3E7 ) /*0x78e16f*/
            {
              v9 = (*((_DWORD *)&result.storage.heapData + 1))++; /*0x78e17b*/
              if ( !*((_DWORD *)&result.storage.heapData + 3) /*0x78e18e*/
                || v9 >= result.size - *((_DWORD *)&result.storage.heapData + 3) )
              {
                _invalid_parameter_noinfo(); /*0x78e190*/
              }
              unk_B429C8 = *(_BYTE *)(*((_DWORD *)&result.storage.heapData + 3) + v9) != 0; /*0x78e19f*/
              goto LABEL_45; /*0x78e1a5*/
            }
LABEL_38:
            v5 = 1;                             // SpeedTreeOBSE 2026-05-31 sidecar raw-span support pass: stock unknown-token branch remains terminal stop evidence. Plugin counts terminal opaque raw spans only when token is neither stock top-level nor mapped retained 23000..75000 family; no unknown-payload grammar is inferred. /*0x78e171*/
            goto LABEL_45; /*0x78e173*/
          }
          bufferSizea = OB_CTreeFileAccess_ReadFloat_010201A0((OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData /*0x78e1af*/
                                                                                            + 1));
          this->windEngine->speedWindRustleScalar = bufferSizea; /*0x78e1b8*/
        }
        else
        {
          bufferSizeb = OB_CTreeFileAccess_ReadFloat_010201A0((OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData /*0x78e1c5*/
                                                                                            + 1));
          this->windEngine->speedWindRockScalar = bufferSizeb; /*0x78e1ce*/
        }
LABEL_45:
        if ( *((_DWORD *)&result.storage.heapData + 3) ) /*0x78e1d6*/
        {
          if ( *((_DWORD *)&result.storage.heapData + 1) < result.size - *((_DWORD *)&result.storage.heapData + 3) ) /*0x78e1e0*/
          {
            Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0((OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData /*0x78e1e5*/
                                                                                                 + 1));
            if ( !v5 ) /*0x78e1ec*/
              continue; /*0x78e1ec*/
          }
        }
        goto LABEL_48; /*0x78e1ec*/
      }
      if ( Dword_010201A0 == 0x3E8D ) /*0x78e01d*/
      {
        OB_CTreeEngine_ParseFlareSeed_010201A0( /*0x78e0f3*/
          this->treeEngine,
          (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1));
        goto LABEL_45; /*0x78e0f8*/
      }
      if ( Dword_010201A0 > 0x2EE0 ) /*0x78e028*/
      {
        switch ( Dword_010201A0 ) /*0x78e0a8*/
        {
          case 0x32C8: /*0x78e0a8*/
            OB_CFrondEngine_Parse_010201A0( /*0x78e0e3*/
              this->frondEngine,
              (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1));
            goto LABEL_45; /*0x78e0e8*/
          case 0x3A98: /*0x78e0a8*/
            OB_CTreeEngine_ParseTextureControls_010201A0( /*0x78e0d2*/
              this->treeEngine,
              (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1));
            goto LABEL_45; /*0x78e0d7*/
          case 0x3E80: /*0x78e0a8*/
            OB_CTreeEngine_ParseFlareInfo_010201A0( /*0x78e0c2*/
              this->treeEngine,
              (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1));
            goto LABEL_45; /*0x78e0c7*/
        }
      }
      else
      {
        if ( Dword_010201A0 == 0x2EE0 ) /*0x78e02a*/
        {
          CSpeedTreeRT__ParseCollisionObjects(this, (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1)); /*0x78e099*/
          goto LABEL_45; /*0x78e09e*/
        }
        if ( Dword_010201A0 > 0x2710 ) /*0x78e031*/
        {
          if ( Dword_010201A0 == 0x2AF8 ) /*0x78e07d*/
          {
            CSpeedTreeRT__ParseWindInfo(this, (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1)); /*0x78e089*/
            goto LABEL_45; /*0x78e08e*/
          }
        }
        else
        {
          switch ( Dword_010201A0 ) /*0x78e033*/
          {
            case 0x2710: /*0x78e033*/
              CSpeedTreeRT__ParseTextureCoordInfo(this, (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1)); /*0x78e06e*/
              goto LABEL_45; /*0x78e073*/
            case 0x1F40: /*0x78e033*/
              OB_CLightingEngine_Parse_010201A0( /*0x78e05e*/
                this->lightingEngine,
                (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1));
              goto LABEL_45; /*0x78e063*/
            case 0x2328: /*0x78e033*/
              CSpeedTreeRT__ParseLodInfo(this, (OB_CTreeFileAccess_010201A0 *)(&result.storage.heapData + 1)); /*0x78e04d*/
              goto LABEL_45; /*0x78e052*/
          }
        }
      }
      goto LABEL_38; /*0x78e041*/
    }
LABEL_48:
    CSpeedTreeRT__SetBranchLightingMethod(this, this->lightingEngine->branchLightingMethod); /*0x78e1f2*/
    CSpeedTreeRT__SetLeafLightingMethod(this, this->lightingEngine->leafLightingMethod); /*0x78e208*/
    CSpeedTreeRT__SetFrondLightingMethod(this, this->lightingEngine->frondLightingMethod); /*0x78e216*/
    frondEngine = this->frondEngine; /*0x78e223*/
    this->branchWindWeightLevel = this->treeEngine->branchWindWeightLevel; /*0x78e226*/
    DwordAtOffset38 = Shared_GetDwordAtOffset38(frondEngine); /*0x78e229*/
    v12 = this->leafLodTransitionMethod == 2; /*0x78e22e*/
    this->frondActivationLevel = DwordAtOffset38; /*0x78e232*/
    if ( v12 ) /*0x78e235*/
    {
      v13 = kHeadBodyNormalMatchRadius; /*0x78e237*/
      this->leafLodTransitionMethod = 1; /*0x78e23d*/
      this->leafTransitionFactor16014 = v13; /*0x78e244*/
    }
    OB_CWindEngine_SetLocalMatrices_010201A0(this->windEngine, 0, CWindEngine__s_windMatrixContainer.matrixCount); /*0x78e254*/
    v17 = 1; /*0x78e259*/
  }
  if ( *((_DWORD *)&result.storage.heapData + 3) ) /*0x78e262*/
    FormHeapFree(*((unsigned int *)&result.storage.heapData + 3)); /*0x78e265*/
  return v17; /*0x78e270*/
}
