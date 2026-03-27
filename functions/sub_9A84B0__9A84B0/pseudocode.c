NiD3DShaderConstantMapEntry *__thiscall sub_9A84B0(NiD3DShaderConstantMapEntry *this)
{
  this->_vtbl = &NiRefObject::`vftable';
  this->Unk04 = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  this->_vtbl = &NiD3DShaderConstantMapEntry::`vftable';
  LOBYTE(this->Unk08) = 1;
  this->Key = 0;
  this->Flags = 0;
  this->Extra = 0;
  this->ShaderRegister = 0;
  this->RegisterCount = 0;
  this->VariableName = 0;
  this->DataSize = 0;
  this->DataStride = 0;
  this->DataSource = 0;
  this->Unk34 = 0;
  if ( !byte_B4295B )
    sub_783C70();
  if ( !byte_B4295C )
    sub_783D70();
  return this;
}
