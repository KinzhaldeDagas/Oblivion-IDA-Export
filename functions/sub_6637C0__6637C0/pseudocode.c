BSExtraData *__thiscall sub_6637C0(PlayerCharacter *this)
{
  char v2; // bl
  ActorSkinInfo *firstPersonSkinInfo; // esi
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  ActorSkinInfo *skinInfo; // esi
  ShadowSceneNode_DecodedLayout *v6; // eax
  UInt32 *v7; // eax
  NiNode *CachedNode; // [esp-8h] [ebp-14h]
  NiNode *v10; // [esp-8h] [ebp-14h]

  v2 = TESObjectREFR::GetNiNode((TESObjectREFR *)this)->members.super.m_flags & 1; /*0x6637cd*/
  if ( v2 ) /*0x6637d0*/
    firstPersonSkinInfo = this->firstPersonSkinInfo; /*0x6637d2*/
  else
    firstPersonSkinInfo = this->super.skinInfo; /*0x6637da*/
  if ( firstPersonSkinInfo ) /*0x6637e2*/
  {
    if ( ActorSkinInfo_GetCachedNode(firstPersonSkinInfo, 8u) ) /*0x6637e8*/
    {
      CachedNode = ActorSkinInfo_GetCachedNode(firstPersonSkinInfo, 8u); /*0x6637fc*/
      ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x6637ff*/
      ShadowSceneNode_RegisterOrRemovePointLightsInSubtree(ShadowSceneNode, CachedNode, 0); /*0x663809*/
    }
  }
  if ( v2 ) /*0x663810*/
    skinInfo = this->super.skinInfo; /*0x66381a*/
  else
    skinInfo = this->firstPersonSkinInfo; /*0x663812*/
  if ( skinInfo ) /*0x663822*/
  {
    if ( ActorSkinInfo_GetCachedNode(skinInfo, 8u) ) /*0x663828*/
    {
      v10 = ActorSkinInfo_GetCachedNode(skinInfo, 8u); /*0x66383c*/
      v6 = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x66383f*/
      ShadowSceneNode_RegisterOrRemovePointLightsInSubtree(v6, v10, 1); /*0x663849*/
    }
  }
  v7 = &this->unk760[0xE]; /*0x663850*/
  if ( !v2 ) /*0x663856*/
    v7 = &this->unk760[0xF]; /*0x663858*/
  return TESObjectREFR_SetExtraLightPayload((TESObjectREFR *)this, (NiLight *)*v7); /*0x663868*/
}
