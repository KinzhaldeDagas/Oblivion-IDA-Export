// Exception-safe uninitialized deep copy of 0x54-byte SIdvLeafTexture records. Normal completion returns destination end; the separate SEH landing path destroys the constructed prefix and rethrows.
OB_SIdvLeafTexture_010201A0 *__cdecl OB_SIdvLeafTexture_UninitializedCopy_010201A0(
        const OB_SIdvLeafTexture_010201A0 *first,
        const OB_SIdvLeafTexture_010201A0 *last,
        OB_SIdvLeafTexture_010201A0 *destinationFirst)
{
  OB_SIdvLeafTexture_010201A0 *currentDestination; // esi
  OB_SIdvLeafTexture_010201A0 *cleanupCurrent; // esi
  int v7; // [esp+0h] [ebp-28h] BYREF
  void *v8; // [esp+10h] [ebp-18h]
  OB_SIdvLeafTexture_010201A0 *constructedBegin; // [esp+14h] [ebp-14h]
  int *v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v10 = &v7; /*0x7a3bf8*/
  currentDestination = destinationFirst; /*0x7a3bfb*/
  constructedBegin = destinationFirst; /*0x7a3c03*/
  v11 = 0; /*0x7a3c06*/
  while ( first != last ) /*0x7a3c13*/
  {
    v8 = currentDestination; /*0x7a3c18*/
    LOBYTE(v11) = 1; /*0x7a3c1d*/
    if ( currentDestination ) /*0x7a3c21*/
      OB_SIdvLeafTexture_CopyCtor_010201A0(currentDestination, first); /*0x7a3c26*/
    ++currentDestination; /*0x7a3c2b*/
    LOBYTE(v11) = 0; /*0x7a3c2e*/
    destinationFirst = currentDestination; /*0x7a3c31*/
    ++first; /*0x7a3c34*/
  }
  for ( cleanupCurrent = constructedBegin; cleanupCurrent != destinationFirst; ++cleanupCurrent )// SEH-only cleanup landing path: destroy the prefix already copy-constructed, then rethrow. Normal flow branches to 0x7A3C5E. /*0x7a3c41*/
    OB_SIdvLeafTexture_Destroy_010201A0(cleanupCurrent); /*0x7a3c49*/
  ThrowException__(0, 0); /*0x7a3c59*/
}
