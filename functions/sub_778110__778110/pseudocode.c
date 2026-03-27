void __thiscall sub_778110(NiGeometryBufferData *this)
{
  UInt32 i; // edi
  IDirect3DIndexBuffer9 *IB; // eax
  IDirect3DVertexDeclaration9 *VertexDeclaration; // esi

  if ( this->GeometryGroup )
  {
    for ( i = 0; i < this->StreamCount; ++i )
      this->GeometryGroup->vtbl->ReleaseChip(this->GeometryGroup, this, i);
  }
  IB = this->IB;
  this->IBSize = 0;
  if ( IB )
  {
    IB->lpVtbl->Release(IB);
    this->IB = 0;
  }
  FormHeapFree((unsigned int)this->VBChip);
  FormHeapFree((unsigned int)this->VertexStride);
  VertexDeclaration = this->VertexDeclaration;
  if ( VertexDeclaration )
    VertexDeclaration->lpVtbl->Release(VertexDeclaration);
}
