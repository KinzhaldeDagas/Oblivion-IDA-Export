bool __thiscall sub_4C9880(int this)
{
  char v2; // al

  v2 = *(_BYTE *)(this + 0x24);
  return (v2 & 0x20) != 0 || (v2 & 0x40) != 0;
}
