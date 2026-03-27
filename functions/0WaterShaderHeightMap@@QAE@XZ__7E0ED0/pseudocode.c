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

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this);
  this->__vftable = (BSImageSpaceShaderVtbl *)&WaterShaderHeightMap::`vftable';
  this->Vertex = 0;
  ArrayConstructor(
    this->Pixel,
    4u,
    7,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  this->Unk0D4 = 0;
  this->Unk0D8 = 0;
  this->Unk0DC = 0;
  this->Unk0E0 = 0;
  this->Unk0E4 = 0;
  this->Unk0E8 = 0;
  this->Unk0EC = 0;
  this->Unk0F0 = 0;
  this->Unk0F4 = 0;
  v2 = flt_A31E2C;
  v3 = InterlockedDecrement;
  this->super.super.super.IsInitialized = 1;
  dword_B45FE0 = this;
  this->CurrentPixelIndex = 0;
  WaterShader_Velocity = v2;
  WaterShader_Direction = flt_A430CC;
  WaterShader_Amplitude = flt_A3D65C;
  WaterShader_Frequency = 1.0;
  Unk0D8 = this->Unk0D8;
  if ( Unk0D8 )
  {
    if ( !v3((volatile LONG *)&Unk0D8->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0D8->vtbl)(Unk0D8, 1);
    this->Unk0D8 = 0;
  }
  Unk0DC = this->Unk0DC;
  if ( Unk0DC )
  {
    if ( !v3((volatile LONG *)&Unk0DC->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0DC->vtbl)(Unk0DC, 1);
    this->Unk0DC = 0;
  }
  Unk0E0 = this->Unk0E0;
  if ( Unk0E0 )
  {
    if ( !v3((volatile LONG *)&Unk0E0->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0E0->vtbl)(Unk0E0, 1);
    this->Unk0E0 = 0;
  }
  Unk0E4 = this->Unk0E4;
  if ( Unk0E4 )
  {
    if ( !v3((volatile LONG *)&Unk0E4->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0E4->vtbl)(Unk0E4, 1);
    this->Unk0E4 = 0;
  }
  Unk0EC = this->Unk0EC;
  if ( Unk0EC )
  {
    if ( !v3((volatile LONG *)&Unk0EC->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0EC->vtbl)(Unk0EC, 1);
    this->Unk0EC = 0;
  }
  *(float *)&this->Time = 0.0;
  this->fPassNum = 0.0;
  if ( LocalWaterHiRes )
  {
    WaterSurfaceResolution = 0x100;
    widthStaticSquareForSomeSurface2log2__ = 8;
  }
  else
  {
    WaterSurfaceResolution = 0x80;
    widthStaticSquareForSomeSurface2log2__ = 7;
  }
  v9 = (double)WaterSurfaceResolution;
  boh_ = 1;
  v11 = 1.0 / v9;
  fResolution = v11;
  flt_B45FE8 = v11;
  flt_B45FEC = v11;
  flt_B45FF0 = v11;
  return this;
}
