void __thiscall sub_568730(TESPackage *this)
{
  UInt32 refID; // eax
  _BYTE v3[8]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v4; // [esp+1Ch] [ebp-4h]

  this->members.packageFlags = 0;
  this->members.type = 0;
  this->members.location = 0;
  this->members.target = 0;
  sub_569D60(v3);
  v4 = 0;
  sub_569DD0(&this->members.time, (UInt32)v3);
  v4 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(v3);
  refID = this->members.super.refID;
  this->members.procedureArrayIndex = 0xFFFFFFFF;
  if ( TESDataHandler_IsFormIDCreated_(refID) )
    this->members.packageFlags &= ~0x800u;
}
