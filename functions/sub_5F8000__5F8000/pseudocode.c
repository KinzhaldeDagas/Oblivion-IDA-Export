void __thiscall sub_5F8000(Actor *this)
{
  TESPackage *v2; // eax
  TESPackage *v3; // esi
  TESCreature *v4; // eax

  if ( (int)this->members.super.process->GetProcessLevel(this->members.super.process) < 2 )
  {
    v2 = (TESPackage *)FormHeapAlloc(0x3Cu);
    if ( v2 )
      v3 = TESPackage::TESPackage(v2);
    else
      v3 = 0;
    TESPackage_SetType_(v3, 0x18);
    v3->members.packageFlags |= 4u;
    sub_5672A0(v3);
    Actor_AddPackage_(this, v3, 1, 1);
    if ( this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_Creature )
    {
      v4 = (TESCreature *)this->vtbl->super.super.GetBaseForm(this);
      if ( v4 )
      {
        if ( v4->type == 4 )
          ExtraDataList::RemoveStartLocation(&this->members.super.super.baseExtraList.vtbl);
      }
    }
  }
}
