void __thiscall sub_5F5730(Actor *this)
{
  TESForm *v2; // eax
  TESPackage *v3; // eax
  TESPackage *v4; // edi
  TESPackage *v5; // esi
  _DWORD *v6; // eax
  int v7; // [esp+0h] [ebp-20h]

  if ( (this->vtbl->super.super.GetBaseForm(this)->member.type != kFormType_Creature /*0x5f5799*/
     || (v2 = this->vtbl->super.super.GetBaseForm(this)) == 0
     || LOBYTE(v2[0xA].member.modlist.next) != 4
     || !((int (__thiscall *)(Actor *))this->vtbl->Unk_E2)(this))
    && this != (Actor *)reference )
  {
    v3 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f57a1*/
    v4 = 0; /*0x5f57ad*/
    if ( v3 ) /*0x5f57b5*/
      v5 = TESPackage::TESPackage(v3); /*0x5f57be*/
    else
      v5 = 0; /*0x5f57c2*/
    TESPackage_SetType_(v5, 0x1C); /*0x5f57d0*/
    v5->members.packageFlags |= 6u; /*0x5f57d5*/
    v6 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f57db*/
    if ( v6 ) /*0x5f57f1*/
      v4 = (TESPackage *)TESPackage_LocationData_constr(v6); /*0x5f57fa*/
    TESPackage_LocationData_SetType(v4, 0); /*0x5f5808*/
    TESPackage_LocationData_SetReference(v4, (int)this); /*0x5f5810*/
    TESPackage_SetLocation(v5, (char *)v4); /*0x5f5818*/
    if ( v4 ) /*0x5f581f*/
    {
      TESPackage_LocationData_destr(v4); /*0x5f5823*/
      FormHeapFree((unsigned int)v4); /*0x5f5829*/
    }
    sub_5672A0(v5); /*0x5f5833*/
    sub_5E91E0(this, 0x1D, 0x52424157, 1, v7); /*0x5f5843*/
    Actor_AddPackage_(this, v5, 1, 1); /*0x5f584f*/
  }
}
