void __thiscall HDRShader::~HDRShader(HDRShader *this)
{
  NiD3DPixelShader **Pixel; // edi
  int v3; // ebx
  NiD3DPixelShader *v4; // esi
  NiD3DPixelShader *v5; // esi
  NiD3DPass **passes; // esi
  int v7; // edi
  NiD3DPass *v8; // ecx
  UInt32 unk118; // esi
  LONG (__stdcall *v11)(volatile LONG *); // edi
  UInt32 unk11C; // esi
  BSRenderedTexture *v13; // esi
  UInt32 v14; // esi
  UInt32 v15; // esi

  this->__vftable = (HDRShaderVtbl *)&HDRShader::`vftable';
  Pixel = this->Pixel;
  v3 = 8;
  do
  {
    v4 = Pixel[0xFFFFFFF8];
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v4)(v4, 1);
      Pixel[0xFFFFFFF8] = 0;
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
  passes = this->passes;
  v7 = 0xD;
  do
  {
    v8 = *passes;
    if ( *passes )
    {
      if ( v8->RefCount-- == 1 )
        sub_7604D0(v8);
      *passes = 0;
    }
    ++passes;
    --v7;
  }
  while ( v7 );
  sub_7C1EE0(g_textureManager, dword_B43328);
  unk118 = this->unk118;
  v11 = InterlockedDecrement;
  if ( unk118 )
  {
    if ( !v11((volatile LONG *)(unk118 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk118)(unk118, 1);
    this->unk118 = 0;
  }
  unk11C = this->unk11C;
  if ( unk11C )
  {
    if ( !v11((volatile LONG *)(unk11C + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk11C)(unk11C, 1);
    this->unk11C = 0;
  }
  v13 = dword_B43328;
  if ( dword_B43328 )
  {
    if ( !v11((volatile LONG *)&v13->members) )
    {
      if ( v13 )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v13->vtbl)(v13, 1);
    }
    dword_B43328 = 0;
  }
  v14 = this->unk11C;
  if ( v14 )
  {
    if ( !v11((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v14)(v14, 1);
  }
  v15 = this->unk118;
  if ( v15 )
  {
    if ( !v11((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1);
  }
  _LN21(this->passes, 4u, 0xD, (void (__thiscall *)(void *))sub_4027D0);
  _LN21(this->Pixel, 4u, 8, (void (__thiscall *)(void *))sub_7016A0);
  _LN21(this->Vertex, 4u, 8, (void (__thiscall *)(void *))sub_7016A0);
  BSImageSpaceShader::~BSImageSpaceShader((BSImageSpaceShader *)this);
}
