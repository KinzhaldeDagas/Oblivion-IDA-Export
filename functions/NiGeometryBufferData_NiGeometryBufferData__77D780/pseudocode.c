// Pass225: NiGeometryBufferData constructor for 0x50-byte screen-texture buffer cache.
NiGeometryBufferData *__thiscall NiGeometryBufferData::NiGeometryBufferData(NiGeometryBufferData *this)
{
  this->Flags = 0; /*0x77d784*/
  this->GeometryGroup = 0; /*0x77d786*/
  this->FVF = 0; /*0x77d789*/
  this->VertexDeclaration = 0; /*0x77d78c*/
  this->SoftwareVP = 0; /*0x77d78f*/
  this->VertCount = 0; /*0x77d792*/
  this->MaxVertCount = 0; /*0x77d795*/
  this->StreamCount = 0; /*0x77d798*/
  this->VertexStride = 0; /*0x77d79b*/
  this->VBChip = 0; /*0x77d79e*/
  this->IndexCount = 0; /*0x77d7a1*/
  this->IBSize = 0; /*0x77d7a4*/
  this->IB = 0; /*0x77d7a7*/
  this->BaseVertexIndex = 0; /*0x77d7aa*/
  this->PrimitiveType = D3DPT_TRIANGLELIST; /*0x77d7ad*/
  this->TriCount = 0; /*0x77d7b4*/
  this->MaxTriCount = 0; /*0x77d7b7*/
  this->NumArrays = 0; /*0x77d7ba*/
  this->ArrayLengths = 0; /*0x77d7bd*/
  this->IndexArray = 0; /*0x77d7c0*/
  return this; /*0x77d7c3*/
}
