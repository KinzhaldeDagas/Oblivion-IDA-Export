void __thiscall sub_5F5730(Actor *this)
{
  TESForm *v2; // eax
  TESPackage *v3; // eax
  TESPackage *v4; // edi
  TESPackage *v5; // esi
  _DWORD *v6; // eax

  if ( (this->vtbl->super.super.GetBaseForm(this)->member.type != kFormType_Creature
     || (v2 = this->vtbl->super.super.GetBaseForm(this)) == 0
     || LOBYTE(v2[0xA].member.modlist.next) != 4
     || !((int (__thiscall *)(Actor *))this->vtbl->Unk_E2)(this))
    && this != (Actor *)TESDataHandler_g_PlayerRef )
  {
    v3 = (TESPackage *)FormHeapAlloc(0x3Cu);
    v4 = 0;
    if ( v3 )
      v5 = TESPackage::TESPackage(v3);
    else
      v5 = 0;
    TESPackage_SetType_(v5, 0x1C);
    v5->members.packageFlags |= 6u;
    v6 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v6 )
      v4 = (TESPackage *)TESPackage_LocationData_constr(v6);
    TESPackage_LocationData_SetType(v4, 0);
    TESPackage_LocationData_SetReference(v4, (int)this);
    TESPackage_SetLocation(v5, (char *)v4);
    if ( v4 )
    {
      TESPackage_LocationData_destr(v4);
      FormHeapFree((unsigned int)v4);
    }
    sub_5672A0(v5);
    sub_5E91E0(this, 0x1D, 0x52424157, 1);
    Actor_AddPackage_(this, v5, 1, 1);
  }
}
