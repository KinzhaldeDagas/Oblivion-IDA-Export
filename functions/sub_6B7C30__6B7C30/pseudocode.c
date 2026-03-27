void __thiscall sub_6B7C30(int this)
{
  double v1; // st6
  double v2; // st7
  int v4; // ecx

  v4 = *(_DWORD *)(this + 0xC);
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 0x25) & 8) == 0 )
    {
      sub_5308D0(v4);
      sub_531470(*(TESForm **)(this + 0xC), v1, v2, *(TESObjectREFR **)(this + 0x18));
    }
  }
}
