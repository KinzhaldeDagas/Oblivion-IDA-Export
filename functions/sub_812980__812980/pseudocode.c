void __thiscall sub_812980(int this)
{
  int v2; // eax
  double v3; // st7
  int v4; // ecx

  _memset(*(_DWORD *)(this + 0x14), 0, 4 * *(unsigned __int16 *)(this + 0xC)); /*0x812992*/
  _memset(*(_DWORD *)(this + 0x10), 0, 0x10 * *(unsigned __int16 *)(this + 0xC)); /*0x8129a5*/
  v2 = 0; /*0x8129aa*/
  if ( *(_WORD *)(this + 0xC) ) /*0x8129af*/
  {
    v3 = flt_A418D8; /*0x8129b5*/
    v4 = 0; /*0x8129bb*/
    do /*0x8129d0*/
    {
      *(float *)(*(_DWORD *)(this + 0x10) + v4 + 8) = v3; /*0x8129c0*/
      ++v2; /*0x8129c8*/
      v4 += 0x10; /*0x8129cb*/
    }
    while ( v2 < *(unsigned __int16 *)(this + 0xC) ); /*0x8129d0*/
  }
  unk_B4334C -= *(unsigned __int16 *)(this + 0xE); /*0x8129d8*/
  *(_WORD *)(this + 0xE) = 0; /*0x8129de*/
  sub_8126D0(this); /*0x8129e7*/
}
