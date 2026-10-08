// Caches exact-name ArrowBone from ActorAnimData->RootNode. Ordinary/third-person results go to MiddleHighProcess+0x110; player first-person ActorAnimData (+0x5CC) selects global cache 0xB3BA98. Returns true unconditionally, including null input and lookup failure. This function takes ActorAnimData, unlike the +0x128/+0x12C accessors that take ActorSkinInfo.
bool __thiscall MiddleHighProcess_CacheArrowBoneNode(MiddleHighProcess *this, ActorAnimData *animData)
{
  ActorAnimData *AnimDataByPerspective; // eax
  NiNode *RootNode; // [esp-8h] [ebp-10h]

  if ( animData && this->equippedWeaponData ) /*0x64f5ec*/
  {
    AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x64f5fd*/
    RootNode = animData->RootNode; /*0x64f60c*/
    if ( animData == AnimDataByPerspective )    // Begin recursive exact-name ArrowBone lookup from ActorAnimData->RootNode. The cached node may be model-local beneath attached weapon geometry; native code requires only the exact name. /*0x64f60d*/
      g_playerFirstPersonArrowBoneAttachNode = (NiNode *)NiObjectNET_LookupObjectByName(RootNode, "ArrowBone");// Cache the player first-person ActorAnimData ArrowBone lookup in global 0xB3BA98; non-first-person contexts store the result at MiddleHighProcess+0x110. /*0x64f618*/
    else
      this->arrowBoneAttachNode = (NiNode *)NiObjectNET_LookupObjectByName(RootNode, "ArrowBone"); /*0x64f62b*/
    return 1; /*0x64f61d*/
  }
  else
  {
    this->arrowBoneAttachNode = 0; /*0x64f638*/
    return 1; /*0x64f643*/
  }
}
