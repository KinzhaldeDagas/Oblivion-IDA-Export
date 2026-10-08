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
  UInt32 v26; // eax
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

  BSShader::BSShader(&this->super); /*0x7e2dbd*/
  this->super.__vftable = (BSShaderVtbl *)&ParticleShader::`vftable'; /*0x7e2dc4*/
  this->Unk7C[2] = 0; /*0x7e2dce*/
  this->Vertex[0] = 0; /*0x7e2dd4*/
  this->Pixel[0] = 0; /*0x7e2dda*/
  v3 = 0.0; /*0x7e2de0*/
  *(float *)&this->Unk90[0x22] = 0.0; /*0x7e2de2*/
  *(float *)&this->Unk90[0x23] = 0.0; /*0x7e2ded*/
  *(float *)&this->Unk90[0x24] = 0.0; /*0x7e2df3*/
  *(float *)&this->Unk90[0x25] = 0.0; /*0x7e2df9*/
  *(float *)&this->Unk90[0x26] = 0.0; /*0x7e2dff*/
  *(float *)&this->Unk90[0x27] = 0.0; /*0x7e2e05*/
  *(float *)&this->Unk90[0x28] = 0.0; /*0x7e2e0b*/
  *(float *)&this->Unk90[0x29] = 0.0; /*0x7e2e11*/
  *(float *)&this->Unk90[0x2A] = 0.0; /*0x7e2e17*/
  *(float *)&this->Unk90[0x2B] = 0.0; /*0x7e2e1d*/
  *(float *)&this->Unk90[0x2C] = 0.0; /*0x7e2e23*/
  *(float *)&this->Unk90[0x2D] = 0.0; /*0x7e2e29*/
  this->super.member.super.IsInitialized = 1; /*0x7e2e2f*/
  this->Unk7C[0] = 0x17E; /*0x7e2e33*/
  v4 = (NiD3DPass *)this->Unk7C[2]; /*0x7e2e3a*/
  if ( v4 ) /*0x7e2e42*/
  {
    if ( v4->RefCount-- == 1 ) /*0x7e2e44*/
    {
      NiD3DPass_ReleaseToPool(v4); /*0x7e2e4c*/
      v3 = 0.0; /*0x7e2e51*/
    }
    this->Unk7C[2] = 0; /*0x7e2e53*/
  }
  ShaderDeclaration = this->super.member.super.ShaderDeclaration; /*0x7e2e59*/
  if ( ShaderDeclaration != a2 ) /*0x7e2e62*/
  {
    if ( ShaderDeclaration ) /*0x7e2e66*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->member) ) /*0x7e2e6e*/
        (*(void (__thiscall **)(NiD3DShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7e2e84*/
      v3 = 0.0; /*0x7e2e86*/
    }
    this->super.member.super.ShaderDeclaration = a2; /*0x7e2e8a*/
    if ( a2 ) /*0x7e2e8d*/
    {
      InterlockedIncrement((volatile LONG *)&a2->member); /*0x7e2e95*/
      v3 = 0.0; /*0x7e2e9b*/
    }
  }
  v7 = this->Vertex[0]; /*0x7e2e9d*/
  if ( v7 ) /*0x7e2ea5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v7 + 1) ) /*0x7e2ead*/
      (**(void (__thiscall ***)(NiD3DVertexShader *, int))v7)(v7, 1); /*0x7e2ec3*/
    v3 = 0.0; /*0x7e2ec5*/
    this->Vertex[0] = 0; /*0x7e2ec7*/
  }
  v8 = this->Pixel[0]; /*0x7e2ecd*/
  if ( v8 ) /*0x7e2ed5*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v8 + 1) ) /*0x7e2edd*/
      (**(void (__thiscall ***)(NiD3DPixelShader *, int))v8)(v8, 1); /*0x7e2ef3*/
    v3 = 0.0; /*0x7e2ef5*/
    this->Pixel[0] = 0; /*0x7e2ef7*/
  }
  *(float *)&this->Unk90[8] = v3; /*0x7e2efd*/
  *(float *)&v28 = v3; /*0x7e2f03*/
  this->Unk90[0x19] = v28; /*0x7e2f0b*/
  *(float *)&v34 = v3; /*0x7e2f11*/
  v9 = v34; /*0x7e2f15*/
  *(float *)&v40 = v3; /*0x7e2f19*/
  v10 = v40; /*0x7e2f1d*/
  *(float *)&v29 = v3; /*0x7e2f21*/
  v11 = v29; /*0x7e2f25*/
  *(float *)&v35 = v3; /*0x7e2f29*/
  this->Unk90[0x1A] = v9; /*0x7e2f2d*/
  *(float *)&v41 = v3; /*0x7e2f33*/
  v12 = v35; /*0x7e2f37*/
  *(float *)&v30 = v3; /*0x7e2f3b*/
  this->Unk90[0x1B] = v10; /*0x7e2f3f*/
  *(float *)&v36 = v3; /*0x7e2f45*/
  v13 = v41; /*0x7e2f49*/
  *(float *)&v42 = v3; /*0x7e2f4d*/
  this->Unk90[0x1C] = v11; /*0x7e2f51*/
  v14 = v30; /*0x7e2f57*/
  *(float *)&v31 = v3; /*0x7e2f5b*/
  this->Unk90[0x1D] = v12; /*0x7e2f5f*/
  v15 = v36; /*0x7e2f65*/
  *(float *)&v37 = v3; /*0x7e2f69*/
  this->Unk90[0x1E] = v13; /*0x7e2f6d*/
  v16 = v42; /*0x7e2f73*/
  *(float *)&v43 = v3; /*0x7e2f77*/
  this->Unk90[0x1F] = v14; /*0x7e2f7b*/
  *(float *)&v46 = v3; /*0x7e2f81*/
  v17 = v31; /*0x7e2f85*/
  *(float *)&v32 = v3; /*0x7e2f89*/
  this->Unk90[0x20] = v15; /*0x7e2f8d*/
  v18 = v37; /*0x7e2f93*/
  *(float *)&v38 = v3; /*0x7e2f97*/
  this->Unk90[0x22] = v17; /*0x7e2f9b*/
  v19 = v46; /*0x7e2fa1*/
  this->Unk90[0x21] = v16; /*0x7e2fa5*/
  v20 = v43; /*0x7e2fab*/
  *(float *)&v44 = v3; /*0x7e2faf*/
  this->Unk90[0x23] = v18; /*0x7e2fb3*/
  *(float *)&v47 = v3; /*0x7e2fb9*/
  v21 = v32; /*0x7e2fbd*/
  *(float *)&v33 = v3; /*0x7e2fc1*/
  this->Unk90[0x24] = v20; /*0x7e2fc5*/
  v22 = v38; /*0x7e2fcb*/
  *(float *)&v39 = v3; /*0x7e2fcf*/
  this->Unk90[0x26] = v21; /*0x7e2fd3*/
  v23 = v47; /*0x7e2fd9*/
  this->Unk90[0x25] = v19; /*0x7e2fdd*/
  v24 = v44; /*0x7e2fe3*/
  *(float *)&v45 = v3; /*0x7e2fe7*/
  this->Unk90[0x27] = v22; /*0x7e2feb*/
  *(float *)&v48 = v3; /*0x7e2ff1*/
  this->Unk90[0x28] = v24; /*0x7e2ff9*/
  this->Unk90[0x2A] = v33; /*0x7e3003*/
  this->Unk90[0x29] = v23; /*0x7e300d*/
  this->Unk90[0x2B] = v39; /*0x7e3017*/
  this->Unk90[0x2C] = v45; /*0x7e301d*/
  this->Unk90[0x2D] = v48; /*0x7e3023*/
  v25 = unk_B4600C; /*0x7e3029*/
  if ( !unk_B4600C )
  {
    v25 = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ? 0x28 : 0x78;
    unk_B4600C = v25; /*0x7e304a*/
  }
  v26 = FormHeapAlloc((unsigned __int64)(unsigned int)v25 >> 0x1B != 0 ? 0xFFFFFFFF : 0x20 * v25);
  this->Unk7C[1] = v26; /*0x7e306e*/
  _memset(v26, 0, 0x20 * v25); /*0x7e3074*/
  _memset((int)&this->Unk90[9], 0, 0x40u); /*0x7e3083*/
  return this; /*0x7e308d*/
}
