NiD3DShaderDeclaration **DebugShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  DebugShader *v6; // eax
  DebugShader *v7; // esi
  BSShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7fa936*/
  v1 = 0; /*0x7fa942*/
  if ( v0 ) /*0x7fa94a*/
    v1 = ShaderDefinition::Init(v0); /*0x7fa953*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7fa967*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7fa96c*/
  v4 = DX9ShaderDeclaration; /*0x7fa96e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7fa975*/
  {
    if ( ShaderDeclaration ) /*0x7fa979*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7fa97f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7fa995*/
    }
    v1->ShaderDeclaration = v4; /*0x7fa999*/
    if ( v4 ) /*0x7fa99b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7fa9a1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7fa9b8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7fa9cb*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7fa9cd*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7fa9dc*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7fa9e5*/
        break; /*0x7fa9e5*/
    }
  }
  v6 = (DebugShader *)FormHeapAlloc(0xCCu); /*0x7fa9f3*/
  if ( v6 ) /*0x7faa09*/
    v7 = DebugShader::DebugShader(v6); /*0x7faa12*/
  else
    v7 = 0; /*0x7faa16*/
  (*(void (__thiscall **)(DebugShader *))(*(_DWORD *)v7 + 0x84))(v7); /*0x7faa2a*/
  sub_7FA090((volatile LONG **)v7); /*0x7faa2e*/
  sub_7FA220((NiD3DPass **)v7); /*0x7faa35*/
  (*(void (__thiscall **)(DebugShader *, NiDX9ShaderDeclaration *))(*(_DWORD *)v7 + 0x54))(v7, v1->ShaderDeclaration); /*0x7faa44*/
  shader = v1->shader; /*0x7faa46*/
  if ( shader != (BSShader *)v7 ) /*0x7faa4b*/
  {
    if ( shader ) /*0x7faa4f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->member) ) /*0x7faa55*/
        shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7faa6b*/
    }
    v1->shader = (BSShader *)v7; /*0x7faa6d*/
    InterlockedIncrement((volatile LONG *)v7 + 1); /*0x7faa74*/
  }
  return (NiD3DShaderDeclaration **)v1; /*0x7faa7c*/
}
