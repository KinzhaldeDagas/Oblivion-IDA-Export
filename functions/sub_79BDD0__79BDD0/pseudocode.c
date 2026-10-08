// Thin checked/STL trampoline for destruction of an SFrondTexture range.
void __stdcall OB_SFrondTexture_DestroyRangeThunk_010201A0(
        OB_SFrondTexture_010201A0 *first,
        OB_SFrondTexture_010201A0 *last)
{
  OB_SFrondTexture_DestroyRange_010201A0(first, last); /*0x79bde0*/
}
