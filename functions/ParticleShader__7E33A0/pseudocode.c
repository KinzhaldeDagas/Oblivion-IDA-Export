// MoonSugarEffect decode: Particle shader declaration includes a raw special element with source semantic 0x80000000 and D3D usage COLOR/usageIndex-like fields. Particle layouts are not normal static mesh layouts.
ShaderDefinition *ParticleShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // esi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiDX9ShaderDeclaration *v4; // ebx
  NiD3DShaderDeclaration *v5; // edi
  NiRTTI *v6; // eax
  char v7; // al
  ParticleShader *v8; // eax
  ParticleShader *v9; // edi
  ParticleShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7e33c6*/
  v1 = 0; /*0x7e33d2*/
  if ( v0 ) /*0x7e33da*/
    v1 = ShaderDefinition::Init(v0); /*0x7e33e3*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 5u, 1u); /*0x7e33f7*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7e33fc*/
  v4 = DX9ShaderDeclaration; /*0x7e33fe*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7e3405*/
  {
    if ( ShaderDeclaration ) /*0x7e3409*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7e340f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7e3425*/
    }
    v1->ShaderDeclaration = v4; /*0x7e3429*/
    if ( v4 ) /*0x7e342b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7e3431*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7e3448*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7e345b*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7e346e*/
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7e3481*/
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, _DWORD, int, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7e349d*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    4,
    6,
    0x80000000,
    0,
    0xA,
    1,
    0);
  v5 = (NiD3DShaderDeclaration *)v1->ShaderDeclaration; /*0x7e349f*/
  if ( v1->ShaderDeclaration )
  {
    v6 = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v5->__vftable + 1))(v1->ShaderDeclaration); /*0x7e34ac*/
    if ( v6 ) /*0x7e34b0*/
    {
      while ( v6 != &stru_B3F684 ) /*0x7e34b7*/
      {
        v6 = v6->parent; /*0x7e34b9*/
        if ( !v6 ) /*0x7e34be*/
          goto LABEL_13; /*0x7e34be*/
      }
      v7 = 1; /*0x7e34f3*/
    }
    else
    {
LABEL_13:
      v7 = 0; /*0x7e34c0*/
    }
    v5 = v7 != 0 ? v5 : 0;
  }
  v8 = (ParticleShader *)FormHeapAlloc(0x148u); /*0x7e34cf*/
  if ( v8 ) /*0x7e34e5*/
    v9 = ParticleShader::ParticleShader(v8, v5); /*0x7e34ef*/
  else
    v9 = 0; /*0x7e34f7*/
  v9->super.__vftable->Unk084(&v9->super); /*0x7e350b*/
  ((void (__thiscall *)(ParticleShader *))v9->super.__vftable[1].super.super.super.super.Destructor)(v9); /*0x7e3517*/
  v9->super.__vftable[1].super.super.super.GetType((NiShader *)v9); /*0x7e3523*/
  v9->super.__vftable->Unk088(&v9->super); /*0x7e352f*/
  shader = (ParticleShader *)v1->shader; /*0x7e3531*/
  if ( shader != v9 ) /*0x7e3536*/
  {
    if ( shader ) /*0x7e353a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->super.member) ) /*0x7e3540*/
        shader->super.__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7e3556*/
    }
    v1->shader = &v9->super; /*0x7e3558*/
    InterlockedIncrement((volatile LONG *)&v9->super.member); /*0x7e355f*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7e3570*/
  return v1; /*0x7e3574*/
}
