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

  this->super.__vftable = (BSShaderVtbl *)&ParticleShader::`vftable'; /*0x7e3bfb*/
  v2 = InterlockedDecrement; /*0x7e3c06*/
  if ( unk_B46014 ) /*0x7e3c01*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))unk_B46014; /*0x7e3c1a*/
    if ( !v2((volatile LONG *)(unk_B46014 + 4)) ) /*0x7e3c20*/
    {
      if ( v3 ) /*0x7e3c28*/
        (**v3)(v3, 1); /*0x7e3c32*/
    }
    unk_B46014 = 0; /*0x7e3c34*/
  }
  FormHeapFree(this->Unk7C[1]); /*0x7e3c41*/
  this->Unk7C[1] = 0; /*0x7e3c46*/
  v4 = (NiD3DPass *)this->Unk7C[2]; /*0x7e3c4c*/
  if ( v4 ) /*0x7e3c57*/
  {
    v5 = v4->RefCount-- == 1; /*0x7e3c59*/
    if ( v5 ) /*0x7e3c5d*/
      NiD3DPass_ReleaseToPool(v4); /*0x7e3c5f*/
    this->Unk7C[2] = 0; /*0x7e3c64*/
  }
  v6 = this->Vertex[0]; /*0x7e3c6a*/
  if ( v6 ) /*0x7e3c72*/
  {
    if ( !v2((volatile LONG *)v6 + 1) ) /*0x7e3c78*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v6)(v6, 1); /*0x7e3c8a*/
    this->Vertex[0] = 0; /*0x7e3c8c*/
  }
  v7 = this->Pixel[0]; /*0x7e3c92*/
  if ( v7 ) /*0x7e3c9a*/
  {
    if ( !v2((volatile LONG *)v7 + 1) ) /*0x7e3ca0*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v7)(v7, 1); /*0x7e3cb2*/
    this->Pixel[0] = 0; /*0x7e3cb4*/
  }
  v8 = this->Pixel[0]; /*0x7e3cba*/
  if ( v8 ) /*0x7e3cc7*/
  {
    if ( !v2((volatile LONG *)v8 + 1) ) /*0x7e3ccd*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v8)(v8, 1); /*0x7e3cdf*/
  }
  v9 = this->Vertex[0]; /*0x7e3ce1*/
  if ( v9 ) /*0x7e3cee*/
  {
    if ( !v2((volatile LONG *)v9 + 1) ) /*0x7e3cf4*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v9)(v9, 1); /*0x7e3d06*/
  }
  v10 = (NiD3DPass *)this->Unk7C[2]; /*0x7e3d08*/
  if ( v10 ) /*0x7e3d14*/
  {
    v5 = v10->RefCount-- == 1; /*0x7e3d16*/
    if ( v5 ) /*0x7e3d1a*/
      NiD3DPass_ReleaseToPool(v10); /*0x7e3d1c*/
  }
  BSShader::~BSShader(&this->super); /*0x7e3d2b*/
}
