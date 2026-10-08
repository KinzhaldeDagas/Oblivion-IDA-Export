BoltShader *__thiscall BoltShader::BoltShader(BoltShader *this, NiDX9ShaderDeclaration *a2)
{
  double v3; // st7
  NiD3DPass *v4; // ecx
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiD3DVertexShader *v7; // edi
  NiD3DPixelShader *v8; // edi
  int v9; // eax
  double v10; // st7
  UInt32 v11; // eax
  UInt32 v13; // [esp+28h] [ebp-20h]
  UInt32 v14; // [esp+2Ch] [ebp-1Ch]
  UInt32 v15; // [esp+30h] [ebp-18h]
  UInt32 v16; // [esp+34h] [ebp-14h]
  float a2a; // [esp+4Ch] [ebp+4h]
  float a2b; // [esp+4Ch] [ebp+4h]

  BSShader::BSShader(&this->super); /*0x7f38bd*/
  v3 = 0.0; /*0x7f38c2*/
  this->super.__vftable = (BSShaderVtbl *)&BoltShader::`vftable'; /*0x7f38c4*/
  *(float *)&this->Unk00[0x2B] = 0.0; /*0x7f38ca*/
  *(float *)&this->Unk00[0x2C] = 0.0; /*0x7f38d0*/
  *(float *)&this->Unk00[0x2D] = 0.0; /*0x7f38d8*/
  *(float *)&this->Unk00[0x2E] = 0.0; /*0x7f38e2*/
  this->Unk00[0x3F] = 0; /*0x7f38e8*/
  *(float *)&this->Unk00[0x40] = 0.0; /*0x7f38ee*/
  *(float *)&this->Unk00[0x41] = 0.0; /*0x7f38f4*/
  *(float *)&this->Unk00[0x42] = 0.0; /*0x7f38fa*/
  *(float *)&this->Unk00[0x43] = 0.0; /*0x7f3900*/
  *(float *)&this->Unk00[0x44] = 0.0; /*0x7f3906*/
  *(float *)&this->Unk00[0x45] = 0.0; /*0x7f390c*/
  *(float *)&this->Unk00[0x46] = 0.0; /*0x7f3912*/
  *(float *)&this->Unk00[0x47] = 0.0; /*0x7f3918*/
  this->Vertex[0] = 0; /*0x7f391e*/
  this->Pixel[0] = 0; /*0x7f3924*/
  this->super.member.super.IsInitialized = 1; /*0x7f392a*/
  this->Unk00[0] = 0x17F; /*0x7f392e*/
  v4 = (NiD3DPass *)this->Unk00[0x3F]; /*0x7f3935*/
  if ( v4 ) /*0x7f3942*/
  {
    if ( v4->RefCount-- == 1 ) /*0x7f3944*/
    {
      NiD3DPass_ReleaseToPool(v4); /*0x7f394c*/
      v3 = 0.0; /*0x7f3951*/
    }
    this->Unk00[0x3F] = 0; /*0x7f3953*/
  }
  ShaderDeclaration = (NiDX9ShaderDeclaration *)this->super.member.super.ShaderDeclaration; /*0x7f3959*/
  if ( ShaderDeclaration != a2 ) /*0x7f3962*/
  {
    if ( ShaderDeclaration ) /*0x7f3966*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7f396e*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7f3984*/
      v3 = 0.0; /*0x7f3986*/
    }
    this->super.member.super.ShaderDeclaration = (NiD3DShaderDeclaration *)a2; /*0x7f398a*/
    if ( a2 ) /*0x7f398d*/
    {
      InterlockedIncrement((volatile LONG *)&a2->members); /*0x7f3995*/
      v3 = 0.0; /*0x7f399b*/
    }
  }
  v7 = this->Vertex[0]; /*0x7f399d*/
  if ( v7 ) /*0x7f39a5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v7 + 1) ) /*0x7f39ad*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v7)(v7, 1); /*0x7f39c3*/
    v3 = 0.0; /*0x7f39c5*/
    this->Vertex[0] = 0; /*0x7f39c7*/
  }
  v8 = this->Pixel[0]; /*0x7f39cd*/
  if ( v8 ) /*0x7f39d5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v8 + 1) ) /*0x7f39dd*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v8)(v8, 1); /*0x7f39f3*/
    v3 = 0.0; /*0x7f39f5*/
    this->Pixel[0] = 0; /*0x7f39f7*/
  }
  *(float *)&this->Unk00[2] = v3; /*0x7f39fd*/
  *(float *)&v13 = v3; /*0x7f3a03*/
  this->Unk00[0x2B] = v13; /*0x7f3a0b*/
  *(float *)&v14 = v3; /*0x7f3a11*/
  *(float *)&v15 = v3; /*0x7f3a19*/
  *(float *)&v16 = v3; /*0x7f3a21*/
  this->Unk00[0x2C] = v14; /*0x7f3a29*/
  this->Unk00[0x2D] = v15; /*0x7f3a2f*/
  this->Unk00[0x2E] = v16; /*0x7f3a35*/
  this->Unk00[0x40] = dword_B25AE0; /*0x7f3a41*/
  this->Unk00[0x41] = dword_B25AE4; /*0x7f3a4c*/
  this->Unk00[0x42] = dword_B25AE8; /*0x7f3a58*/
  this->Unk00[0x43] = dword_B25AEC; /*0x7f3a64*/
  this->Unk00[0x44] = dword_B25AE0; /*0x7f3a6f*/
  this->Unk00[0x45] = dword_B25AE4; /*0x7f3a7b*/
  this->Unk00[0x46] = dword_B25AE8; /*0x7f3a87*/
  this->Unk00[0x47] = dword_B25AEC; /*0x7f3a92*/
  v9 = unk_B468FC; /*0x7f3a98*/
  if ( !unk_B468FC )
  {
    v9 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ? 0x4B : 0xEB;
    unk_B468FC = v9; /*0x7f3ab8*/
  }
  v10 = (double)v9; /*0x7f3ac3*/
  if ( v9 < 0 ) /*0x7f3ac7*/
    v10 = v10 + flt_A2FC78; /*0x7f3ac9*/
  a2a = v10 * dbl_A3C770; /*0x7f3ad8*/
  a2b = ceil(a2a); /*0x7f3ae8*/
  v11 = FormHeapAlloc((unsigned __int64)(4 * (unsigned int)(__int64)a2b) >> 0x1C != 0 ? 0xFFFFFFFF : (__int64)a2b << 6);
  this->Unk00[1] = v11; /*0x7f3b34*/
  _memset(v11, 0, (__int64)a2b << 6); /*0x7f3b3a*/
  _memset((int)&this->Unk00[0x2F], 0, 0x40u); /*0x7f3b49*/
  _memset((int)&this->Unk00[3], 0, 0xA0u); /*0x7f3b5b*/
  return this; /*0x7f3b65*/
}
