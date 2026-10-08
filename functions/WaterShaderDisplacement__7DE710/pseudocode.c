NiD3DShaderDeclaration **WaterShaderDisplacement()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  WaterShaderDisplacement *v6; // eax
  WaterShaderDisplacement *v7; // esi
  BSShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7de736*/
  v1 = 0; /*0x7de742*/
  if ( v0 ) /*0x7de74a*/
    v1 = ShaderDefinition::Init(v0); /*0x7de753*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7de767*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7de76c*/
  v4 = DX9ShaderDeclaration; /*0x7de76e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7de775*/
  {
    if ( ShaderDeclaration ) /*0x7de779*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7de77f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7de795*/
    }
    v1->ShaderDeclaration = v4; /*0x7de799*/
    if ( v4 ) /*0x7de79b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7de7a1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7de7b8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7de7cb*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7de7cd*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7de7dc*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7de7e5*/
        break; /*0x7de7e5*/
    }
  }
  v6 = (WaterShaderDisplacement *)FormHeapAlloc(0x128u); /*0x7de7f3*/
  if ( v6 ) /*0x7de809*/
    v7 = WaterShaderDisplacement::WaterShaderDisplacement(v6); /*0x7de812*/
  else
    v7 = 0; /*0x7de816*/
  (*(void (__thiscall **)(WaterShaderDisplacement *))(*(_DWORD *)v7 + 0x84))(v7); /*0x7de82a*/
  sub_7DD920((char *)v7); /*0x7de82e*/
  sub_7DDD90((NiD3DPass **)v7); /*0x7de835*/
  (*(void (__thiscall **)(WaterShaderDisplacement *))(*(_DWORD *)v7 + 0x88))(v7); /*0x7de844*/
  (*(void (__thiscall **)(WaterShaderDisplacement *, NiDX9ShaderDeclaration *))(*(_DWORD *)v7 + 0x54))( /*0x7de850*/
    v7,
    v1->ShaderDeclaration);
  shader = v1->shader; /*0x7de852*/
  if ( shader != (BSShader *)v7 ) /*0x7de857*/
  {
    if ( shader ) /*0x7de85b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->member) ) /*0x7de861*/
        shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7de877*/
    }
    v1->shader = (BSShader *)v7; /*0x7de879*/
    InterlockedIncrement((volatile LONG *)v7 + 1); /*0x7de880*/
  }
  return (NiD3DShaderDeclaration **)v1; /*0x7de888*/
}
