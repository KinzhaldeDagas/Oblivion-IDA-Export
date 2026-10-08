// MoonSugarEffect decode: CopyShader definition constructor pattern: allocate ShaderDefinition, create two-element screen-space declaration, allocate CopyShader object, load programs, build passes, refcount into definition.
NiD3DShaderDeclaration **CopyShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  CopyShader *v6; // eax
  volatile LONG *v7; // esi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x804c76*/
  v1 = 0; /*0x804c82*/
  if ( v0 ) /*0x804c8a*/
    v1 = ShaderDefinition::Init(v0); /*0x804c93*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x804ca7*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x804cac*/
  v4 = DX9ShaderDeclaration; /*0x804cae*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x804cb5*/
  {
    if ( ShaderDeclaration ) /*0x804cb9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x804cbf*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x804cd5*/
    }
    v1->ShaderDeclaration = v4; /*0x804cd9*/
    if ( v4 ) /*0x804cdb*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x804ce1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x804cf8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x804d0b*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x804d0d*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x804d1c*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x804d25*/
        break; /*0x804d25*/
    }
  }
  v6 = (CopyShader *)FormHeapAlloc(0xB8u); /*0x804d33*/
  if ( v6 ) /*0x804d49*/
    v7 = (volatile LONG *)CopyShader::CopyShader(v6); /*0x804d52*/
  else
    v7 = 0; /*0x804d56*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0x84))(v7); /*0x804d6a*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB0))(v7); /*0x804d76*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB4))(v7); /*0x804d82*/
  shader = (volatile LONG *)v1->shader; /*0x804d84*/
  if ( shader != v7 ) /*0x804d89*/
  {
    if ( shader ) /*0x804d8d*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x804d93*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x804da9*/
    }
    v1->shader = (BSShader *)v7; /*0x804dab*/
    InterlockedIncrement(v7 + 1); /*0x804db2*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x804dc3*/
  return (NiD3DShaderDeclaration **)v1; /*0x804dc7*/
}
