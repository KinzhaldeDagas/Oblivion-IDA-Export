void __thiscall sub_812980(int this)
{
  int v2; // eax
  double v3; // st7
  int v4; // ecx

  _memset(*(_DWORD *)(this + 0x14), 0, 4 * *(unsigned __int16 *)(this + 0xC));
  _memset(*(_DWORD *)(this + 0x10), 0, 0x10 * *(unsigned __int16 *)(this + 0xC));
  v2 = 0;
  if ( *(_WORD *)(this + 0xC) )
  {
    v3 = flt_A418D8;
    v4 = 0;
    do
    {
      *(float *)(*(_DWORD *)(this + 0x10) + v4 + 8) = v3;
      ++v2;
      v4 += 0x10;
    }
    while ( v2 < *(unsigned __int16 *)(this + 0xC) );
  }
  dword_B4334C -= *(unsigned __int16 *)(this + 0xE);
  *(_WORD *)(this + 0xE) = 0;
  sub_8126D0(this);
}
