bool __thiscall sub_4CA6A0(int this)
{
  bool result; // al
  _DWORD *v2; // ecx

  result = 1;
  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
  {
    if ( (*(_DWORD *)(this + 8) & 0x80000) != 0 )
      return result;
  }
  else
  {
    v2 = *(_DWORD **)(this + 0x50);
    if ( v2 )
      return sub_4D7000(v2);
  }
  return 0;
}
