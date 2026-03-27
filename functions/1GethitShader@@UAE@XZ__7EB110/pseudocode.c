void __thiscall GethitShader::~GethitShader(GethitShader *this)
{
  NiD3DPixelShader **Pixel; // edi
  int v3; // ebx
  NiD3DPixelShader *v4; // esi
  NiD3DPixelShader *v5; // esi
  NiD3DPass *v6; // ecx
  bool v7; // zf
  NiD3DPass *v8; // ecx

  this->super.__vftable = (BSImageSpaceShaderVtbl *)&GethitShader::`vftable';
  Pixel = this->Pixel;
  v3 = 3;
  do
  {
    v4 = Pixel[0xFFFFFFFD];
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v4)(v4, 1);
      Pixel[0xFFFFFFFD] = 0;
    }
    v5 = *Pixel;
    if ( *Pixel )
    {
      if ( !InterlockedDecrement((volatile LONG *)v5 + 1) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))v5)(v5, 1);
      }
      *Pixel = 0;
    }
    ++Pixel;
    --v3;
  }
  while ( v3 );
  v6 = (NiD3DPass *)this->UnkA8[1];
  if ( v6 )
  {
    v7 = v6->RefCount-- == 1;
    if ( v7 )
      sub_7604D0(v6);
  }
  v8 = (NiD3DPass *)this->UnkA8[0];
  if ( v8 )
  {
    v7 = v8->RefCount-- == 1;
    if ( v7 )
      sub_7604D0(v8);
  }
  _LN21(this->Pixel, 4u, 3, (void (__thiscall *)(void *))sub_7016A0);
  _LN21(this->Vertex, 4u, 3, (void (__thiscall *)(void *))sub_7016A0);
  BSImageSpaceShader::~BSImageSpaceShader(&this->super);
}
