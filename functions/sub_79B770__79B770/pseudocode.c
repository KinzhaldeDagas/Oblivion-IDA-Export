// Checked/STL trampoline around backward SFrondTexture range assignment; returns destination begin.
OB_SFrondTexture_010201A0 *__cdecl OB_SFrondTexture_CopyAssignRangeBackwardThunk_010201A0(
        const OB_SFrondTexture_010201A0 *first,
        const OB_SFrondTexture_010201A0 *last,
        OB_SFrondTexture_010201A0 *destinationLast)
{
  OB_SFrondTexture_CopyAssignRangeBackward_010201A0(first, last, destinationLast); /*0x79b79e*/
  return &destinationLast[-(last - first)]; /*0x79b7c0*/
}
