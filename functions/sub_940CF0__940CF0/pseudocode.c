int __thiscall sub_940CF0(int this)
{
  unsigned __int8 v1; // al

  v1 = *(_BYTE *)(this + 0xD);
  if ( v1 == 0x18 )
    return 0xFFFFFFFF;
  if ( v1 == 0x19 )
    return sub_953130(*(_DWORD **)(this + 4));
  return *(__int16 *)(0xC * v1 + 0xAA1ED0);
}
