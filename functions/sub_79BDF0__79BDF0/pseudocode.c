// Checked/STL trampoline around forward SFrondTexture range assignment; returns destination end.
OB_SFrondTexture_010201A0 *__cdecl OB_SFrondTexture_CopyAssignRangeForwardThunk_010201A0(
        const OB_SFrondTexture_010201A0 *first,
        const OB_SFrondTexture_010201A0 *last,
        OB_SFrondTexture_010201A0 *destinationFirst)
{
  OB_SFrondTexture_CopyAssignRangeForward_010201A0(first, last, destinationFirst); /*0x79be1e*/
  return &destinationFirst[last - first]; /*0x79be3e*/
}
