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

  this->__vftable = (BSImageSpaceShaderVtbl *)&WaterShaderHeightMap::`vftable'; /*0x7df7cb*/
  Pixel = this->Pixel; /*0x7df7da*/
  v3 = 7; /*0x7df7e0*/
  do /*0x7df813*/
  {
    v4 = *Pixel; /*0x7df7e5*/
    if ( *Pixel ) /*0x7df7e5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) ) /*0x7df7ef*/
      {
        if ( v4 ) /*0x7df7fb*/
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))v4)(v4, 1); /*0x7df805*/
      }
      *Pixel = 0; /*0x7df807*/
    }
    ++Pixel; /*0x7df80d*/
    --v3; /*0x7df810*/
  }
  while ( v3 ); /*0x7df813*/
  Vertex = this->Vertex; /*0x7df815*/
  v6 = InterlockedDecrement; /*0x7df81d*/
  if ( Vertex ) /*0x7df823*/
  {
    if ( !v6((volatile LONG *)Vertex + 1) ) /*0x7df829*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))Vertex)(Vertex, 1); /*0x7df83b*/
    this->Vertex = 0; /*0x7df83d*/
  }
  Unk0D4 = (NiD3DPass *)this->Unk0D4; /*0x7df847*/
  if ( Unk0D4 ) /*0x7df852*/
  {
    v8 = Unk0D4->RefCount-- == 1; /*0x7df854*/
    if ( v8 ) /*0x7df857*/
      NiD3DPass_ReleaseToPool(Unk0D4); /*0x7df859*/
    this->Unk0D4 = 0; /*0x7df85e*/
  }
  Unk0F4 = this->Unk0F4; /*0x7df868*/
  if ( Unk0F4 ) /*0x7df875*/
  {
    if ( !v6((volatile LONG *)&Unk0F4->members) ) /*0x7df87b*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0F4->vtbl)(Unk0F4, 1); /*0x7df88d*/
  }
  Unk0F0 = this->Unk0F0; /*0x7df88f*/
  if ( Unk0F0 ) /*0x7df89c*/
  {
    if ( !v6((volatile LONG *)&Unk0F0->members) ) /*0x7df8a2*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0F0->vtbl)(Unk0F0, 1); /*0x7df8b4*/
  }
  Unk0EC = this->Unk0EC; /*0x7df8b6*/
  if ( Unk0EC ) /*0x7df8c3*/
  {
    if ( !v6((volatile LONG *)&Unk0EC->members) ) /*0x7df8c9*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0EC->vtbl)(Unk0EC, 1); /*0x7df8db*/
  }
  Unk0E8 = this->Unk0E8; /*0x7df8dd*/
  if ( Unk0E8 ) /*0x7df8ea*/
  {
    if ( !v6((volatile LONG *)&Unk0E8->members) ) /*0x7df8f0*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0E8->vtbl)(Unk0E8, 1); /*0x7df902*/
  }
  Unk0E4 = this->Unk0E4; /*0x7df904*/
  if ( Unk0E4 ) /*0x7df911*/
  {
    if ( !v6((volatile LONG *)&Unk0E4->members) ) /*0x7df917*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0E4->vtbl)(Unk0E4, 1); /*0x7df929*/
  }
  Unk0E0 = this->Unk0E0; /*0x7df92b*/
  if ( Unk0E0 ) /*0x7df938*/
  {
    if ( !v6((volatile LONG *)&Unk0E0->members) ) /*0x7df93e*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0E0->vtbl)(Unk0E0, 1); /*0x7df950*/
  }
  Unk0DC = this->Unk0DC; /*0x7df952*/
  if ( Unk0DC ) /*0x7df95f*/
  {
    if ( !v6((volatile LONG *)&Unk0DC->members) ) /*0x7df965*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0DC->vtbl)(Unk0DC, 1); /*0x7df977*/
  }
  Unk0D8 = this->Unk0D8; /*0x7df979*/
  if ( Unk0D8 ) /*0x7df986*/
  {
    if ( !v6((volatile LONG *)&Unk0D8->members) ) /*0x7df98c*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk0D8->vtbl)(Unk0D8, 1); /*0x7df99e*/
  }
  v17 = (NiD3DPass *)this->Unk0D4; /*0x7df9a0*/
  if ( v17 ) /*0x7df9ad*/
  {
    v8 = v17->RefCount-- == 1; /*0x7df9af*/
    if ( v8 ) /*0x7df9b2*/
      NiD3DPass_ReleaseToPool(v17); /*0x7df9b4*/
  }
  _LN21((char *)this->Pixel, 4u, 7, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7df9ce*/
  v18 = this->Vertex; /*0x7df9d3*/
  if ( v18 ) /*0x7df9e0*/
  {
    if ( !v6((volatile LONG *)v18 + 1) ) /*0x7df9e6*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v18)(v18, 1); /*0x7df9f8*/
  }
  BSImageSpaceShader::~BSImageSpaceShader((BSImageSpaceShader *)this); /*0x7dfa00*/
}
