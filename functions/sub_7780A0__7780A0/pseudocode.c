// MoonSugarEffect decode: NiGeometryBufferData SetFVF-style input ownership. Stores FVF and releases any cached IDirect3DVertexDeclaration9, so callers switch the buffer to fixed-function input mode.
IDirect3DVertexDeclaration9 *__thiscall sub_7780A0(NiGeometryBufferData *this, UInt32 a2)
{
  IDirect3DVertexDeclaration9 *result; // eax

  this->FVF = a2; /*0x7780a7*/
  result = this->VertexDeclaration; /*0x7780aa*/
  if ( result ) /*0x7780af*/
  {
    result = (IDirect3DVertexDeclaration9 *)result->lpVtbl->Release(result); /*0x7780b7*/
    this->VertexDeclaration = 0; /*0x7780b9*/
  }
  return result; /*0x7780c0*/
}
