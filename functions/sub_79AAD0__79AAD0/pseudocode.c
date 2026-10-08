// Checked/uninitialized-copy trampoline for SFrondVertex ranges; delegates to 0x79A9B0 and returns the constructed end.
OB_SFrondVertex_010201A0 *__stdcall OB_SFrondVertex_UninitializedCopyThunk_010201A0(
        const OB_SFrondVertex_010201A0 *first,
        const OB_SFrondVertex_010201A0 *last,
        OB_SFrondVertex_010201A0 *destinationFirst)
{
  return OB_SFrondVertex_UninitializedCopy_010201A0(first, last, destinationFirst); /*0x79aaf6*/
}
