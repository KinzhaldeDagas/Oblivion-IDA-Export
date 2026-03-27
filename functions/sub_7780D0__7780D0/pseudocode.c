IDirect3DVertexDeclaration9 *__thiscall sub_7780D0(NiGeometryBufferData *this, IDirect3DVertexDeclaration9 *a2)
{
  IDirect3DVertexDeclaration9 *result; // eax

  result = this->VertexDeclaration;
  if ( a2 != result )
  {
    if ( result )
      result = (IDirect3DVertexDeclaration9 *)result->lpVtbl->Release(result);
    this->VertexDeclaration = a2;
    if ( a2 )
      result = (IDirect3DVertexDeclaration9 *)a2->lpVtbl->AddRef(a2);
  }
  this->FVF = 0;
  return result;
}
