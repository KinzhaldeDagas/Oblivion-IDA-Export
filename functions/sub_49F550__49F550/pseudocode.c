// Returns native serialized BSAnimGroupSequence state size: 20 bytes for save versions >= 0x71, otherwise 24 bytes.
int BSAnimGroupSequence_GetSaveStateSize()
{
  int v0; // eax

  v0 = 8; /*0x49f55a*/
  if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x71u ) /*0x49f55f*/
    v0 = 0xC; /*0x49f561*/
  return v0 + 0xC; /*0x49f569*/
}
