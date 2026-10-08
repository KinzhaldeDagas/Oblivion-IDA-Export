NiD3DShaderConstantMapEntry *__thiscall sub_9A84B0(NiD3DShaderConstantMapEntry *this)
{
  this->_vtbl = &NiRefObject::`vftable'; /*0x9a84bb*/
  this->RefCount = 0; /*0x9a84c1*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x9a84c4*/
  this->_vtbl = &NiD3DShaderConstantMapEntry::`vftable'; /*0x9a84ca*/
  LOBYTE(this->Unk08) = 1; /*0x9a84d0*/
  this->Key = 0; /*0x9a84d4*/
  this->Flags = 0; /*0x9a84d7*/
  this->Extra = 0; /*0x9a84da*/
  this->ShaderRegister = 0; /*0x9a84dd*/
  this->RegisterCount = 0; /*0x9a84e0*/
  this->VariableName = 0; /*0x9a84e3*/
  this->DataSize = 0; /*0x9a84e6*/
  this->DataStride = 0; /*0x9a84e9*/
  this->DataSource = 0; /*0x9a84ec*/
  this->Unk34 = 0; /*0x9a84ef*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a84f8*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a84fa*/
  if ( !unk_B4295C ) /*0x9a8505*/
    sub_783D70(); /*0x9a8507*/
  return this; /*0x9a850e*/
}
