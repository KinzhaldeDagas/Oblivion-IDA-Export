NiD3DShaderDeclaration **HitShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  GethitShader *v6; // eax
  GethitShader *v7; // esi
  GethitShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7ec976*/
  v1 = 0; /*0x7ec982*/
  if ( v0 ) /*0x7ec98a*/
    v1 = ShaderDefinition::Init(v0); /*0x7ec993*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7ec9a7*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7ec9ac*/
  v4 = DX9ShaderDeclaration; /*0x7ec9ae*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7ec9b5*/
  {
    if ( ShaderDeclaration ) /*0x7ec9b9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7ec9bf*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7ec9d5*/
    }
    v1->ShaderDeclaration = v4; /*0x7ec9d9*/
    if ( v4 ) /*0x7ec9db*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7ec9e1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7ec9f8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7eca0b*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7eca0d*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7eca1c*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7eca25*/
        break; /*0x7eca25*/
    }
  }
  v6 = (GethitShader *)FormHeapAlloc(0xB4u); /*0x7eca33*/
  if ( v6 ) /*0x7eca49*/
    v7 = GethitShader::GethitShader(v6); /*0x7eca52*/
  else
    v7 = 0; /*0x7eca56*/
  v7->super.__vftable->super.Unk084((BSShader *)v7); /*0x7eca6a*/
  ((void (__thiscall *)(GethitShader *))v7->super.__vftable[1].super.super.super.super.super.Destructor)(v7); /*0x7eca76*/
  v7->super.__vftable[1].super.super.super.super.GetType((NiShader *)v7); /*0x7eca82*/
  shader = (GethitShader *)v1->shader; /*0x7eca84*/
  if ( shader != v7 ) /*0x7eca89*/
  {
    if ( shader ) /*0x7eca8d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->super.member) ) /*0x7eca93*/
        shader->super.__vftable->super.super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7ecaa9*/
    }
    v1->shader = (BSShader *)v7; /*0x7ecaab*/
    InterlockedIncrement((volatile LONG *)&v7->super.member); /*0x7ecab2*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7ecac3*/
  return (NiD3DShaderDeclaration **)v1; /*0x7ecac7*/
}
