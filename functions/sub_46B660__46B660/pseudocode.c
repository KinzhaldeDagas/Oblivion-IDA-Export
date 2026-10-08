// Returns true when this TESForm has a built-in FormID in the reserved range 0x00000001..0x000007FF.
bool __thiscall TESForm_HasBuiltinFormID(TESWorldSpace *this)
{
  UInt32 refID; // eax

  refID = this->super.refID; /*0x46b660*/
  return refID && refID <= 0x7FF; /*0x46b670*/
}
