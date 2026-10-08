// Returns true when the encoded key is not group 0xFF and its fixed group record uses note-template class 5. In Oblivion's 43 records that is AttackPower..AttackRightPower plus CastSelf/Touch/Target and their Alt variants.
bool __cdecl sub_51ACC0(__int16 a1)
{
  return a1 != 0xFF && *(_DWORD *)(0x24 * (unsigned __int8)a1 + 0xB102EC) == 5; /*0x51accc*/
}
