signed int __thiscall TESObjectARMO_GetArmorSkillAV(_BYTE *this)
{
  return (char)*(this + 0x6A) < 0 ? 0x12 : 0x1B;
}
