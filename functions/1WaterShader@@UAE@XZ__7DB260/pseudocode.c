void __thiscall WaterShader::~WaterShader(WaterShader *this)
{
  NiD3DVertexShader *v2; // esi
  UInt32 *Unk07C; // edi
  int v4; // ebx
  UInt32 v5; // esi
  NiD3DPass *v6; // ecx
  UInt32 v8; // esi
  LONG (__stdcall *v9)(volatile LONG *); // edi
  UInt32 v10; // esi
  UInt32 v11; // esi
  UInt32 v12; // esi
  UInt32 v13; // esi
  NiD3DVertexShader *v14; // esi
  NiD3DVertexShader *v15; // esi

  this->super.__vftable = (BSShaderVtbl *)&WaterShader::`vftable';
  v2 = this->Vertex[0];
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v2 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v2)(v2, 1);
    this->Vertex[0] = 0;
  }
  Unk07C = this->Unk07C;
  v4 = 0x10;
  do
  {
    v5 = Unk07C[0x12];
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v5)(v5, 1);
      Unk07C[0x12] = 0;
    }
    v6 = (NiD3DPass *)*Unk07C;
    if ( *Unk07C )
    {
      if ( v6->RefCount-- == 1 )
        sub_7604D0(v6);
      *Unk07C = 0;
    }
    ++Unk07C;
    --v4;
  }
  while ( v4 );
  v8 = this->Unk104[4];
  v9 = InterlockedDecrement;
  if ( v8 )
  {
    if ( !v9((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v8)(v8, 1);
  }
  v10 = this->Unk104[3];
  if ( v10 )
  {
    if ( !v9((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v10)(v10, 1);
  }
  v11 = this->Unk104[2];
  if ( v11 )
  {
    if ( !v9((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v11)(v11, 1);
  }
  v12 = this->Unk104[1];
  if ( v12 )
  {
    if ( !v9((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v12)(v12, 1);
  }
  v13 = this->Unk104[0];
  if ( v13 )
  {
    if ( !v9((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v13)(v13, 1);
  }
  _LN21(this->Pixel, 4u, 0x10, (void (__thiscall *)(void *))sub_7016A0);
  v14 = this->Vertex[1];
  if ( v14 )
  {
    if ( !v9((volatile LONG *)v14 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v14)(v14, 1);
  }
  v15 = this->Vertex[0];
  if ( v15 )
  {
    if ( !v9((volatile LONG *)v15 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v15)(v15, 1);
  }
  _LN21(this->Unk07C, 4u, 0x10, (void (__thiscall *)(void *))sub_4027D0);
  BSShader::~BSShader(&this->super);
}
