//
//
// [2026-10-03 final-capture boundary] Sole direct native CSpeedTreeRT::Compute call560888 (target78CCA0) returns before model postbuild5608C3 and before DeleteTransientData/DeleteFrondGeometry. Plugin final-export capture is placed at this return boundary. Native initializer already sets branch/frond/leaf wind method0 (GPU) and lighting method0 (dynamic) before ApplyBaseObject and Compute; no speculative method replacement was added.
// [RT4.1 parity v147 2026-10-08] Verified560814 pushes0 then560818 calls SetLeafLightingMethod. This is the host requesting dynamic lighting, not a malformed SPT. v147 capture wrapper remembers parsed static method before preserving original request. It does not activate static rendering. Full static entry/selection and RGB transport remain required.
bool __thiscall BSTreeModel_InitFromBase(
        BSTreeModel_OblivionLayout_058 *this,
        TESObjectTREE_OblivionLayout_080_NiTArrayVerified *tree,
        unsigned int seed)
{
  unsigned __int8 *v4; // ebx
  __int16 v5; // cx
  int v6; // edx
  int (__thiscall *v7)(unsigned __int8 *); // eax
  const char *v8; // edx
  unsigned int v9; // eax
  char *v10; // edi
  OB_CSpeedTreeRT_010201A0 *v12; // eax
  OB_CSpeedTreeRT_010201A0 *v13; // esi
  const char *v14; // eax
  TESObjectTREE_OblivionLayout_080_NiTArrayVerified *v15; // ebx
  void (__thiscall *v16)(BSTreeModel_OblivionLayout_058 *, TESObjectTREE_OblivionLayout_080_NiTArrayVerified *); // eax
  float frequencyTimeOffset; // [esp+10h] [ebp-158h]
  float frequencyTimeOffseta; // [esp+10h] [ebp-158h]
  TESObjectTREE_OblivionLayout_080_NiTArrayVerified *frequencyTimeOffsetb; // [esp+10h] [ebp-158h]
  float v21; // [esp+28h] [ebp-140h]
  float v22; // [esp+28h] [ebp-140h]
  float v23; // [esp+28h] [ebp-140h]
  float v24; // [esp+28h] [ebp-140h]
  OB_CSpeedTreeRT_010201A0 *size; // [esp+2Ch] [ebp-13Ch] BYREF
  TESObjectTREE_OblivionLayout_080_NiTArrayVerified *v26; // [esp+30h] [ebp-138h]
  float variance; // [esp+34h] [ebp-134h] BYREF
  OB_CSpeedTreeRT_STextures texturesOut; // [esp+38h] [ebp-130h] BYREF
  char path[4]; // [esp+54h] [ebp-114h] BYREF
  __int16 v30; // [esp+58h] [ebp-110h]
  int v31; // [esp+164h] [ebp-4h]

  v26 = tree; /*0x560646*/
  if ( !tree ) /*0x56064a*/
    return 1; /*0x56064a*/
  v4 = &tree->prefix_000_047[0x24]; /*0x560656*/
  if ( !(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)&tree->prefix_000_047[0x24] + 0x14))(&tree->prefix_000_047[0x24]) /*0x560677*/
    || !*(_BYTE *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v4 + 0x14))(v4)
    || this->modelState_0_uninit_1_base_2_instance )
  {
    return 1; /*0x56067b*/
  }
  v5 = word_A366C8; /*0x560686*/
  v6 = *(_DWORD *)v4; /*0x56068d*/
  *(_DWORD *)path = dword_A366C4; /*0x56068f*/
  v7 = *(int (__thiscall **)(unsigned __int8 *))(v6 + 0x14); /*0x560693*/
  v30 = v5; /*0x560696*/
  v8 = (const char *)v7(v4); /*0x56069f*/
  v9 = strlen(v8) + 1; /*0x5606ae*/
  v10 = (char *)&texturesOut.projectedShadowTextureFilename + 3; /*0x5606b0*/
  while ( *++v10 ) /*0x5606bb*/
    ; /*0x5606b3*/
  qmemcpy(v10, v8, v9); /*0x5606c4*/
  v12 = (OB_CSpeedTreeRT_010201A0 *)FormHeapAlloc(0xA0u); /*0x5606d2*/
  size = v12; /*0x5606da*/
  v31 = 0; /*0x5606e0*/
  if ( v12 ) /*0x5606eb*/
    v13 = CSpeedTreeRT__ctor(v12); /*0x5606f4*/
  else
    v13 = 0; /*0x5606f8*/
  v31 = 0xFFFFFFFF; /*0x560701*/
  if ( CSpeedTreeRT__LoadTreeFromFile(v13, path) ) /*0x56070c*/
  {
    CSpeedTreeRT__STextures_ctor(&texturesOut); /*0x56071d*/
    v31 = 1; /*0x56072e*/
    CSpeedTreeRT__GetTextures(v13, &texturesOut); /*0x560735*/
    if ( texturesOut.leafTextureCount > 3 )     // Stock compatibility rule: use two rocking groups for <=3 compact leaf maps, otherwise one. /*0x560741*/
    {
      CSpeedTreeRT__SetNumLeafRockingGroups(v13, 1u); /*0x56074d*/
      if ( texturesOut.leafTextureCount > 6 )   // Stock engine explicitly warns when compact leaf-map count exceeds six: leaves may not display properly. /*0x560757*/
      {
        v14 = (const char *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)v4 + 0x14))(v4); /*0x560760*/
        PrintError("Tree %s has too many leaf maps (greater than six).  Leaves may not display properly.", v14); /*0x560768*/
      }
    }
    else
    {
      CSpeedTreeRT__SetNumLeafRockingGroups(v13, 2u); /*0x560745*/
    }
    CSpeedTreeRT__SetLeafRockingState(v13, 1); /*0x560773*/
    CSpeedTreeRT__GetTreeSize(v13, (float *)&size, &variance); /*0x560784*/
    v21 = fTreeSizeConversion.value * variance; // Verified fTreeSizeConversion.value scales the second CSpeedTreeRT tree-size dimension. /*0x56079a*/
    frequencyTimeOffset = v21; /*0x5607a2*/
    v22 = fTreeSizeConversion.value * *(float *)&size;// Verified fTreeSizeConversion.value scales the first CSpeedTreeRT tree-size dimension. /*0x5607aa*/
    CSpeedTreeRT__SetTreeSize(v13, v22, frequencyTimeOffset); /*0x5607b5*/
    CSpeedTreeRT__SetWindStrength(v13, 0.0, kTerrainLODQuadRayDirectionZ, kTerrainLODQuadRayDirectionZ); /*0x5607d2*/
    CSpeedTreeRT__SetLocalMatrices(v13, 0, 4u); /*0x5607df*/
    v13->leafLodTransitionMethod = 1; /*0x5607e8*/
    CSpeedTreeRT__SetBranchWindMethod(v13, 0); /*0x5607eb*/
    CSpeedTreeRT__SetFrondWindMethod(v13, 0); /*0x5607f4*/
    CSpeedTreeRT__SetLeafWindMethod(v13, 0); /*0x5607fd*/
    CSpeedTreeRT__SetBranchLightingMethod(v13, 0); /*0x560806*/
    CSpeedTreeRT__SetFrondLightingMethod(v13, 0); /*0x56080f*/
    CSpeedTreeRT__SetLeafLightingMethod(v13, 0);// OBLIVION AUTHORITY 2026-08-27: Normal BSTreeModel load unconditionally calls SetLeafLightingMethod(0) before ApplyBaseObject and Compute. Therefore parsed SPT method 1 is overridden to dynamic on this stock path; staticLightingStyle remains data but static post-generation leaf-color processing is not entered unless another caller later restores method 1. Corpus corroboration: 15/149 installed SPTs parse method 1, but all reach this stock override ordering when loaded through BSTreeModel. /*0x560818*/
    v23 = flt_B0760C * fTreeFarDistanceBase.value;// Verified fTreeFarDistanceBase.value sets the far tree LOD limit after multiplication by the game tree multiplier. /*0x560830*/
    frequencyTimeOffseta = v23; /*0x560838*/
    v24 = flt_B0760C * fTreeNearDistanceBase.value;// Verified fTreeNearDistanceBase.value sets the near tree LOD limit after multiplication by the game tree multiplier. /*0x560842*/
    CSpeedTreeRT__SetLodLimits(v13, v24, frequencyTimeOffseta); /*0x56084d*/
    v31 = 0xFFFFFFFF; /*0x560856*/
    CSpeedTreeRT__STextures_dtor(&texturesOut); /*0x560861*/
    v15 = v26; /*0x560869*/
    v16 = *((void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))this->vftable /*0x56086d*/
          + 3);                                 // Stock virtual dispatch loads BSTreeModel vtable slot +0x0C. Stock A654E0 contains 0x560AC0.
    frequencyTimeOffsetb = v26;                 // Exact slot +0x0C ABI: push one treeObject argument, place BSTreeModel this in ECX, then call. The void result is ignored. /*0x560870*/
    this->modelState_0_uninit_1_base_2_instance = 1; /*0x560873*/
    this->speedTree = v13; /*0x560876*/
    v16(this, frequencyTimeOffsetb);            // After LoadTree succeeds, this stock control-flow path performs exactly one virtual ApplyBaseObject dispatch before Compute; there is no bypass from the prepared state to 0x560888. If a hook wrapper catches a stock exception and returns, caller control continues to Compute. /*0x560879*/
    if ( CSpeedTreeRT__Compute(v13, 0, seed, 1) )// Compute executes immediately after the material virtual call returns. A successful Compute is required before vtable+0x14 render-resource/postbuild dispatch at 0x5608C3. /*0x560888*/
    {
      CSpeedTreeRT__FreeProjectedShadowData(v13); /*0x560897*/
      this->seed = CSpeedTreeRT__GetSeed(v13);  // Verified BSTreeModel.seed at +0x48 is written from CSpeedTreeRT_GetSeed after successful Compute. Meaningful layout divergence: Fallout::BSTreeModel::InitFromBase stores the corresponding seed at model+0x40. /*0x5608a5*/
      this->trunkLength = CSpeedTreeRT__GetTrunkLength(v13);// Verified BSTreeModel.trunkLength at +0x50 is written from CSpeedTreeRT_GetTrunkLength after successful Compute. Fallout's named BSTreeModel homolog stores trunkLength at +0x48, so the Oblivion layout is shifted by 8 bytes at this tail. /*0x5608ad*/
      this->trunkWidth = CSpeedTreeRT__GetTrunkWidth(v13);// Verified BSTreeModel.trunkWidth at +0x54 is written from CSpeedTreeRT_GetTrunkWidth. Fallout's named homolog stores trunkWidth at +0x4C; preserve the 8-byte layout divergence. /*0x5608b7*/
      (*((void (__thiscall **)(BSTreeModel_OblivionLayout_058 *, TESObjectTREE_OblivionLayout_080_NiTArrayVerified *))this->vftable /*0x5608c3*/
       + 5))(
        this,
        v15);                                   // Called only after CSpeedTreeRT::Compute returned success. Thus every observed successful postbuild on this stock path follows one earlier material dispatch, although it does not prove the stock material target itself returned normally when a wrapper can catch.
      CSpeedTreeRT__DeleteTransientData(v13); /*0x5608c7*/
      CSpeedTreeRT__DeleteBranchGeometry(v13); /*0x5608ce*/
      CSpeedTreeRT__DeleteFrondGeometry(v13);   // SpeedTreeOBSE 2026-05-30: optional C:\src\Fronds reference layer bypasses this DeleteFrondGeometry call only when [Fronds] bEnableReferenceRestoration=1 so computed frond geometry can be exported/cached. /*0x5608d5*/
      return 1; /*0x560903*/
    }
  }
  else if ( v13 ) /*0x560908*/
  {
    CSpeedTreeRT__dtor(v13);                    // One of exactly two Oblivion code xrefs to CSpeedTreeRT dtor/refcount cleanup. This is the MakeBase LoadTree failure release; the next instruction frees the 0xA0 CSpeedTreeRT wrapper, so wrapper addresses may be reused after cleanup. /*0x56090c*/
    FormHeapFree((unsigned int)v13);            // Frees the failed base CSpeedTreeRT 0xA0 wrapper immediately after stock shared-refcount cleanup. Pointer-address identity alone is ABA-prone across later FormHeapAlloc reuse. /*0x560912*/
  }
  return 0; /*0x5608dc*/
}
