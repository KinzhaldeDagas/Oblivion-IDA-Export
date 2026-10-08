NiD3DShaderDeclaration **NightEyeShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  NighteyeShader *v6; // eax
  NighteyeShader *v7; // esi
  NighteyeShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7f59e6*/
  v1 = 0; /*0x7f59f2*/
  if ( v0 ) /*0x7f59fa*/
    v1 = ShaderDefinition::Init(v0); /*0x7f5a03*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7f5a17*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7f5a1c*/
  v4 = DX9ShaderDeclaration; /*0x7f5a1e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7f5a25*/
  {
    if ( ShaderDeclaration ) /*0x7f5a29*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7f5a2f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7f5a45*/
    }
    v1->ShaderDeclaration = v4; /*0x7f5a49*/
    if ( v4 ) /*0x7f5a4b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7f5a51*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7f5a68*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7f5a7b*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7f5a7d*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7f5a8c*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7f5a95*/
        break; /*0x7f5a95*/
    }
  }
  v6 = (NighteyeShader *)FormHeapAlloc(0xC0u); /*0x7f5aa3*/
  if ( v6 ) /*0x7f5ab9*/
    v7 = NighteyeShader::NighteyeShader(v6); /*0x7f5ac2*/
  else
    v7 = 0; /*0x7f5ac6*/
  v7->super.__vftable->super.Unk084((BSShader *)v7); /*0x7f5ada*/
  ((void (__thiscall *)(NighteyeShader *))v7->super.__vftable[1].super.super.super.super.super.Destructor)(v7); /*0x7f5ae6*/
  v7->super.__vftable[1].super.super.super.super.GetType((NiShader *)v7); /*0x7f5af2*/
  shader = (NighteyeShader *)v1->shader; /*0x7f5af4*/
  if ( shader != v7 ) /*0x7f5af9*/
  {
    if ( shader ) /*0x7f5afd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->super.member) ) /*0x7f5b03*/
        shader->super.__vftable->super.super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7f5b19*/
    }
    v1->shader = (BSShader *)v7; /*0x7f5b1b*/
    InterlockedIncrement((volatile LONG *)&v7->super.member); /*0x7f5b22*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7f5b33*/
  return (NiD3DShaderDeclaration **)v1; /*0x7f5b37*/
}
