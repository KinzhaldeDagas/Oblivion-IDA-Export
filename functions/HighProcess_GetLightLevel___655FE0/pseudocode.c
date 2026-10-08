double __thiscall HighProcess_GetLightLevel_(HighProcess *this, TESObjectREFR *a2, unsigned int a3)
{
  double v4; // st7
  NiObject *unk184; // ecx
  ShadowSceneLight_DecodedLayout *v7; // esi
  BSExtraDataVtbl *v8; // eax
  NiNode *PlayerNode; // eax
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  ShadowSceneLight_DecodedLayout *lightLevelReference_118; // edx
  TESObjectREFRVtbl *vtbl; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  int v14; // eax
  float v15; // ebp
  float v16; // ebx
  void (__thiscall *Unk_57)(UInt32); // edx
  double v18; // st7
  TESObjectREFRVtbl *v19; // eax
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  TESObjectCELL *ParentCell; // eax
  double v24; // st7
  float v26; // [esp+14h] [ebp-58h]
  float v27; // [esp+14h] [ebp-58h]
  void (__thiscall *excludedBackingLight)(BSExtraData *); // [esp+18h] [ebp-54h]
  float outAmbientMax; // [esp+1Ch] [ebp-50h] BYREF
  float outDiffuseMax; // [esp+20h] [ebp-4Ch] BYREF
  ShadowSceneNode_DecodedLayout *self; // [esp+24h] [ebp-48h]
  HighProcess *v32; // [esp+28h] [ebp-44h]
  ShadowSceneLight_DecodedLayout *v33[2]; // [esp+2Ch] [ebp-40h]
  double v34; // [esp+34h] [ebp-38h]
  float v35; // [esp+44h] [ebp-28h]
  char v36[12]; // [esp+48h] [ebp-24h] BYREF
  char v37[12]; // [esp+54h] [ebp-18h] BYREF
  int v38; // [esp+68h] [ebp-4h]
  float v39; // [esp+70h] [ebp+4h]
  float v40; // [esp+70h] [ebp+4h]

  v32 = this; /*0x656009*/
  v4 = 0.0; /*0x65600d*/
  unk184 = this->unk184; /*0x65600f*/
  v26 = 0.0; /*0x656017*/
  if ( unk184 ) /*0x65601d*/
  {
    v33[1] = 0; /*0x656023*/
    v27 = 0.0; /*0x656027*/
    outAmbientMax = 0.0; /*0x65602b*/
    v38 = 0; /*0x65602f*/
    outDiffuseMax = 0.0; /*0x656033*/
    v7 = (ShadowSceneLight_DecodedLayout *)BSShaderLightingProperty_GetFirstLightUnfiltered(unk184); /*0x656045*/
    excludedBackingLight = 0; /*0x656047*/
    if ( (_BYTE)a3 ) /*0x65604b*/
    {
      v8 = sub_4D7FC0(a2); /*0x65604f*/
      if ( v8 ) /*0x656056*/
        excludedBackingLight = v8->Destructor; /*0x65605a*/
    }
    if ( !v7 && a2 == (TESObjectREFR *)reference ) /*0x65606a*/
    {
      PlayerNode = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x65606e*/
      sub_7C7050((int)PlayerNode, 0); /*0x656075*/
      v7 = (ShadowSceneLight_DecodedLayout *)BSShaderLightingProperty_GetFirstLightUnfiltered(&this->unk184->MiddleHighProcess::__vftable); /*0x656088*/
    }
    ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(this->unk184[3].members.m_uiRefCount >> 0x1C); /*0x65609a*/
    self = ShadowSceneNode; /*0x6560a4*/
    if ( !ShadowSceneNode ) /*0x6560aa*/
    {
      sub_5EA1A0((int)a2, 0, (_DWORD *)a2->member.niNode); /*0x6560b0*/
      v4 = 0.0; /*0x6560b5*/
      v26 = 0.0; /*0x6560b7*/
      goto LABEL_21; /*0x6560bb*/
    }
    lightLevelReference_118 = (ShadowSceneLight_DecodedLayout *)ShadowSceneNode->lightLevelReference_118; /*0x6560c0*/
    vtbl = a2->vtbl; /*0x6560c6*/
    v33[0] = lightLevelReference_118; /*0x6560c8*/
    GetPos = vtbl->GetPos; /*0x6560cc*/
    a3 = 0; /*0x6560d2*/
    v14 = (int)GetPos(a2); /*0x6560d6*/
    v15 = *(float *)v14; /*0x6560d8*/
    v16 = *(float *)(v14 + 4); /*0x6560da*/
    Unk_57 = a2->vtbl->Unk_57; /*0x6560e2*/
    v35 = *(float *)(v14 + 8); /*0x6560e8*/
    v18 = *(float *)(((int (__thiscall *)(TESObjectREFR *, char *))Unk_57)(a2, v36) + 8); /*0x6560f5*/
    v19 = a2->vtbl; /*0x6560f8*/
    v34 = v18; /*0x6560fa*/
    v20 = ((int (__thiscall *)(TESObjectREFR *, char *))v19->Unk_56)(a2, v37); /*0x65610b*/
    v21 = a2 == (TESObjectREFR *)reference; /*0x656110*/
    v39 = v18 - *(float *)(v20 + 8) - dbl_A2F928; /*0x656120*/
    v40 = v39 * dbl_A2FAA0; /*0x65612e*/
    v35 = v35 + v40; /*0x65613a*/
    if ( v21 ) /*0x65613e*/
    {
      v27 = ShadowSceneNode_AccumulateLightLevelInputs( /*0x656171*/
              self,
              v15,
              v16,
              v35,
              &a3,
              &outAmbientMax,
              &outDiffuseMax,
              excludedBackingLight);            // HighProcess light-level evaluation calls the ShadowSceneNode accumulator for world-position influence plus reference ambient/diffuse maxima.
    }
    else if ( v7 ) /*0x656179*/
    {
      do /*0x6561bd*/
      {
        v27 = ShadowSceneLight_ComputePointInfluenceScore(v7, v15, v16, v35, excludedBackingLight) + v27; /*0x6561ab*/
        v22 = BSShaderLightingProperty_GetNextLightUnfiltered(&v32->unk184->MiddleHighProcess::__vftable); /*0x6561af*/
        ++a3; /*0x6561b4*/
        v7 = (ShadowSceneLight_DecodedLayout *)v22; /*0x6561b9*/
      }
      while ( v22 ); /*0x6561bd*/
    }
    if ( Shared_GetDwordAtOffset40(a2) /*0x6561d3*/
      && (ParentCell = Shared_GetDwordAtOffset40(a2), TESObjectCELL_IsInterior(ParentCell)) )
    {
      v24 = outAmbientMax; /*0x6561dc*/
    }
    else
    {
      if ( !v33[0] ) /*0x6561e8*/
      {
LABEL_20:
        v26 = v27 * fCostant_100; /*0x65620a*/
        v4 = 0.0; /*0x656218*/
        goto LABEL_21; /*0x656218*/
      }
      v24 = ShadowSceneLight_ComputePointInfluenceScore(v33[0], v15, v16, v35, 0); /*0x6561fd*/
    }
    v27 = v24 + v27; /*0x656206*/
    goto LABEL_20; /*0x656206*/
  }
LABEL_21:
  if ( v26 > fCostant_100 ) /*0x656229*/
    return flt_A2FE7C; /*0x656239*/
  if ( v26 < v4 ) /*0x656246*/
    return (float)v4; /*0x65624a*/
  return v26; /*0x656256*/
}
