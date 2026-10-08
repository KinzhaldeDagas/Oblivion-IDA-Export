int __thiscall sub_802A60(int this, int a2)
{
  int i; // esi

  for ( i = *(unsigned __int16 *)(this + 0xE) - 1; i >= 0; --i ) /*0x802a68*/
  {
    if ( a2 == *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * i) ) /*0x802a76*/
      sub_8029C0(this, i); /*0x802a79*/
  }
  return *(unsigned __int16 *)(this + 0xE); /*0x802a88*/
}
