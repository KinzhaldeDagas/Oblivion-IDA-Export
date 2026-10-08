bool __thiscall TESObjectREFR::ShouldReferenceRespawn(TESObjectREFR *this)
{
  int type; // eax
  TESActorBase *v3; // eax
  TESObjectCONT *v5; // eax

  if ( !this->vtbl->GetBaseForm(this) /*0x4dc09f*/
    || (unsigned __int8)this->vtbl->GetBaseForm(this)->member.type - (unsigned int)kFormType_NPC > 2
    || !ExtraDataList::TrespassPackakePresent(&this->member.baseExtraList) )
  {
    type = this->vtbl->GetBaseForm(this)->member.type; /*0x4dc0b4*/
    if ( type == kFormType_Container ) /*0x4dc0bb*/
    {
      v5 = (TESObjectCONT *)this->vtbl->GetBaseForm(this); /*0x4dc0ea*/
      if ( v5 ) /*0x4dc0ee*/
        return (v5->members.flags078 & 2) != 0; // //Check Respawn /*0x4dc0fa*/
    }
    else if ( type - (unsigned int)kFormType_NPC <= 1 ) /*0x4dc0c3*/
    {
      v3 = (TESActorBase *)this->vtbl->GetBaseForm(this); /*0x4dc0cf*/
      if ( v3 ) /*0x4dc0d3*/
        return (v3->super.actorBaseData.flags & 8) != 0;// Respawn /*0x4dc0df*/
                                                //
    }
  }
  return 0; /*0x4dc0db*/
}
