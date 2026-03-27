void __thiscall ParticleShader::~ParticleShader(ParticleShader *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  void (__thiscall ***v3)(_DWORD, int); // edi
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DVertexShader *v6; // edi
  NiD3DPixelShader *v7; // edi
  NiD3DPixelShader *v8; // edi
  NiD3DVertexShader *v9; // edi
  NiD3DPass *v10; // ecx

  this->super.__vftable = (BSShaderVtbl *)&ParticleShader::`vftable';
  v2 = InterlockedDecrement;
  if ( dword_B46014 )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))dword_B46014;
    if ( !v2((volatile LONG *)(dword_B46014 + 4)) )
    {
      if ( v3 )
        (**v3)(v3, 1);
    }
    dword_B46014 = 0;
  }
  FormHeapFree(this->Unk7C[1]);
  this->Unk7C[1] = 0;
  v4 = (NiD3DPass *)this->Unk7C[2];
  if ( v4 )
  {
    v5 = v4->RefCount-- == 1;
    if ( v5 )
      sub_7604D0(v4);
    this->Unk7C[2] = 0;
  }
  v6 = this->Vertex[0];
  if ( v6 )
  {
    if ( !v2((volatile LONG *)v6 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v6)(v6, 1);
    this->Vertex[0] = 0;
  }
  v7 = this->Pixel[0];
  if ( v7 )
  {
    if ( !v2((volatile LONG *)v7 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v7)(v7, 1);
    this->Pixel[0] = 0;
  }
  v8 = this->Pixel[0];
  if ( v8 )
  {
    if ( !v2((volatile LONG *)v8 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v8)(v8, 1);
  }
  v9 = this->Vertex[0];
  if ( v9 )
  {
    if ( !v2((volatile LONG *)v9 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v9)(v9, 1);
  }
  v10 = (NiD3DPass *)this->Unk7C[2];
  if ( v10 )
  {
    v5 = v10->RefCount-- == 1;
    if ( v5 )
      sub_7604D0(v10);
  }
  BSShader::~BSShader(&this->super);
}
