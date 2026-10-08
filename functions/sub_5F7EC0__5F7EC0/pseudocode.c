void __thiscall sub_5F7EC0(Actor *this)
{
  TESPackage *v2; // esi
  UInt32 DeadState; // eax
  TESPackage *v4; // edi
  TESPackage *v5; // eax
  TESPackage *v6; // esi
  _DWORD *v7; // eax

  v2 = this->members.super.process->GetCurrentPackage(this->members.super.process); /*0x5f7ef3*/
  if ( !this->vtbl->GetMountedHorse(this) ) /*0x5f7f00*/
  {
    DeadState = this->members.DeadState; /*0x5f7f0a*/
    if ( DeadState != 5 && DeadState != 3 ) /*0x5f7f1c*/
    {
      v4 = 0; /*0x5f7f22*/
      if ( !v2 || v2->members.type != kPackageType_GetUp ) /*0x5f7f2c*/
      {
        v5 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x5f7f34*/
        if ( v5 ) /*0x5f7f46*/
          v6 = TESPackage::TESPackage(v5); /*0x5f7f4f*/
        else
          v6 = 0; /*0x5f7f53*/
        TESPackage_SetType_(v6, 0x15); /*0x5f7f61*/
        v6->members.packageFlags = v6->members.packageFlags & 0xFFFFFFF9 | 4; /*0x5f7f71*/
        v7 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f7f74*/
        if ( v7 ) /*0x5f7f8a*/
          v4 = (TESPackage *)TESPackage_LocationData_constr(v7); /*0x5f7f93*/
        TESPackage_LocationData_SetType(v4, 0); /*0x5f7fa1*/
        TESPackage_LocationData_SetReference(v4, (int)this); /*0x5f7fa9*/
        TESPackage_SetLocation(v6, (char *)v4); /*0x5f7fb1*/
        if ( v4 ) /*0x5f7fb8*/
        {
          TESPackage_LocationData_destr(v4); /*0x5f7fbc*/
          FormHeapFree((unsigned int)v4); /*0x5f7fc2*/
        }
        v6->members.procedureArrayIndex = 0x15; /*0x5f7fca*/
        this->members.super.process->Unk_08(this->members.super.process); /*0x5f7fd9*/
        Actor_AddPackage_(this, v6, 1, 1); /*0x5f7fe2*/
      }
    }
  }
}
