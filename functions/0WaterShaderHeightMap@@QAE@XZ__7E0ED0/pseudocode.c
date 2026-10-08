WaterShaderHeightMap *__thiscall WaterShaderHeightMap::WaterShaderHeightMap(WaterShaderHeightMap *this)
{
  double v2; // st7
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  BSRenderedTexture *Unk0D8; // edi
  BSRenderedTexture *Unk0DC; // edi
  BSRenderedTexture *Unk0E0; // edi
  BSRenderedTexture *Unk0E4; // edi
  BSRenderedTexture *Unk0EC; // edi
  double v9; // st7
  float v11; // [esp+14h] [ebp-10h]

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this); /*0x7e0efb*/
  this->__vftable = (BSImageSpaceShaderVtbl *)&WaterShaderHeightMap::`vftable'; /*0x7e0f02*/
  this->Vertex = 0; /*0x7e0f0c*/
  ArrayConstructor( /*0x7e0f2c*/
    (char *)this->Pixel,
    4u,
    7,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  this->Unk0D4 = 0; /*0x7e0f31*/
  this->Unk0D8 = 0; /*0x7e0f37*/
  this->Unk0DC = 0; /*0x7e0f3d*/
  this->Unk0E0 = 0; /*0x7e0f43*/
  this->Unk0E4 = 0; /*0x7e0f49*/
  this->Unk0E8 = 0; /*0x7e0f4f*/
  this->Unk0EC = 0; /*0x7e0f55*/
  this->Unk0F0 = 0; /*0x7e0f5b*/
  this->Unk0F4 = 0; /*0x7e0f61*/
  v2 = flt_A31E2C; /*0x7e0f67*/
  v3 = InterlockedDecrement; /*0x7e0f6d*/
  this->super.super.super.IsInitialized = 1; /*0x7e0f73*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0x73]) = this; /*0x7e0f77*/
  this->CurrentPixelIndex = 0; /*0x7e0f7d*/
  OB_ShaderConstantStorage_010201A0[0x6C] = v2; /*0x7e0f83*/
  OB_ShaderConstantStorage_010201A0[0x6B] = flt_A430CC; /*0x7e0f94*/
  OB_ShaderConstantStorage_010201A0[0x71] = kHeadBodyNormalMatchRadius; /*0x7e0fa0*/
  OB_ShaderConstantStorage_010201A0[0x70] = 1.0; /*0x7e0fa8*/
  Unk0D8 = this->Unk0D8; /*0x7e0fae*/
  if ( Unk0D8 ) /*0x7e0fb6*/
  {
    if ( !v3((volatile LONG *)&Unk0D8->members) ) /*0x7e0fbc*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0D8->vtbl)(Unk0D8, 1); /*0x7e0fce*/
    this->Unk0D8 = 0; /*0x7e0fd0*/
  }
  Unk0DC = this->Unk0DC; /*0x7e0fd6*/
  if ( Unk0DC ) /*0x7e0fde*/
  {
    if ( !v3((volatile LONG *)&Unk0DC->members) ) /*0x7e0fe4*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0DC->vtbl)(Unk0DC, 1); /*0x7e0ff6*/
    this->Unk0DC = 0; /*0x7e0ff8*/
  }
  Unk0E0 = this->Unk0E0; /*0x7e0ffe*/
  if ( Unk0E0 ) /*0x7e1006*/
  {
    if ( !v3((volatile LONG *)&Unk0E0->members) ) /*0x7e100c*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0E0->vtbl)(Unk0E0, 1); /*0x7e101e*/
    this->Unk0E0 = 0; /*0x7e1020*/
  }
  Unk0E4 = this->Unk0E4; /*0x7e1026*/
  if ( Unk0E4 ) /*0x7e102e*/
  {
    if ( !v3((volatile LONG *)&Unk0E4->members) ) /*0x7e1034*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0E4->vtbl)(Unk0E4, 1); /*0x7e1046*/
    this->Unk0E4 = 0; /*0x7e1048*/
  }
  Unk0EC = this->Unk0EC; /*0x7e104e*/
  if ( Unk0EC ) /*0x7e1056*/
  {
    if ( !v3((volatile LONG *)&Unk0EC->members) ) /*0x7e105c*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0EC->vtbl)(Unk0EC, 1); /*0x7e106e*/
    this->Unk0EC = 0; /*0x7e1070*/
  }
  *(float *)&this->Time = 0.0; /*0x7e1078*/
  this->fPassNum = 0.0; /*0x7e107e*/
  if ( LOBYTE(OB_ShaderConstantStorage_010201A0[0x6F]) ) /*0x7e1084*/
  {
    LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) = 0x100; /*0x7e108c*/
    LODWORD(OB_ShaderConstantStorage_010201A0[0x6E]) = 8; /*0x7e1096*/
  }
  else
  {
    LODWORD(OB_ShaderConstantStorage_010201A0[0x6D]) = 0x80; /*0x7e10a2*/
    LODWORD(OB_ShaderConstantStorage_010201A0[0x6E]) = 7; /*0x7e10ac*/
  }
  v9 = (double)SLODWORD(OB_ShaderConstantStorage_010201A0[0x6D]); /*0x7e10b6*/
  BYTE1(OB_ShaderConstantStorage_010201A0[0x6F]) = 1; /*0x7e10bc*/
  v11 = 1.0 / v9; /*0x7e10c9*/
  OB_ShaderConstantStorage_010201A0[0x74] = v11; /*0x7e10d1*/
  OB_ShaderConstantStorage_010201A0[0x75] = v11; /*0x7e10d7*/
  OB_ShaderConstantStorage_010201A0[0x76] = v11; /*0x7e10dd*/
  OB_ShaderConstantStorage_010201A0[0x77] = v11; /*0x7e10e3*/
  return this; /*0x7e10e9*/
}
