// High/MiddleHigh process vtable +0x124. Returns cached BackWeapon for 2H blade, 2H blunt, staff, and bow; SideWeapon otherwise. This accessor is adjacent to, but not called by, the native Arrow:0 clone/attach block.
NiNode *__thiscall MiddleHighProcess_GetBackOrSideWeaponNode(MiddleHighProcess *this, ActorAnimData *animData)
{
  EntryData *equippedWeaponData; // eax
  int vtbl_low; // eax

  if ( !animData ) /*0x6508d8*/
    return (NiNode *)this->backOrSideWeaponAttachNode; /*0x6508d8*/
  equippedWeaponData = this->equippedWeaponData; /*0x6508da*/
  if ( !equippedWeaponData ) /*0x6508e2*/
    return (NiNode *)this->backOrSideWeaponAttachNode; /*0x650917*/
  vtbl_low = SLOBYTE(equippedWeaponData->type[6].vtbl); /*0x6508e7*/
  if ( vtbl_low == 1 || vtbl_low > 2 && vtbl_low <= 5 ) /*0x6508fb*/
    return ActorSkinInfo_GetCachedNode(animData, 4); /*0x650912*/
  else
    return ActorSkinInfo_GetCachedNode(animData, 5); /*0x650905*/
}
