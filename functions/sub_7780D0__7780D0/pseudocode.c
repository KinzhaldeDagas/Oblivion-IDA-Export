// MoonSugarEffect decode: NiGeometryBufferData SetVertexDeclaration-style input ownership. Releases the previous declaration, AddRefs the new one, stores it, and clears FVF. World mask shaders must not mutate this unless they own/repacked the BuffData layout.
IDirect3DVertexDeclaration9 *__thiscall sub_7780D0(NiGeometryBufferData *this, IDirect3DVertexDeclaration9 *a2)
{
  IDirect3DVertexDeclaration9 *result; // eax

  result = this->VertexDeclaration; /*0x7780d3*/
  if ( a2 != result ) /*0x7780dd*/
  {
    if ( result ) /*0x7780e1*/
      result = (IDirect3DVertexDeclaration9 *)result->lpVtbl->Release(result); /*0x7780e9*/
    this->VertexDeclaration = a2; /*0x7780ed*/
    if ( a2 ) /*0x7780f0*/
      result = (IDirect3DVertexDeclaration9 *)a2->lpVtbl->AddRef(a2); /*0x7780f8*/
  }
  this->FVF = 0; /*0x7780fb*/
  return result; /*0x7780fa*/
}
