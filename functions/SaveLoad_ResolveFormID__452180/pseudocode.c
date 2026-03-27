int __thiscall SaveLoad_ResolveFormID(TESSaveLoad *this, int a2)
{
  UInt8 *modRefIDTable; // edx
  UInt8 v3; // al

  modRefIDTable = this->modRefIDTable;
  if ( !modRefIDTable || HIBYTE(a2) == 0xFF )
    return a2;
  if ( HIBYTE(a2) >= this->numMods )
    return 0;
  v3 = modRefIDTable[HIBYTE(a2)];
  if ( v3 == 0xFF )
    return 0;
  return (a2 & 0xFFFFFF) + (v3 << 0x18);
}
