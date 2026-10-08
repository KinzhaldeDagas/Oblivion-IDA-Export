// Low-level uninitialized_fill_n for trivial 0x38-byte SFrondVertex records. Oblivion call sites pass three effective operands plus three checked-iterator/debug operands that this body does not consume.
void __cdecl OB_SFrondVertex_UninitializedFillN_010201A0(
        OB_SFrondVertex_010201A0 *destination,
        unsigned int count,
        const OB_SFrondVertex_010201A0 *value,
        const void *debugOwner,
        const void *debugValue,
        unsigned int debugCookie)
{
  unsigned int i; // edx

  for ( i = count; i; ++destination ) /*0x79aa16*/
  {
    if ( destination ) /*0x79aa25*/
      qmemcpy(destination, value, sizeof(OB_SFrondVertex_010201A0)); /*0x79aa30*/
    --i; /*0x79aa32*/
  }
}
