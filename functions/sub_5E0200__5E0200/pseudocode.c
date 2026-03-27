void __thiscall sub_5E0200(Actor *this, int a2, TESObjectCELL *a3, UInt32 *a4, UInt32 a5)
{
  UInt32 v6; // eax

  this->members.unk0E8[0] = *a4;
  this->members.unk0E8[1] = a4[1];
  v6 = a4[2];
  this->members.unk0E8[3] = a5;
  this->members.unk0E8[2] = v6;
  if ( a3 && TESObjectCELL_IsInterior(a3) )
    this->members.unk0E8[4] = (UInt32)a3;
  else
    this->members.unk0E8[4] = a2;
}
