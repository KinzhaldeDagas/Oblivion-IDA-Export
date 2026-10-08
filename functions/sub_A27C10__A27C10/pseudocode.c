// DX11 lifecycle obligation 2026-10-01: SetAt lazily tests DWORD BAAA94 bit0, sets it, initializes BAAA90 to null and registers A27C10 with atexit. A27C10 decrements/releases that sentinel if nonnull. A bulk permutation must not fake this side effect by setting the flag alone. Current commit planning requires bit0 initialized and sentinel null whenever the projected native sequence performs a swap; a no-swap sequence does not require SetAt initialization.
void __cdecl NiTArray_ConstantMapEntry_ReleaseEmptySentinel()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))g_ConstantMapArrayEmptyEntry; /*0xa27c11*/
  if ( g_ConstantMapArrayEmptyEntry ) /*0xa27c19*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(g_ConstantMapArrayEmptyEntry + 4)) ) /*0xa27c1f*/
    {
      if ( v0 ) /*0xa27c2b*/
        (**v0)(v0, 1); /*0xa27c35*/
    }
  }
}
