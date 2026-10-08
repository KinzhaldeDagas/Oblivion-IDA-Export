void __thiscall sub_568730(TESPackage *this)
{
  UInt32 refID; // eax
  _BYTE v3[8]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v4; // [esp+1Ch] [ebp-4h]

  this->members.packageFlags = 0; /*0x56875d*/
  this->members.type = kPackageType_Find; /*0x568760*/
  this->members.location = 0; /*0x568763*/
  this->members.target = 0; /*0x568766*/
  sub_569D60(v3); /*0x568769*/
  v4 = 0; /*0x568776*/
  sub_569DD0(&this->members.time, (UInt32)v3); /*0x56877a*/
  v4 = 0xFFFFFFFF; /*0x568783*/
  Shared_NoOpVirtual_60D0A0(v3); /*0x56878b*/
  refID = this->members.super.refID; /*0x568790*/
  this->members.procedureArrayIndex = 0xFFFFFFFF; /*0x568793*/
  if ( TESDataHandler_IsFormIDCreated_(refID) ) /*0x5687a1*/
    this->members.packageFlags &= ~0x800u; /*0x5687aa*/
}
