int __thiscall sub_802A60(int this, int a2)
{
  int i; // esi

  for ( i = *(unsigned __int16 *)(this + 0xE) - 1; i >= 0; --i )
  {
    if ( a2 == *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * i) )
      sub_8029C0(this, i);
  }
  return *(unsigned __int16 *)(this + 0xE);
}
