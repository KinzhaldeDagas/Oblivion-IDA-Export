ParticleShader *__thiscall ParticleShader::ParticleShader(ParticleShader *this, NiD3DShaderDeclaration *a2)
{
  double v3; // st7
  NiD3DPass *v4; // ecx
  NiD3DShaderDeclaration *ShaderDeclaration; // edi
  NiD3DVertexShader *v7; // edi
  NiD3DPixelShader *v8; // edi
  UInt32 v9; // edx
  UInt32 v10; // eax
  UInt32 v11; // ecx
  UInt32 v12; // edx
  UInt32 v13; // eax
  UInt32 v14; // ecx
  UInt32 v15; // edx
  UInt32 v16; // eax
  UInt32 v17; // ecx
  UInt32 v18; // edx
  UInt32 v19; // ecx
  UInt32 v20; // eax
  UInt32 v21; // edx
  UInt32 v22; // eax
  UInt32 v23; // edx
  UInt32 v24; // ecx
  int v25; // edi
  int v26; // eax
  UInt32 v28; // [esp+18h] [ebp-1Ch]
  UInt32 v29; // [esp+18h] [ebp-1Ch]
  UInt32 v30; // [esp+18h] [ebp-1Ch]
  UInt32 v31; // [esp+18h] [ebp-1Ch]
  UInt32 v32; // [esp+18h] [ebp-1Ch]
  UInt32 v33; // [esp+18h] [ebp-1Ch]
  UInt32 v34; // [esp+1Ch] [ebp-18h]
  UInt32 v35; // [esp+1Ch] [ebp-18h]
  UInt32 v36; // [esp+1Ch] [ebp-18h]
  UInt32 v37; // [esp+1Ch] [ebp-18h]
  UInt32 v38; // [esp+1Ch] [ebp-18h]
  UInt32 v39; // [esp+1Ch] [ebp-18h]
  UInt32 v40; // [esp+20h] [ebp-14h]
  UInt32 v41; // [esp+20h] [ebp-14h]
  UInt32 v42; // [esp+20h] [ebp-14h]
  UInt32 v43; // [esp+20h] [ebp-14h]
  UInt32 v44; // [esp+20h] [ebp-14h]
  UInt32 v45; // [esp+20h] [ebp-14h]
  UInt32 v46; // [esp+24h] [ebp-10h]
  UInt32 v47; // [esp+24h] [ebp-10h]
  UInt32 v48; // [esp+24h] [ebp-10h]

  BSShader::BSShader(&this->super);
  this->super.__vftable = (BSShaderVtbl *)&ParticleShader::`vftable';
  this->Unk7C[2] = 0;
  this->Vertex[0] = 0;
  this->Pixel[0] = 0;
  v3 = 0.0;
  *(float *)&this->Unk90[0x22] = 0.0;
  *(float *)&this->Unk90[0x23] = 0.0;
  *(float *)&this->Unk90[0x24] = 0.0;
  *(float *)&this->Unk90[0x25] = 0.0;
  *(float *)&this->Unk90[0x26] = 0.0;
  *(float *)&this->Unk90[0x27] = 0.0;
  *(float *)&this->Unk90[0x28] = 0.0;
  *(float *)&this->Unk90[0x29] = 0.0;
  *(float *)&this->Unk90[0x2A] = 0.0;
  *(float *)&this->Unk90[0x2B] = 0.0;
  *(float *)&this->Unk90[0x2C] = 0.0;
  *(float *)&this->Unk90[0x2D] = 0.0;
  this->super.member.super.IsInitialized = 1;
  this->Unk7C[0] = 0x17E;
  v4 = (NiD3DPass *)this->Unk7C[2];
  if ( v4 )
  {
    if ( v4->RefCount-- == 1 )
    {
      sub_7604D0(v4);
      v3 = 0.0;
    }
    this->Unk7C[2] = 0;
  }
  ShaderDeclaration = this->super.member.super.ShaderDeclaration;
  if ( ShaderDeclaration != a2 )
  {
    if ( ShaderDeclaration )
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->member) )
        (*(void (__thiscall **)(NiD3DShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1);
      v3 = 0.0;
    }
    this->super.member.super.ShaderDeclaration = a2;
    if ( a2 )
    {
      InterlockedIncrement((volatile LONG *)&a2->member);
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
  *(float *)&this->Unk90[8] = v3;
  *(float *)&v28 = v3;
  this->Unk90[0x19] = v28;
  *(float *)&v34 = v3;
  v9 = v34;
  *(float *)&v40 = v3;
  v10 = v40;
  *(float *)&v29 = v3;
  v11 = v29;
  *(float *)&v35 = v3;
  this->Unk90[0x1A] = v9;
  *(float *)&v41 = v3;
  v12 = v35;
  *(float *)&v30 = v3;
  this->Unk90[0x1B] = v10;
  *(float *)&v36 = v3;
  v13 = v41;
  *(float *)&v42 = v3;
  this->Unk90[0x1C] = v11;
  v14 = v30;
  *(float *)&v31 = v3;
  this->Unk90[0x1D] = v12;
  v15 = v36;
  *(float *)&v37 = v3;
  this->Unk90[0x1E] = v13;
  v16 = v42;
  *(float *)&v43 = v3;
  this->Unk90[0x1F] = v14;
  *(float *)&v46 = v3;
  v17 = v31;
  *(float *)&v32 = v3;
  this->Unk90[0x20] = v15;
  v18 = v37;
  *(float *)&v38 = v3;
  this->Unk90[0x22] = v17;
  v19 = v46;
  this->Unk90[0x21] = v16;
  v20 = v43;
  *(float *)&v44 = v3;
  this->Unk90[0x23] = v18;
  *(float *)&v47 = v3;
  v21 = v32;
  *(float *)&v33 = v3;
  this->Unk90[0x24] = v20;
  v22 = v38;
  *(float *)&v39 = v3;
  this->Unk90[0x26] = v21;
  v23 = v47;
  this->Unk90[0x25] = v19;
  v24 = v44;
  *(float *)&v45 = v3;
  this->Unk90[0x27] = v22;
  *(float *)&v48 = v3;
  this->Unk90[0x28] = v24;
  this->Unk90[0x2A] = v33;
  this->Unk90[0x29] = v23;
  this->Unk90[0x2B] = v39;
  this->Unk90[0x2C] = v45;
  this->Unk90[0x2D] = v48;
  v25 = dword_B4600C;
  if ( !dword_B4600C )
  {
    v25 = ShaderPackage < 2 ? 0x28 : 0x78;
    dword_B4600C = v25;
  }
  v26 = FormHeapAlloc((unsigned __int64)(unsigned int)v25 >> 0x1B != 0 ? 0xFFFFFFFF : 0x20 * v25);
  this->Unk7C[1] = v26;
  _memset(v26, 0, 0x20 * v25);
  _memset(&this->Unk90[9], 0, 0x40);
  return this;
}
