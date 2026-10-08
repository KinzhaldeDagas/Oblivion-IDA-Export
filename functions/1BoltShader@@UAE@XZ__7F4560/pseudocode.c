void __thiscall BoltShader::~BoltShader(BoltShader *this)
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

  this->super.__vftable = (BSShaderVtbl *)&BoltShader::`vftable'; /*0x7f458b*/
  v2 = InterlockedDecrement; /*0x7f4596*/
  if ( unk_B4690C ) /*0x7f4591*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))unk_B4690C; /*0x7f45aa*/
    if ( !v2((volatile LONG *)(unk_B4690C + 4)) ) /*0x7f45b0*/
    {
      if ( v3 ) /*0x7f45b8*/
        (**v3)(v3, 1); /*0x7f45c2*/
    }
    unk_B4690C = 0; /*0x7f45c4*/
  }
  FormHeapFree(this->Unk00[1]); /*0x7f45d1*/
  this->Unk00[1] = 0; /*0x7f45d6*/
  v4 = (NiD3DPass *)this->Unk00[0x3F]; /*0x7f45dc*/
  if ( v4 ) /*0x7f45e7*/
  {
    v5 = v4->RefCount-- == 1; /*0x7f45e9*/
    if ( v5 ) /*0x7f45ed*/
      NiD3DPass_ReleaseToPool(v4); /*0x7f45ef*/
    this->Unk00[0x3F] = 0; /*0x7f45f4*/
  }
  v6 = this->Vertex[0]; /*0x7f45fa*/
  if ( v6 ) /*0x7f4602*/
  {
    if ( !v2((volatile LONG *)v6 + 1) ) /*0x7f4608*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v6)(v6, 1); /*0x7f461a*/
    this->Vertex[0] = 0; /*0x7f461c*/
  }
  v7 = this->Pixel[0]; /*0x7f4622*/
  if ( v7 ) /*0x7f462a*/
  {
    if ( !v2((volatile LONG *)v7 + 1) ) /*0x7f4630*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v7)(v7, 1); /*0x7f4642*/
    this->Pixel[0] = 0; /*0x7f4644*/
  }
  v8 = this->Pixel[0]; /*0x7f464a*/
  if ( v8 ) /*0x7f4657*/
  {
    if ( !v2((volatile LONG *)v8 + 1) ) /*0x7f465d*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v8)(v8, 1); /*0x7f466f*/
  }
  v9 = this->Vertex[0]; /*0x7f4671*/
  if ( v9 ) /*0x7f467e*/
  {
    if ( !v2((volatile LONG *)v9 + 1) ) /*0x7f4684*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v9)(v9, 1); /*0x7f4696*/
  }
  v10 = (NiD3DPass *)this->Unk00[0x3F]; /*0x7f4698*/
  if ( v10 ) /*0x7f46a4*/
  {
    v5 = v10->RefCount-- == 1; /*0x7f46a6*/
    if ( v5 ) /*0x7f46aa*/
      NiD3DPass_ReleaseToPool(v10); /*0x7f46ac*/
  }
  BSShader::~BSShader(&this->super); /*0x7f46bb*/
}
