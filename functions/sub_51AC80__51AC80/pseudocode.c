// Returns true when the encoded key is not group 0xFF and the fixed Oblivion group record's note-template class is 4, 5, 6, or 7. Those classes cover AttackLeft/Right, power attacks, BlockAttack, AttackBow, and cast groups. This is a fixed-table classifier, not dynamic group registration.
bool __cdecl sub_51AC80(__int16 a1)
{
  int v2; // eax

  if ( a1 == 0xFF ) /*0x51ac88*/
    return 0; /*0x51ac8a*/
  v2 = *(_DWORD *)(0x24 * (unsigned __int8)a1 + 0xB102EC); /*0x51ac93*/
  return v2 == 5 || v2 == 4 || v2 == 7 || v2 == 6; /*0x51ac8c*/
}
