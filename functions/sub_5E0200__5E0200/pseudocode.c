void __thiscall sub_5E0200(Actor *this, int a2, TESObjectCELL *a3, UInt32 *a4, UInt32 a5)
{
  UInt32 v6; // eax

  this->members.unk0E8[0] = *a4; /*0x5e020d*/
  this->members.unk0E8[1] = a4[1]; /*0x5e021d*/
  v6 = a4[2]; /*0x5e0223*/
  this->members.unk0E8[3] = a5; /*0x5e0226*/
  this->members.unk0E8[2] = v6; /*0x5e022c*/
  if ( a3 && TESObjectCELL_IsInterior(a3) ) /*0x5e0236*/
    this->members.unk0E8[4] = (UInt32)a3; /*0x5e023f*/
  else
    this->members.unk0E8[4] = a2; /*0x5e024f*/
}
