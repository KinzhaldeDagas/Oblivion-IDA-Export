// TESClass::IsGuardClass reads classFlags at +0x60 bit 1.
bool __thiscall TESClass::IsGuardClass(TESClass *this)
{
  return (this->members.classFlags & kFlag_Guard) != 0; /*0x51bef8*/
}
