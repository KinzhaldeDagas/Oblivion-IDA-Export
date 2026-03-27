void __thiscall RefractionShader::~RefractionShader(RefractionShader *this)
{
  NiD3DVertexShader *v2; // edi
  NiD3DPixelShader *v3; // edi
  NiD3DPass *v4; // ecx
  UInt32 v6; // edi
  UInt32 v7; // edi
  UInt32 v8; // edi

  this->super.__vftable = (BSImageSpaceShaderVtbl *)&RefractionShader::`vftable';
  v2 = this->Vertex[0];
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v2 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v2)(v2, 1);
    this->Vertex[0] = 0;
  }
  v3 = this->Pixel[0];
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v3 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v3)(v3, 1);
    this->Pixel[0] = 0;
  }
  v4 = (NiD3DPass *)this->Unk90[1];
  if ( v4 )
  {
    if ( v4->RefCount-- == 1 )
      sub_7604D0(v4);
    this->Unk90[1] = 0;
  }
  v6 = this->Unk90[2];
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v6)(v6, 1);
    this->Unk90[2] = 0;
  }
  if ( dword_B474AC )
  {
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)dword_B474AC);
    v7 = dword_B474AC;
    if ( dword_B474AC )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      {
        if ( v7 )
          (**(void (__thiscall ***)(UInt32, int))v7)(v7, 1);
      }
      dword_B474AC = 0;
    }
  }
  v8 = this->Unk90[2];
  if ( v8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v8)(v8, 1);
  }
  _LN21(&this->Unk90[1], 4u, 1, (void (__thiscall *)(void *))sub_4027D0);
  _LN21(this->Pixel, 4u, 1, (void (__thiscall *)(void *))sub_7016A0);
  _LN21(this->Vertex, 4u, 1, (void (__thiscall *)(void *))sub_7016A0);
  BSImageSpaceShader::~BSImageSpaceShader(&this->super);
}
