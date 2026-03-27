NiD3DShaderDeclaration **PrecipShader_()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  int i; // eax
  PrecipitationShader *v6; // eax
  volatile LONG *v7; // esi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u);
  v1 = 0;
  if ( v0 )
    v1 = ShaderDefinition::Init(v0);
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(dword_B43104, 3, 2u);
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
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, _DWORD, int, unsigned int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable
   + 0x13))(
    v1->ShaderDeclaration,
    1,
    0,
    6,
    0x80000000,
    2,
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
  v6 = (PrecipitationShader *)FormHeapAlloc(0xBCu);
  if ( v6 )
    v7 = (volatile LONG *)PrecipitationShader::PrecipitationShader(v6);
  else
    v7 = 0;
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0x84))(v7);
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xA8))(v7);
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB4))(v7);
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0x88))(v7);
  (*(void (__thiscall **)(volatile LONG *, NiDX9ShaderDeclaration *))(*v7 + 0x54))(v7, v1->ShaderDeclaration);
  shader = (volatile LONG *)v1->shader;
  if ( shader != v7 )
  {
    if ( shader )
    {
      if ( !InterlockedDecrement(shader + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1);
    }
    v1->shader = (BSShader *)v7;
    InterlockedIncrement(v7 + 1);
  }
  return (NiD3DShaderDeclaration **)v1;
}
