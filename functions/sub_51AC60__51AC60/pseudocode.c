// Anim key weapon-prefix extractor. Returns the weapon prefix nibble from key word bits 0x0F00.
int __thiscall TESAnimGroup_GetWeaponPrefix(unsigned __int16 *this)
{
  return HIBYTE(*(this + 4)) & 0xF; /*0x51ac6a*/
}
