// Pass225: Releases NiGeometryBufferData streams, index buffer, stream arrays, and vertex declaration before free.
// DX11 authority audit 2026-10-01: Non-deleting cleanup: remaining group ReleaseChip calls; IB+30 Release and IBSize+2C clear; frees VBChip+24 and VertexStride+20 arrays; vertex declaration+0C Release. Caller frees object storage separately. Critical lifetime distinction: buffer+4 is GeometryGroup, NOT NiRefObject refcount. Retaining VB/IB/declaration COM resources does not retain these native CPU metadata allocations. Ordinary removal reaches this after renderer/precache lock interval in 767860.
void __thiscall NiGeometryBufferData_Destroy(NiGeometryBufferData *this)
{
  UInt32 i; // edi
  IDirect3DIndexBuffer9 *IB; // eax
  IDirect3DVertexDeclaration9 *VertexDeclaration; // esi

  if ( this->GeometryGroup ) /*0x778113*/
  {
    for ( i = 0; i < this->StreamCount; ++i ) /*0x77811c*/
      this->GeometryGroup->vtbl->ReleaseChip(this->GeometryGroup, this, i); /*0x77812b*/
  }
  IB = this->IB; /*0x778136*/
  this->IBSize = 0; /*0x77813b*/
  if ( IB ) /*0x778142*/
  {
    IB->lpVtbl->Release(IB); /*0x77814a*/
    this->IB = 0; /*0x77814c*/
  }
  FormHeapFree((unsigned int)this->VBChip); /*0x778157*/
  FormHeapFree((unsigned int)this->VertexStride); /*0x778160*/
  VertexDeclaration = this->VertexDeclaration; /*0x778165*/
  if ( VertexDeclaration ) /*0x77816d*/
    VertexDeclaration->lpVtbl->Release(VertexDeclaration); /*0x778175*/
}
