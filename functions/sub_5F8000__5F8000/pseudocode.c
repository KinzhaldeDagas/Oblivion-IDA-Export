void __thiscall sub_5F8000(Actor *this)
{
  TESPackage *v2; // eax
  TESPackage *v3; // esi
  TESCreature *v4; // eax

  if ( (int)this->members.super.process->GetProcessLevel(this->members.super.process) < 2 ) /*0x5f8032*/
  {
    v2 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f803a*/
    if ( v2 ) /*0x5f8050*/
      v3 = TESPackage::TESPackage(v2); /*0x5f8059*/
    else
      v3 = 0; /*0x5f805d*/
    TESPackage_SetType_(v3, 0x18); /*0x5f806b*/
    v3->members.packageFlags |= 4u; /*0x5f8070*/
    sub_5672A0(v3); /*0x5f8076*/
    Actor_AddPackage_(this, v3, 1, 1); /*0x5f8082*/
    if ( this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_Creature ) /*0x5f8097*/
    {
      v4 = (TESCreature *)this->vtbl->super.super.GetBaseForm(this); /*0x5f80a3*/
      if ( v4 ) /*0x5f80a7*/
      {
        if ( v4->type == 4 ) /*0x5f80b0*/
          ExtraDataList::RemoveStartLocation(&this->members.super.super.baseExtraList.vtbl); /*0x5f80b5*/
      }
    }
  }
}
