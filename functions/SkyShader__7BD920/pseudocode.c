NiD3DShaderDeclaration **SkyShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // esi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiDX9ShaderDeclaration *v4; // ebx
  int i; // eax
  SkyShader *v6; // eax
  SkyShader *v7; // edi
  SkyShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u);
  v1 = 0;
  if ( v0 )
    v1 = ShaderDefinition::Init(v0);
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(dword_B43104, 3, 1u);
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
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))(
    v1->ShaderDeclaration,
    2,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration )
  {
    for ( i = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration);
          i;
          i = *(_DWORD *)(i + 4) )
    {
      if ( (char *)i == dword_B3F684 )
        break;
    }
  }
  v6 = (SkyShader *)FormHeapAlloc(0xE8u);
  if ( v6 )
    v7 = SkyShader::SkyShader(v6);
  else
    v7 = 0;
  v7->super.__vftable->Unk084(&v7->super);
  sub_7BB280(v7);
  sub_7BC1B0((NiD3DPass **)v7);
  v7->super.__vftable->Unk088(&v7->super);
  v7->super.__vftable->super.super.Unk54((NiD3DShaderInterface *)v7, (UInt32)v1->ShaderDeclaration);
  shader = (SkyShader *)v1->shader;
  if ( shader != v7 )
  {
    if ( shader )
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->super.member) )
        shader->super.__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1);
    }
    v1->shader = &v7->super;
    InterlockedIncrement((volatile LONG *)&v7->super.member);
  }
  return (NiD3DShaderDeclaration **)v1;
}
