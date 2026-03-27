NiD3DShaderDeclaration **WaterShaderDisplacement()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  int i; // eax
  WaterShaderDisplacement *v6; // eax
  WaterShaderDisplacement *v7; // esi
  BSShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u);
  v1 = 0;
  if ( v0 )
    v1 = ShaderDefinition::Init(v0);
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(dword_B43104, 2, 1u);
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
  v6 = (WaterShaderDisplacement *)FormHeapAlloc(0x128u);
  if ( v6 )
    v7 = WaterShaderDisplacement::WaterShaderDisplacement(v6);
  else
    v7 = 0;
  (*(void (__thiscall **)(WaterShaderDisplacement *))(*(_DWORD *)v7 + 0x84))(v7);
  sub_7DD920((char *)v7);
  sub_7DDD90((NiD3DPass **)v7);
  (*(void (__thiscall **)(WaterShaderDisplacement *))(*(_DWORD *)v7 + 0x88))(v7);
  (*(void (__thiscall **)(WaterShaderDisplacement *, NiDX9ShaderDeclaration *))(*(_DWORD *)v7 + 0x54))(
    v7,
    v1->ShaderDeclaration);
  shader = v1->shader;
  if ( shader != (BSShader *)v7 )
  {
    if ( shader )
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->member) )
        shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1);
    }
    v1->shader = (BSShader *)v7;
    InterlockedIncrement((volatile LONG *)v7 + 1);
  }
  return (NiD3DShaderDeclaration **)v1;
}
