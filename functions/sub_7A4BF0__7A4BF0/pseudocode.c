// Typed uninitialized-copy wrapper. The executable continues after the call and returns the constructed destination end; its former noreturn boundary was false.
OB_SIdvLeafTexture_010201A0 *__stdcall OB_stVector_SIdvLeafTexture_UninitializedCopyThunk_010201A0(
        const OB_SIdvLeafTexture_010201A0 *first,
        const OB_SIdvLeafTexture_010201A0 *last,
        OB_SIdvLeafTexture_010201A0 *destinationFirst)
{
  return OB_SIdvLeafTexture_UninitializedCopy_010201A0(first, last, destinationFirst);// Restored normal fall-through after uninitialized copy; returns the destination-end pointer with retn 0x0C. /*0x7a4c16*/
}
