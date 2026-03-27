void __thiscall WaterShaderHeightMap::~WaterShaderHeightMap(WaterShaderHeightMap *this)
{
  NiD3DPixelShader **Pixel; // edi
  int v3; // ebx
  NiD3DPixelShader *v4; // esi
  NiD3DVertexShader *Vertex; // esi
  LONG (__stdcall *v6)(volatile LONG *); // edi
  NiD3DPass *Unk0D4; // ecx
  bool v8; // zf
  BSRenderedTexture *Unk0F4; // esi
  BSRenderedTexture *Unk0F0; // esi
  BSRenderedTexture *Unk0EC; // esi
  BSRenderedTexture *Unk0E8; // esi
  BSRenderedTexture *Unk0E4; // esi
  BSRenderedTexture *Unk0E0; // esi
  BSRenderedTexture *Unk0DC; // esi
  BSRenderedTexture *Unk0D8; // esi
  NiD3DPass *v17; // ecx
  NiD3DVertexShader *v18; // esi

  this->__vftable = (BSImageSpaceShaderVtbl *)&WaterShaderHeightMap::`vftable';
  Pixel = this->Pixel;
  v3 = 7;
  do
  {
    v4 = *Pixel;
    if ( *Pixel )
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))v4)(v4, 1);
      }
      *Pixel = 0;
    }
    ++Pixel;
    --v3;
  }
  while ( v3 );
  Vertex = this->Vertex;
  v6 = InterlockedDecrement;
  if ( Vertex )
  {
    if ( !v6((volatile LONG *)Vertex + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))Vertex)(Vertex, 1);
    this->Vertex = 0;
  }
  Unk0D4 = (NiD3DPass *)this->Unk0D4;
  if ( Unk0D4 )
  {
    v8 = Unk0D4->RefCount-- == 1;
    if ( v8 )
      sub_7604D0(Unk0D4);
    this->Unk0D4 = 0;
  }
  Unk0F4 = this->Unk0F4;
  if ( Unk0F4 )
  {
    if ( !v6((volatile LONG *)&Unk0F4->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0F4->vtbl)(Unk0F4, 1);
  }
  Unk0F0 = this->Unk0F0;
  if ( Unk0F0 )
  {
    if ( !v6((volatile LONG *)&Unk0F0->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0F0->vtbl)(Unk0F0, 1);
  }
  Unk0EC = this->Unk0EC;
  if ( Unk0EC )
  {
    if ( !v6((volatile LONG *)&Unk0EC->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0EC->vtbl)(Unk0EC, 1);
  }
  Unk0E8 = this->Unk0E8;
  if ( Unk0E8 )
  {
    if ( !v6((volatile LONG *)&Unk0E8->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0E8->vtbl)(Unk0E8, 1);
  }
  Unk0E4 = this->Unk0E4;
  if ( Unk0E4 )
  {
    if ( !v6((volatile LONG *)&Unk0E4->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0E4->vtbl)(Unk0E4, 1);
  }
  Unk0E0 = this->Unk0E0;
  if ( Unk0E0 )
  {
    if ( !v6((volatile LONG *)&Unk0E0->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0E0->vtbl)(Unk0E0, 1);
  }
  Unk0DC = this->Unk0DC;
  if ( Unk0DC )
  {
    if ( !v6((volatile LONG *)&Unk0DC->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0DC->vtbl)(Unk0DC, 1);
  }
  Unk0D8 = this->Unk0D8;
  if ( Unk0D8 )
  {
    if ( !v6((volatile LONG *)&Unk0D8->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0D8->vtbl)(Unk0D8, 1);
  }
  v17 = (NiD3DPass *)this->Unk0D4;
  if ( v17 )
  {
    v8 = v17->RefCount-- == 1;
    if ( v8 )
      sub_7604D0(v17);
  }
  _LN21(this->Pixel, 4u, 7, (void (__thiscall *)(void *))sub_7016A0);
  v18 = this->Vertex;
  if ( v18 )
  {
    if ( !v6((volatile LONG *)v18 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v18)(v18, 1);
  }
  BSImageSpaceShader::~BSImageSpaceShader((BSImageSpaceShader *)this);
}
