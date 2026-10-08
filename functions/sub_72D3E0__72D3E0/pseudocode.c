char __thiscall sub_72D3E0(const void **this, int a2, int a3)
{
  int v4; // esi

  v4 = 0; /*0x72d3ee*/
  while ( sub_72CE60(this, a3 + 0xC * *(unsigned __int16 *)(a2 + 2 * v4)) ) /*0x72d404*/
  {
    if ( (unsigned int)++v4 >= 3 ) /*0x72d40c*/
      return 1; /*0x72d414*/
  }
  return 0; /*0x72d40e*/
}
