// Exception-safe uninitialized_fill_n for outer-vector elements of type st_vector<SFrondGuide>. Each element is deep-copy-constructed; the unwind landing path destroys the constructed prefix.
void __cdecl OB_stVector_stVector_SFrondGuide_UninitializedFillN_010201A0(
        OB_stVector_SFrondGuide_010201A0 *destination,
        unsigned int count,
        const OB_stVector_SFrondGuide_010201A0 *value)
{
  OB_stVector_SFrondGuide_010201A0 *currentDestination; // esi
  OB_stVector_SFrondGuide_010201A0 *cleanupCurrent; // esi
  int v6; // [esp+0h] [ebp-28h] BYREF
  void *v7; // [esp+10h] [ebp-18h]
  OB_stVector_SFrondGuide_010201A0 *v8; // [esp+14h] [ebp-14h]
  int *v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+24h] [ebp-4h]

  v9 = &v6; /*0x7a0c48*/
  currentDestination = destination; /*0x7a0c4b*/
  v8 = destination; /*0x7a0c53*/
  v10 = 0; /*0x7a0c56*/
  while ( count ) /*0x7a0c62*/
  {
    v7 = currentDestination; /*0x7a0c67*/
    LOBYTE(v10) = 1; /*0x7a0c6c*/
    if ( currentDestination ) /*0x7a0c70*/
      OB_stVector_SFrondGuide_CopyCtor_010201A0(currentDestination, value); /*0x7a0c78*/
    --count; /*0x7a0c7d*/
    ++currentDestination; /*0x7a0c80*/
    LOBYTE(v10) = 0; /*0x7a0c83*/
    destination = currentDestination; /*0x7a0c86*/
  }
  for ( cleanupCurrent = v8; cleanupCurrent != destination; ++cleanupCurrent ) /*0x7a0c93*/
    OB_stVector_SFrondGuide_DestroyThunk_010201A0(cleanupCurrent); /*0x7a0c9b*/
  ThrowException__(0, 0); /*0x7a0cab*/
}
