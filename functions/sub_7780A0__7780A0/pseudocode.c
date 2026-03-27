IDirect3DVertexDeclaration9 *__thiscall sub_7780A0(NiGeometryBufferData *this, UInt32 a2)
{
  IDirect3DVertexDeclaration9 *result; // eax

  this->FVF = a2;
  result = this->VertexDeclaration;
  if ( result )
  {
    result = (IDirect3DVertexDeclaration9 *)result->lpVtbl->Release(result);
    this->VertexDeclaration = 0;
  }
  return result;
}
