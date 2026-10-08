// 3DTheft: marks actor modified when assigning created package/editor package. For created package refIDs, uses actor modified mask 0x20000, or 0x30000 for types 0x13/0x11.
void __thiscall sub_5E8DE0(Actor *this, TESPackage *a2)
{
  TESPackageType type; // al
  UInt32 v4; // ecx

  if ( a2 ) /*0x5e8dea*/
  {
    if ( TESDataHandler_IsFormIDCreated_(a2->members.super.refID) ) /*0x5e8df6*/
    {
      type = a2->members.type; /*0x5e8dff*/
      v4 = 0x20000; /*0x5e8e04*/
      if ( type == kPackageType_Spectator || type == kPackageType_Trespass ) /*0x5e8e0d*/
        v4 = 0x30000; /*0x5e8e0f*/
      this->vtbl->super.super.super.MarkAsModified((TESForm *)this, v4); /*0x5e8e1c*/
    }
  }
}
