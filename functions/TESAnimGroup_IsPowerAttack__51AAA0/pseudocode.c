// TESAnimGroup power-attack test: native group id 0x16-0x1A inclusive.
bool __thiscall TESAnimGroup_IsPowerAttack(unsigned __int8 *this)
{
  return (unsigned int)*(this + 8) - 0x16 <= 4; /*0x51aaad*/
}
