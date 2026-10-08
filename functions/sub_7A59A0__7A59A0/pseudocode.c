// Exception-safe uninitialized fill of count compact leaf textures. The normal path returns; the SEH landing path destroys the constructed prefix and rethrows.
void __cdecl OB_SIdvLeafTexture_UninitializedFillN_010201A0(
        OB_SIdvLeafTexture_010201A0 *destination,
        unsigned int count,
        const OB_SIdvLeafTexture_010201A0 *value)
{
  OB_SIdvLeafTexture_010201A0 *currentDestination; // esi
  OB_SIdvLeafTexture_010201A0 *cleanupCurrent; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  OB_SIdvLeafTexture_010201A0 *constructedBegin; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6; /*0x7a59c8*/
  currentDestination = destination; /*0x7a59cb*/
  constructedBegin = destination; /*0x7a59d3*/
  v10 = 0; /*0x7a59d6*/
  while ( count ) /*0x7a59e2*/
  {
    v7 = currentDestination; /*0x7a59e7*/
    LOBYTE(v10) = 1; /*0x7a59ec*/
    if ( currentDestination ) /*0x7a59f0*/
      OB_SIdvLeafTexture_CopyCtor_010201A0(currentDestination, value); /*0x7a59f8*/
    --count; /*0x7a59fd*/
    ++currentDestination; /*0x7a5a00*/
    LOBYTE(v10) = 0; /*0x7a5a03*/
    destination = currentDestination; /*0x7a5a06*/
  }
  for ( cleanupCurrent = constructedBegin; cleanupCurrent != destination; ++cleanupCurrent )// SEH-only cleanup landing path: destroy the prefix already fill-constructed, then rethrow. Normal flow branches to 0x7A5A30. /*0x7a5a13*/
    OB_SIdvLeafTexture_Destroy_010201A0(cleanupCurrent); /*0x7a5a1b*/
  ThrowException__(0, 0); /*0x7a5a2b*/
}
