// Typed uninitialized-fill wrapper returning destination+count. Its former noreturn boundary omitted the real arithmetic epilogue.
OB_SIdvLeafTexture_010201A0 *__stdcall OB_stVector_SIdvLeafTexture_UninitializedFillNThunk_010201A0(
        OB_SIdvLeafTexture_010201A0 *destination,
        unsigned int count,
        const OB_SIdvLeafTexture_010201A0 *value)
{
  OB_SIdvLeafTexture_UninitializedFillN_010201A0(destination, count, value); /*0x7a5ac2*/
  return &destination[count];                   // Restored normal fill-wrapper epilogue: compute destination + count*0x54 and return with retn 0x0C. /*0x7a5ad1*/
}
