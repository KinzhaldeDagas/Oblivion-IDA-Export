void __thiscall sub_5E8DE0(Actor *this, TESPackage *a2)
{
  UInt8 type; // al
  UInt32 v4; // ecx

  if ( a2 )
  {
    if ( TESDataHandler_IsFormIDCreated_(a2->members.super.refID) )
    {
      type = a2->members.type;
      v4 = 0x20000;
      if ( type == 0x13 || type == 0x11 )
        v4 = 0x30000;
      this->vtbl->super.super.super.MarkAsModified((TESForm *)this, v4);
    }
  }
}
