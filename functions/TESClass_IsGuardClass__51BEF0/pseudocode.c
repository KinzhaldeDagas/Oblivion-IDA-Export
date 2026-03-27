bool __thiscall TESClass::IsGuardClass(TESClass *this)
{
  return (this->members.classFlags & kFlag_Guard) != 0;
}
