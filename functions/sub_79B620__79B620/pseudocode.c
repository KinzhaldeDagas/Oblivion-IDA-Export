// Exception-safe uninitialized_fill_n for SFrondTexture. Placement-copy-constructs count records; the SEH cleanup landing path destroys the constructed prefix before rethrowing.
// positive sp value has been detected, the output may be wrong!
OB_SFrondTexture_010201A0 *__cdecl OB_SFrondTexture_UninitializedFillN_010201A0(
        OB_SFrondTexture_010201A0 *destination,
        unsigned int count,
        const OB_SFrondTexture_010201A0 *value)
{
  OB_SFrondTexture_010201A0 *currentDestination; // edi
  OB_SFrondTexture_010201A0 *cleanupCurrent; // esi
  int v7; // [esp-4h] [ebp-28h] BYREF
  OB_SFrondTexture_010201A0 *constructedBegin; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v9 = &v7; /*0x79b648*/
  currentDestination = destination; /*0x79b64b*/
  constructedBegin = destination; /*0x79b654*/
  v10 = 0; /*0x79b657*/
  while ( count ) /*0x79b662*/
  {
    OB_SFrondTexture_CopyCtor_010201A0(currentDestination, value); /*0x79b666*/
    --count; /*0x79b66e*/
    destination = ++currentDestination; /*0x79b674*/
  }
  for ( cleanupCurrent = constructedBegin; cleanupCurrent != destination; ++cleanupCurrent ) /*0x79b681*/
    OB_SFrondTexture_Destroy_010201A0(cleanupCurrent); /*0x79b689*/
  ThrowException__(0, 0); /*0x79b699*/
}
