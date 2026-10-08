NiD3DShaderDeclaration **MenuBackGroundShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  MenuBGShader *v6; // eax
  volatile LONG *v7; // esi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7b1f46*/
  v1 = 0; /*0x7b1f52*/
  if ( v0 ) /*0x7b1f5a*/
    v1 = ShaderDefinition::Init(v0); /*0x7b1f63*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7b1f77*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7b1f7c*/
  v4 = DX9ShaderDeclaration; /*0x7b1f7e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7b1f85*/
  {
    if ( ShaderDeclaration ) /*0x7b1f89*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7b1f8f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7b1fa5*/
    }
    v1->ShaderDeclaration = v4; /*0x7b1fa9*/
    if ( v4 ) /*0x7b1fab*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7b1fb1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7b1fc8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7b1fdb*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7b1fdd*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7b1fec*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7b1ff5*/
        break; /*0x7b1ff5*/
    }
  }
  v6 = (MenuBGShader *)FormHeapAlloc(0xB8u); /*0x7b2003*/
  if ( v6 ) /*0x7b2019*/
    v7 = (volatile LONG *)MenuBGShader::MenuBGShader(v6); /*0x7b2022*/
  else
    v7 = 0; /*0x7b2026*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0x84))(v7); /*0x7b203a*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB0))(v7); /*0x7b2046*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB4))(v7); /*0x7b2052*/
  shader = (volatile LONG *)v1->shader; /*0x7b2054*/
  if ( shader != v7 ) /*0x7b2059*/
  {
    if ( shader ) /*0x7b205d*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x7b2063*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x7b2079*/
    }
    v1->shader = (BSShader *)v7; /*0x7b207b*/
    InterlockedIncrement(v7 + 1); /*0x7b2082*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7b2093*/
  return (NiD3DShaderDeclaration **)v1; /*0x7b2097*/
}
