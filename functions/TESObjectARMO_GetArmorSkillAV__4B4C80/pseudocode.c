// Oblivion authoritative armor-skill selector: native flags+0x6A bit 0x80 maps Heavy AV 0x12, otherwise Light AV 0x1B. MWMediumArmor detours here and gives precedence to plugin-owned memory flag 0x0004 (file BMDT 0x00040000) for Medium and 0x0008 (file BMDT 0x00080000) for explicit Light; native Heavy remains 0x0080 (file 0x00800000). Untagged records may then use weight inference.
signed int __thiscall TESObjectARMO_GetArmorSkillAV(_BYTE *this)
{
  return (char)*(this + 0x6A) < 0 ? 0x12 : 0x1B;
}
