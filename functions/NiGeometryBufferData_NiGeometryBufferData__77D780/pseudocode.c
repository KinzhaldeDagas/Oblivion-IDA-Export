NiGeometryBufferData *__thiscall NiGeometryBufferData::NiGeometryBufferData(NiGeometryBufferData *this)
{
  this->Flags = 0;
  this->GeometryGroup = 0;
  this->FVF = 0;
  this->VertexDeclaration = 0;
  this->SoftwareVP = 0;
  this->VertCount = 0;
  this->MaxVertCount = 0;
  this->StreamCount = 0;
  this->VertexStride = 0;
  this->VBChip = 0;
  this->IndexCount = 0;
  this->IBSize = 0;
  this->IB = 0;
  this->BaseVertexIndex = 0;
  this->PrimitiveType = D3DPT_TRIANGLELIST;
  this->TriCount = 0;
  this->MaxTriCount = 0;
  this->NumArrays = 0;
  this->ArrayLengths = 0;
  this->IndexArray = 0;
  return this;
}
