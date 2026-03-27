ShaderDefinition *ParticleShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // esi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiDX9ShaderDeclaration *v4; // ebx
  NiD3DShaderDeclaration *v5; // edi
  int v6; // eax
  char v7; // al
  ParticleShader *v8; // eax
  ParticleShader *v9; // edi
  ParticleShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u);
  v1 = 0;
  if ( v0 )
    v1 = ShaderDefinition::Init(v0);
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(dword_B43104, 5, 1u);
  ShaderDeclaration = v1->ShaderDeclaration;
  v4 = DX9ShaderDeclaration;
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration )
  {
    if ( ShaderDeclaration )
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) )
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1);
    }
    v1->ShaderDeclaration = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)&v4->members);
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))(
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))(
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))(
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, _DWORD, int, int, _DWORD))v1->ShaderDeclaration->__vftable
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
  v5 = (NiD3DShaderDeclaration *)v1->ShaderDeclaration;
  if ( v1->ShaderDeclaration )
  {
    v6 = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v5->__vftable + 1))(v1->ShaderDeclaration);
    if ( v6 )
    {
      while ( (char *)v6 != dword_B3F684 )
      {
        v6 = *(_DWORD *)(v6 + 4);
        if ( !v6 )
          goto LABEL_13;
      }
      v7 = 1;
    }
    else
    {
LABEL_13:
      v7 = 0;
    }
    v5 = v7 != 0 ? v5 : 0;
  }
  v8 = (ParticleShader *)FormHeapAlloc(0x148u);
  if ( v8 )
    v9 = ParticleShader::ParticleShader(v8, v5);
  else
    v9 = 0;
  v9->super.__vftable->Unk084(&v9->super);
  ((void (__thiscall *)(ParticleShader *))v9->super.__vftable[1].super.super.super.super.Destructor)(v9);
  v9->super.__vftable[1].super.super.super.GetType((NiShader *)v9);
  v9->super.__vftable->Unk088(&v9->super);
  shader = (ParticleShader *)v1->shader;
  if ( shader != v9 )
  {
    if ( shader )
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->super.member) )
        shader->super.__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1);
    }
    v1->shader = &v9->super;
    InterlockedIncrement((volatile LONG *)&v9->super.member);
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration);
  return v1;
}
