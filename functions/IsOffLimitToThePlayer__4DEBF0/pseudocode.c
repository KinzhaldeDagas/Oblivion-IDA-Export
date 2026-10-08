// Verified IsOffLimitToThePlayer flow: door access first checks actor/owner policy and the effective lock. For linked interior cells it also checks TESObjectCELL_HasPublicOrTempPublicState (flags0 bits 0x20|0x40). Oblivion's bit 0x40 is toggled by linked-door lock/unlock operations and cleared during ordinary cell load; Probable meaning is TempPublic, corroborated by Fallout's SetTempPublic.
bool __thiscall IsOffLimitToThePlayer(TESObjectREFR *this)
{
  ExtraDataList *p_baseExtraList; // ebp
  ExtraLockData *Lock; // ebx
  TeleportData *Teleport; // eax
  TeleportData *v5; // edi
  TESObjectREFR *LinkedDoor; // eax
  TESForm *Owner; // eax
  TESForm::FormType type; // cl
  bool v9; // zf
  char v10; // al
  TeleportData *v12; // eax
  char v13; // bl
  TESObjectCELL *v14; // eax
  TESObjectCELL *v15; // esi
  TESForm *v16; // eax
  TESForm::FormType v17; // cl
  bool v18; // zf
  char v19; // al
  char v20; // bl
  TeleportData *v21; // eax
  TESObjectCELL *v22; // eax
  TESObjectCELL *v23; // esi
  TESForm *v24; // eax
  TESForm::FormType v25; // cl
  bool v26; // zf
  char v27; // al
  char v28; // [esp+Fh] [ebp-1h]

  p_baseExtraList = &this->member.baseExtraList; /*0x4debf6*/
  v28 = 0; /*0x4debfb*/
  Lock = ExtraDataList_GetLock(&this->member.baseExtraList); /*0x4dec05*/
  if ( !Lock ) /*0x4dec09*/
  {
    Teleport = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4dec0e*/
    v5 = Teleport; /*0x4dec13*/
    if ( Teleport ) /*0x4dec17*/
    {
      if ( TeleportData_GetLinkedDoor(Teleport) ) /*0x4dec1b*/
      {
        LinkedDoor = TeleportData_GetLinkedDoor(v5); /*0x4dec26*/
        Lock = ExtraDataList_GetLock(&LinkedDoor->member.baseExtraList); /*0x4dec33*/
      }
    }
  }
  Owner = TESObjectREFR_GetOwner(this); /*0x4dec38*/
  if ( Owner || (Owner = TESObjectREFR_GetOwner(this)) != 0 ) /*0x4dec4a*/
  {
    type = Owner->member.type; /*0x4dec4c*/
    if ( type == kFormType_Faction ) /*0x4dec52*/
    {
      v9 = (Owner[2].member.type & 2) == 0; /*0x4dec5a*/
    }
    else
    {
      if ( type != kFormType_NPC ) /*0x4dec61*/
        goto LABEL_13; /*0x4dec61*/
      TESActorBaseData_AllFactionsAreEvil(&Owner[1].member.refID); /*0x4dec66*/
      v9 = v10 == 0; /*0x4dec6b*/
    }
    if ( !v9 ) /*0x4dec6d*/
      return 0; /*0x4dec75*/
  }
LABEL_13:
  if ( this->vtbl->GetBaseForm(this)->member.type != kFormType_Door ) /*0x4dec88*/
  {
    if ( (this->vtbl->GetBaseForm(this)->member.type != kFormType_NPC /*0x4dee52*/
       || !Actor_IsSneaking(reference)
       || this->vtbl->IsDead(this, 0))
      && (!TESObjectREFR_GetOwner(this)
       || TESObjectREFR_IsOwnedBy(this, (TESObjectREFR *)reference, 1)
       || this->vtbl->IsActor(this) && !TESObjectREFR_HasHorseCreatureBase(this)) )
    {
      return v28; /*0x4dee59*/
    }
    return 1; /*0x4dee59*/
  }
  if ( !this->vtbl->GetBaseForm(this) /*0x4decba*/
    || TESObjectREFR_IsOwnedBy(this, (TESObjectREFR *)reference, 1)
    || !TESObjectREFR_GetOwner(this) )
  {
    v20 = 0; /*0x4ded6e*/
    v21 = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4ded70*/
    if ( !v21 ) /*0x4ded77*/
      return 0; /*0x4ded77*/
    v22 = sub_42B460(&v21->linkedDoor); /*0x4ded7b*/
    v23 = v22; /*0x4ded80*/
    if ( !v22 ) /*0x4ded84*/
      return 0; /*0x4ded84*/
    v24 = TESObjectCELL_GetOwner(v22); /*0x4ded88*/
    if ( !v24 ) /*0x4ded8f*/
      return 0; /*0x4ded8f*/
    v25 = v24->member.type; /*0x4ded91*/
    if ( v25 == kFormType_Faction ) /*0x4ded97*/
    {
      v26 = (v24[2].member.type & 2) == 0; /*0x4ded9f*/
    }
    else
    {
      if ( v25 != kFormType_NPC ) /*0x4deda7*/
        return TESObjectCELL_IsInterior(v23) /*0x4deda7*/
            && !TESObjectCELL_HasPublicOrTempPublicState(v23)
            && !v20
            && !TESObjectCELL_IsOwnedByActor(v23, (Actor *)reference);
      TESActorBaseData_AllFactionsAreEvil(&v24[1].member.refID); /*0x4dedac*/
      v26 = v27 == 0; /*0x4dedb1*/
    }
    if ( !v26 ) /*0x4dedb3*/
      v20 = 1; /*0x4dedb5*/
    return TESObjectCELL_IsInterior(v23) /*0x4dedf0*/
        && !TESObjectCELL_HasPublicOrTempPublicState(v23)
        && !v20
        && !TESObjectCELL_IsOwnedByActor(v23, (Actor *)reference);
  }
  if ( TESObjectDOOR_CheckActorAccessPolicy(this, (Actor *)reference, 0, 0) ) /*0x4decd3*/
    return 0; /*0x4decdd*/
  if ( Lock && ExtraLockData_IsLocked(Lock) ) /*0x4dece5*/
    return 1; /*0x4decec*/
  v12 = ExtraDataList_GetTeleport(p_baseExtraList); /*0x4decf4*/
  v13 = 0; /*0x4decf9*/
  if ( v12 ) /*0x4decfd*/
  {
    v14 = sub_42B460(&v12->linkedDoor); /*0x4ded05*/
    v15 = v14; /*0x4ded0a*/
    if ( !v14 ) /*0x4ded0e*/
      return 0; /*0x4ded0e*/
    v16 = TESObjectCELL_GetOwner(v14); /*0x4ded12*/
    if ( !v16 ) /*0x4ded19*/
      return 0; /*0x4ded19*/
    v17 = v16->member.type; /*0x4ded1b*/
    if ( v17 == kFormType_Faction ) /*0x4ded21*/
    {
      v18 = (v16[2].member.type & 2) == 0; /*0x4ded29*/
    }
    else
    {
      if ( v17 != kFormType_NPC ) /*0x4ded30*/
        return TESObjectCELL_IsInterior(v15) && !TESObjectCELL_HasPublicOrTempPublicState(v15) && !v13; /*0x4ded30*/
      TESActorBaseData_AllFactionsAreEvil(&v16[1].member.refID); /*0x4ded35*/
      v18 = v19 == 0; /*0x4ded3a*/
    }
    if ( !v18 ) /*0x4ded3c*/
      v13 = 1; /*0x4ded3e*/
    return TESObjectCELL_IsInterior(v15) && !TESObjectCELL_HasPublicOrTempPublicState(v15) && !v13; /*0x4ded58*/
  }
  return v28; /*0x4dec6f*/
}
