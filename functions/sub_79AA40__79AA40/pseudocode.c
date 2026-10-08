// Thin forward-copy trampoline for initialized SFrondVertex ranges; delegates to 0x79A950.
OB_SFrondVertex_010201A0 *__cdecl OB_SFrondVertex_CopyForwardThunk_010201A0(
        OB_SFrondVertex_010201A0 *first,
        OB_SFrondVertex_010201A0 *last,
        OB_SFrondVertex_010201A0 *destinationFirst)
{
  return OB_SFrondVertex_CopyForward_010201A0(first, last, destinationFirst); /*0x79aa6a*/
}
