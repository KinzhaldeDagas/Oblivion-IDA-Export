void __thiscall sub_802DB0(int this)
{
  int v1; // eax
  int v2; // edx

  v1 = 0;
  if ( *(_WORD *)(this + 0xE) )
  {
    v2 = 0;
    do
    {
      *(float *)(*(_DWORD *)(this + 0x10) + v2 + 8) = 0.0;
      *(float *)(*(_DWORD *)(this + 0x10) + v2 + 0xC) = 0.0;
      *(_DWORD *)(*(_DWORD *)(this + 0x14) + 4 * v1++) = 0;
      v2 += 0x10;
    }
    while ( v1 < *(unsigned __int16 *)(this + 0xE) );
  }
  *(_WORD *)(this + 0xE) = 0;
  sub_802AE0(this);
}
