// Remaps a serialized FormID's high-byte mod index through TESSaveLoad::modRefIDTable. Dynamic 0xFF IDs pass through; missing/out-of-range mods resolve to zero; low 24-bit object ID is preserved.
int __thiscall SaveLoad_ResolveFormID(TESSaveLoad *this, int a2)
{
  UInt8 *modRefIDTable; // edx
  UInt8 v3; // al

  modRefIDTable = this->modRefIDTable; /*0x452180*/
  if ( !modRefIDTable || HIBYTE(a2) == 0xFF ) /*0x452193*/
    return a2; /*0x4521bc*/
  if ( HIBYTE(a2) >= this->numMods ) /*0x452198*/
    return 0; /*0x452198*/
  v3 = modRefIDTable[HIBYTE(a2)]; /*0x45219d*/
  if ( v3 == 0xFF ) /*0x4521a2*/
    return 0; /*0x4521b6*/
  return (a2 & 0xFFFFFF) + (v3 << 0x18); /*0x4521b2*/
}
