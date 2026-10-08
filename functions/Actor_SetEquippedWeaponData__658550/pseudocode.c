// Replaces HighProcess equippedWeaponData, derives staff/bow flags from TESObjectWEAP weapon type, rebuilds equipment attachment-node caches for active player perspectives, or clears those caches when equipment is absent.
char __thiscall Actor_SetEquippedWeaponData(HighProcess *this, EntryData *entry, NiNode *rootNode)
{
  int v3; // edx
  EntryData *equippedWeaponData; // edi
  TESForm *type; // ebp
  ActorAnimData *animData; // eax
  NiNode *v8; // ecx
  NiNode *v9; // edi
  void **v10; // eax
  char result; // al

  equippedWeaponData = this->equippedWeaponData; /*0x65855a*/
  if ( equippedWeaponData != entry ) /*0x658564*/
  {
    if ( equippedWeaponData ) /*0x658568*/
    {
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)this->equippedWeaponData, v3); /*0x65856c*/
      FormHeapFree((unsigned int)equippedWeaponData); /*0x658572*/
    }
    this->equippedWeaponData = entry; /*0x65857c*/
    this->unk0F4 = 0; /*0x658582*/
    this->unk0F5 = 0; /*0x658588*/
    if ( entry ) /*0x65858e*/
    {
      type = entry->type; /*0x658590*/
      if ( type ) /*0x658595*/
      {
        if ( LOBYTE(type[6].vtbl) == 4 ) /*0x6585a1*/
        {
          this->unk0F5 = 1; /*0x6585b1*/
        }
        else if ( LOBYTE(type[6].vtbl) == 5 ) /*0x6585a6*/
        {
          this->unk0F4 = 1; /*0x6585a8*/
        }
      }
    }
  }
  animData = this->animData; /*0x6585b8*/
  if ( animData && this->equippedWeaponData ) /*0x6585c2*/
  {
    v8 = animData->RootNode; /*0x6585ca*/
    if ( v8 ) /*0x6585cf*/
      MiddleHighProcess_CacheEquipmentAttachmentNodes(this, animData->manager, v8); /*0x6585d9*/
    else
      MiddleHighProcess_CacheEquipmentAttachmentNodes(this, 0, rootNode); /*0x6585e3*/
    if ( this->animData == PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 0) ) /*0x6585fa*/
    {
      v9 = *((NiNode **)PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1) + 1); /*0x65860f*/
      v10 = (void **)PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1); /*0x658614*/
      MiddleHighProcess_CacheEquipmentAttachmentNodes(this, v10[0x26], v9); /*0x658623*/
    }
    return 1; /*0x658623*/
  }
  this->weaponAttachNode = 0; /*0x658631*/
  this->torchAttachNode = 0; /*0x658637*/
  this->forearmTwistAttachNode = 0; /*0x65863d*/
  this->backOrSideWeaponAttachNode = 0; /*0x658643*/
  this->quiverAttachNode = 0; /*0x658649*/
  this->arrowBoneAttachNode = 0; /*0x65864f*/
  if ( !reference ) /*0x65865c*/
    return 1; /*0x658628*/
  result = 1; /*0x658661*/
  if ( reference->super.super.super.process == this ) /*0x658663*/
  {
    g_playerFirstPersonWeaponAttachNode = 0; /*0x658668*/
    g_playerFirstPersonTorchAttachNode = 0; /*0x65866e*/
    g_playerFirstPersonForearmTwistNode = 0; /*0x658674*/
    g_playerFirstPersonBackOrSideWeaponAttachNode = 0; /*0x65867a*/
    g_playerFirstPersonQuiverAttachNode = 0; /*0x658680*/
    g_playerFirstPersonArrowBoneAttachNode = 0; /*0x658686*/
  }
  return result; /*0x65862a*/
}
