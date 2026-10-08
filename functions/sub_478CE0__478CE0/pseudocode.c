// Clears ActorSkinInfo weapon form/model/3D state and, when the owning non-creature still has its weapon out, schedules the appropriate ActorAnimData equipment refresh. ActorSkinInfo and ActorAnimData are distinct objects.
void __thiscall ActorSkinInfo_ClearWeaponSlot(ActorSkinInfo *this)
{
  Actor *owner; // edi
  _DWORD *AnimDataByPerspective; // eax

  ActorSkinInfo_ClearOrReplaceEquipmentSlot(this, (ActorSkinInfoEquipmentSlot *)&this->WeaponForm, 1, 0); /*0x478cee*/
  if ( this->owner->vtbl->super.super.IsActor((TESObjectREFR *)this->owner) ) /*0x478d01*/
  {
    owner = this->owner; /*0x478d08*/
    if ( !Actor_IsCreature(owner) ) /*0x478d10*/
    {
      if ( owner->members.super.process ) /*0x478d19*/
      {
        if ( Actor_IsWeaponOut(owner) ) /*0x478d21*/
        {
          if ( (PlayerCharacter *)this->owner == reference /*0x478d41*/
            && this == Actor_GetSkinInfoByPerspective((Actor *)reference, 1) )
          {
            AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x478d4b*/
          }
          else
          {
            AnimDataByPerspective = TESObjectREFR_GetAnimData(owner); /*0x478d54*/
          }
          if ( AnimDataByPerspective ) /*0x478d5b*/
            AnimDataByPerspective[0x32] = owner; /*0x478d5d*/
        }
      }
    }
  }
}
