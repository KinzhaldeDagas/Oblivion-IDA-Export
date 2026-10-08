//
// Verified 2026-10-01: atexit handler registered by76CE40. If B42574 sentinel is nonnull, decrements pass+60 and calls7604D0 on zero. This is a real shutdown lifetime registration, not equivalent to just setting B42578 bit0.
void __cdecl NiD3DPassArray_DestroyEmptySentinel()
{
  NiD3DPass *v0; // eax

  v0 = NiD3DPassArray_EmptySentinel; /*0xa26dc0*/
  if ( NiD3DPassArray_EmptySentinel ) /*0xa26dc7*/
  {
    --NiD3DPassArray_EmptySentinel->RefCount; /*0xa26dc9*/
    if ( !v0->RefCount ) /*0xa26dd2*/
      NiD3DPass_ReleaseToPool(v0); /*0xa26dd7*/
  }
}
