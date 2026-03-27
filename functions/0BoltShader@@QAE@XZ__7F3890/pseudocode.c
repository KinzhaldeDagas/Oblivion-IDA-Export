BoltShader *__thiscall BoltShader::BoltShader(BoltShader *this, NiDX9ShaderDeclaration *a2)
{
  double v3; // st7
  NiD3DPass *v4; // ecx
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiD3DVertexShader *v7; // edi
  NiD3DPixelShader *v8; // edi
  int v9; // eax
  double v10; // st7
  int v11; // eax
  UInt32 v13; // [esp+28h] [ebp-20h]
  UInt32 v14; // [esp+2Ch] [ebp-1Ch]
  UInt32 v15; // [esp+30h] [ebp-18h]
  UInt32 v16; // [esp+34h] [ebp-14h]
  float a2a; // [esp+4Ch] [ebp+4h]
  float a2b; // [esp+4Ch] [ebp+4h]

  BSShader::BSShader(&this->super);
  v3 = 0.0;
  this->super.__vftable = (BSShaderVtbl *)&BoltShader::`vftable';
  *(float *)&this->Unk00[0x2B] = 0.0;
  *(float *)&this->Unk00[0x2C] = 0.0;
  *(float *)&this->Unk00[0x2D] = 0.0;
  *(float *)&this->Unk00[0x2E] = 0.0;
  this->Unk00[0x3F] = 0;
  *(float *)&this->Unk00[0x40] = 0.0;
  *(float *)&this->Unk00[0x41] = 0.0;
  *(float *)&this->Unk00[0x42] = 0.0;
  *(float *)&this->Unk00[0x43] = 0.0;
  *(float *)&this->Unk00[0x44] = 0.0;
  *(float *)&this->Unk00[0x45] = 0.0;
  *(float *)&this->Unk00[0x46] = 0.0;
  *(float *)&this->Unk00[0x47] = 0.0;
  this->Vertex[0] = 0;
  this->Pixel[0] = 0;
  this->super.member.super.IsInitialized = 1;
  this->Unk00[0] = 0x17F;
  v4 = (NiD3DPass *)this->Unk00[0x3F];
  if ( v4 )
  {
    if ( v4->RefCount-- == 1 )
    {
      sub_7604D0(v4);
      v3 = 0.0;
    }
    this->Unk00[0x3F] = 0;
  }
  ShaderDeclaration = (NiDX9ShaderDeclaration *)this->super.member.super.ShaderDeclaration;
  if ( ShaderDeclaration != a2 )
  {
    if ( ShaderDeclaration )
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) )
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1);
      v3 = 0.0;
    }
    this->super.member.super.ShaderDeclaration = (NiD3DShaderDeclaration *)a2;
    if ( a2 )
    {
      InterlockedIncrement((volatile LONG *)&a2->members);
      v3 = 0.0;
    }
  }
  v7 = this->Vertex[0];
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v7 + 1) )
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v7)(v7, 1);
    v3 = 0.0;
    this->Vertex[0] = 0;
  }
  v8 = this->Pixel[0];
  if ( v8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v8)(v8, 1);
    v3 = 0.0;
    this->Pixel[0] = 0;
  }
  *(float *)&this->Unk00[2] = v3;
  *(float *)&v13 = v3;
  this->Unk00[0x2B] = v13;
  *(float *)&v14 = v3;
  *(float *)&v15 = v3;
  *(float *)&v16 = v3;
  this->Unk00[0x2C] = v14;
  this->Unk00[0x2D] = v15;
  this->Unk00[0x2E] = v16;
  this->Unk00[0x40] = dword_B25AE0;
  this->Unk00[0x41] = dword_B25AE4;
  this->Unk00[0x42] = dword_B25AE8;
  this->Unk00[0x43] = dword_B25AEC;
  this->Unk00[0x44] = dword_B25AE0;
  this->Unk00[0x45] = dword_B25AE4;
  this->Unk00[0x46] = dword_B25AE8;
  this->Unk00[0x47] = dword_B25AEC;
  v9 = dword_B468FC;
  if ( !dword_B468FC )
  {
    v9 = ShaderPackage < 2 ? 0x4B : 0xEB;
    dword_B468FC = v9;
  }
  v10 = (double)v9;
  if ( v9 < 0 )
    v10 = v10 + flt_A2FC78;
  a2a = v10 * dbl_A3C770;
  a2b = ceil(a2a);
  v11 = FormHeapAlloc((unsigned __int64)(4 * (unsigned int)(__int64)a2b) >> 0x1C != 0 ? 0xFFFFFFFF : (__int64)a2b << 6);
  this->Unk00[1] = v11;
  _memset(v11, 0, (__int64)a2b << 6);
  _memset(&this->Unk00[0x2F], 0, 0x40);
  _memset(&this->Unk00[3], 0, 0xA0);
  return this;
}
