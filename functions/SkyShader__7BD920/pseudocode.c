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

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7bd946*/
  v1 = 0; /*0x7bd952*/
  if ( v0 ) /*0x7bd95a*/
    v1 = ShaderDefinition::Init(v0); /*0x7bd963*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 3, 1u); /*0x7bd977*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7bd97c*/
  v4 = DX9ShaderDeclaration; /*0x7bd97e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7bd985*/
  {
    if ( ShaderDeclaration ) /*0x7bd989*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7bd98f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7bd9a5*/
    }
    v1->ShaderDeclaration = v4; /*0x7bd9a9*/
    if ( v4 ) /*0x7bd9ab*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7bd9b1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7bd9c8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7bd9db*/
    v1->ShaderDeclaration,
    1,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7bd9ee*/
    v1->ShaderDeclaration,
    2,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7bd9f0*/
  {
    for ( i = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7bd9ff*/
          i;
          i = *(_DWORD *)(i + 4) )
    {
      if ( (char *)i == stru_B3F684 ) /*0x7bda06*/
        break; /*0x7bda06*/
    }
  }
  v6 = (SkyShader *)FormHeapAlloc(0xE8u); /*0x7bda14*/
  if ( v6 ) /*0x7bda2a*/
    v7 = SkyShader::SkyShader(v6); /*0x7bda33*/
  else
    v7 = 0; /*0x7bda37*/
  v7->super.__vftable->Unk084(&v7->super); /*0x7bda4b*/
  sub_7BB280(v7); /*0x7bda4f*/
  sub_7BC1B0((NiD3DPass **)v7); /*0x7bda56*/
  v7->super.__vftable->Unk088(&v7->super); /*0x7bda65*/
  v7->super.__vftable->super.super.Unk54((NiD3DShaderInterface *)v7, (UInt32)v1->ShaderDeclaration); /*0x7bda71*/
  shader = (SkyShader *)v1->shader; /*0x7bda73*/
  if ( shader != v7 ) /*0x7bda78*/
  {
    if ( shader ) /*0x7bda7c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->super.member) ) /*0x7bda82*/
        shader->super.__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7bda98*/
    }
    v1->shader = &v7->super; /*0x7bda9a*/
    InterlockedIncrement((volatile LONG *)&v7->super.member); /*0x7bdaa1*/
  }
  return (NiD3DShaderDeclaration **)v1; /*0x7bdaa9*/
}
