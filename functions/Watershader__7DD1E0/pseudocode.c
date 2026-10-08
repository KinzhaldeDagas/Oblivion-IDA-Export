NiD3DShaderDeclaration **Watershader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  WaterShader *v6; // eax
  WaterShader *v7; // esi
  WaterShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7dd206*/
  v1 = 0; /*0x7dd212*/
  if ( v0 ) /*0x7dd21a*/
    v1 = ShaderDefinition::Init(v0); /*0x7dd223*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7dd237*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7dd23c*/
  v4 = DX9ShaderDeclaration; /*0x7dd23e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7dd245*/
  {
    if ( ShaderDeclaration ) /*0x7dd249*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7dd24f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7dd265*/
    }
    v1->ShaderDeclaration = v4; /*0x7dd269*/
    if ( v4 ) /*0x7dd26b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7dd271*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7dd288*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7dd29b*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7dd29d*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7dd2ac*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7dd2b5*/
        break; /*0x7dd2b5*/
    }
  }
  v6 = (WaterShader *)FormHeapAlloc(0x118u); /*0x7dd2c3*/
  if ( v6 ) /*0x7dd2d9*/
    v7 = WaterShader::WaterShader(v6); /*0x7dd2e2*/
  else
    v7 = 0; /*0x7dd2e6*/
  v7->super.__vftable->Unk084(&v7->super); /*0x7dd2fa*/
  LoadWaterShaders(v7); /*0x7dd2fe*/
  sub_7DC1A0(v7); /*0x7dd305*/
  v7->super.__vftable->Unk088(&v7->super); /*0x7dd314*/
  v7->super.__vftable->super.super.Unk54((NiD3DShaderInterface *)v7, (UInt32)v1->ShaderDeclaration); /*0x7dd320*/
  shader = (WaterShader *)v1->shader; /*0x7dd322*/
  if ( shader != v7 ) /*0x7dd327*/
  {
    if ( shader ) /*0x7dd32b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->super.member) ) /*0x7dd331*/
        shader->super.__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7dd347*/
    }
    v1->shader = &v7->super; /*0x7dd349*/
    InterlockedIncrement((volatile LONG *)&v7->super.member); /*0x7dd350*/
  }
  return (NiD3DShaderDeclaration **)v1; /*0x7dd358*/
}
