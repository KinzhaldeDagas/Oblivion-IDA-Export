// 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
char __thiscall TESObjectCELL_IsInterior(TESObjectCELL *this)
{
  return this->members.flags0 & 1; /*0x4c97f5*/
}
