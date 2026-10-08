// Anim key movement-prefix extractor. Returns the high nibble of key word bits 0xF000.
int __thiscall TESAnimGroup_GetMovementPrefix(unsigned __int16 *this)
{
  return *(this + 4) >> 0xC; /*0x51ac57*/
}
