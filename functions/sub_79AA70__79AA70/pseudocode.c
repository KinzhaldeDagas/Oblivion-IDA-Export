// Thin backward-copy trampoline for overlap-safe initialized SFrondVertex movement; delegates to 0x79A890.
OB_SFrondVertex_010201A0 *__cdecl OB_SFrondVertex_CopyBackwardThunk_010201A0(
        OB_SFrondVertex_010201A0 *first,
        OB_SFrondVertex_010201A0 *last,
        OB_SFrondVertex_010201A0 *destinationLast)
{
  return OB_SFrondVertex_CopyBackward_010201A0(first, last, destinationLast); /*0x79aa9a*/
}
