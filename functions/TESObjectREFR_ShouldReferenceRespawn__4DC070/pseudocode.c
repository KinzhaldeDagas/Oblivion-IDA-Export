bool __thiscall TESObjectREFR::ShouldReferenceRespawn(TESObjectREFR *this)
{
  int type; // eax
  TESActorBase *v3; // eax
  TESObjectCONT *v5; // eax

  if ( !this->vtbl->GetBaseForm(this)
    || (unsigned __int8)this->vtbl->GetBaseForm(this)->member.type - (unsigned int)kFormType_NPC > 2
    || !ExtraDataList::TrespassPackakePresent(&this->member.baseExtraList) )
  {
    type = this->vtbl->GetBaseForm(this)->member.type;
    if ( type == kFormType_Container )
    {
      v5 = (TESObjectCONT *)this->vtbl->GetBaseForm(this);
      if ( v5 )
        return (v5->members.flags078 & 2) != 0; // //Check Respawn
    }
    else if ( type - (unsigned int)kFormType_NPC <= 1 )
    {
      v3 = (TESActorBase *)this->vtbl->GetBaseForm(this);
      if ( v3 )
        return (v3->super.actorBaseData.flags & 8) != 0;// Respawn
                                                // 
    }
  }
  return 0;
}
