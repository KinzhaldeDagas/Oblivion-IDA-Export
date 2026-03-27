char __thiscall sub_72D3E0(const void **this, int a2, int a3)
{
  int v4; // esi

  v4 = 0;
  while ( sub_72CE60(this, a3 + 0xC * *(unsigned __int16 *)(a2 + 2 * v4)) )
  {
    if ( (unsigned int)++v4 >= 3 )
      return 1;
  }
  return 0;
}
