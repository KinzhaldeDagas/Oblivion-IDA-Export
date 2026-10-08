// MoonSugarEffect decode: Precipitation shader definition creates a 3-element, 2-stream declaration, proving some TES4 shaders are multi-stream. A one-stream plugin wobble shader cannot be universal.
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

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7eee66*/
  v1 = 0; /*0x7eee72*/
  if ( v0 ) /*0x7eee7a*/
    v1 = ShaderDefinition::Init(v0); /*0x7eee83*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 3, 2u); /*0x7eee97*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7eee9c*/
  v4 = DX9ShaderDeclaration; /*0x7eee9e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7eeea5*/
  {
    if ( ShaderDeclaration ) /*0x7eeea9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7eeeaf*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7eeec5*/
    }
    v1->ShaderDeclaration = v4; /*0x7eeec9*/
    if ( v4 ) /*0x7eeecb*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7eeed1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7eeee8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7eeefb*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, _DWORD, int, unsigned int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7eef17*/
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
  if ( v1->ShaderDeclaration ) /*0x7eef19*/
  {
    for ( i = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7eef28*/
          i;
          i = *(_DWORD *)(i + 4) )
    {
      if ( (char *)i == stru_B3F684 ) /*0x7eef35*/
        break; /*0x7eef35*/
    }
  }
  v6 = (PrecipitationShader *)FormHeapAlloc(0xBCu); /*0x7eef43*/
  if ( v6 ) /*0x7eef59*/
    v7 = (volatile LONG *)PrecipitationShader::PrecipitationShader(v6); /*0x7eef62*/
  else
    v7 = 0; /*0x7eef66*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0x84))(v7); /*0x7eef7a*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xA8))(v7); /*0x7eef86*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB4))(v7); /*0x7eef92*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0x88))(v7); /*0x7eef9e*/
  (*(void (__thiscall **)(volatile LONG *, NiDX9ShaderDeclaration *))(*v7 + 0x54))(v7, v1->ShaderDeclaration); /*0x7eefaa*/
  shader = (volatile LONG *)v1->shader; /*0x7eefac*/
  if ( shader != v7 ) /*0x7eefb1*/
  {
    if ( shader ) /*0x7eefb5*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x7eefbb*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x7eefd1*/
    }
    v1->shader = (BSShader *)v7; /*0x7eefd3*/
    InterlockedIncrement(v7 + 1); /*0x7eefda*/
  }
  return (NiD3DShaderDeclaration **)v1; /*0x7eefe2*/
}
