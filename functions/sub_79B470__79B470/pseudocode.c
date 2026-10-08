// Exception-safe uninitialized_copy for SFrondTexture. Normal path placement-copy-constructs [first,last) and returns destination end; the SEH cleanup landing path destroys the constructed prefix and rethrows.
// positive sp value has been detected, the output may be wrong!
OB_SFrondTexture_010201A0 *__cdecl OB_SFrondTexture_UninitializedCopy_010201A0(
        const OB_SFrondTexture_010201A0 *first,
        const OB_SFrondTexture_010201A0 *last,
        OB_SFrondTexture_010201A0 *destinationFirst)
{
  OB_SFrondTexture_010201A0 *currentDestination; // edi
  OB_SFrondTexture_010201A0 *cleanupCurrent; // esi
  int v7; // [esp-4h] [ebp-28h] BYREF
  OB_SFrondTexture_010201A0 *constructedBegin; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v9 = &v7; /*0x79b498*/
  currentDestination = destinationFirst; /*0x79b49b*/
  constructedBegin = destinationFirst; /*0x79b4a4*/
  v10 = 0; /*0x79b4a7*/
  while ( first != last ) /*0x79b4b2*/
  {
    OB_SFrondTexture_CopyCtor_010201A0(currentDestination++, first); /*0x79b4b6*/
    destinationFirst = currentDestination; /*0x79b4c1*/
    ++first; /*0x79b4c4*/
  }
  for ( cleanupCurrent = constructedBegin; cleanupCurrent != destinationFirst; ++cleanupCurrent ) /*0x79b4d1*/
    OB_SFrondTexture_Destroy_010201A0(cleanupCurrent); /*0x79b4d9*/
  ThrowException__(0, 0); /*0x79b4e9*/
}
