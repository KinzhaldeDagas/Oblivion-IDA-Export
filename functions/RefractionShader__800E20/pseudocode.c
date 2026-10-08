// MoonSugarEffect decode: RefractionShader definition uses the same two-element image-space declaration as Copy/Hit/NightEye, then allocates, initializes, loads, builds, and refcounts its concrete shader.
ShaderDefinition *__cdecl RefractionShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  int i; // eax
  RefractionShader *v6; // eax
  RefractionShader *v7; // esi
  RefractionShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x800e46*/
  v1 = 0; /*0x800e52*/
  if ( v0 ) /*0x800e5a*/
    v1 = ShaderDefinition::Init(v0); /*0x800e63*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2, 1u); /*0x800e77*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x800e7c*/
  v4 = DX9ShaderDeclaration; /*0x800e7e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x800e85*/
  {
    if ( ShaderDeclaration ) /*0x800e89*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x800e8f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x800ea5*/
    }
    v1->ShaderDeclaration = v4; /*0x800ea9*/
    if ( v4 ) /*0x800eab*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x800eb1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x800ec8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x800edb*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x800edd*/
  {
    for ( i = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x800eec*/
          i;
          i = *(_DWORD *)(i + 4) )
    {
      if ( (char *)i == stru_B3F684 ) /*0x800ef5*/
        break; /*0x800ef5*/
    }
  }
  v6 = (RefractionShader *)FormHeapAlloc(0xC4u); /*0x800f03*/
  if ( v6 ) /*0x800f19*/
    v7 = RefractionShader::RefractionShader(v6); /*0x800f22*/
  else
    v7 = 0; /*0x800f26*/
  v7->super.__vftable->super.Unk084((BSShader *)v7); /*0x800f3a*/
  ((void (__thiscall *)(RefractionShader *))v7->super.__vftable[1].super.super.super.super.super.Destructor)(v7); /*0x800f46*/
  v7->super.__vftable[1].super.super.super.super.GetType((NiShader *)v7); /*0x800f52*/
  shader = (RefractionShader *)v1->shader; /*0x800f54*/
  if ( shader != v7 ) /*0x800f59*/
  {
    if ( shader ) /*0x800f5d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->super.member) ) /*0x800f63*/
        shader->super.__vftable->super.super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x800f79*/
    }
    v1->shader = (BSShader *)v7; /*0x800f7b*/
    InterlockedIncrement((volatile LONG *)&v7->super.member); /*0x800f82*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x800f93*/
  return v1; /*0x800f97*/
}
