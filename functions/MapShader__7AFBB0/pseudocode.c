NiD3DShaderDeclaration **MapShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  MapShader *v6; // eax
  volatile LONG *v7; // esi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7afbd6*/
  v1 = 0; /*0x7afbe2*/
  if ( v0 ) /*0x7afbea*/
    v1 = ShaderDefinition::Init(v0); /*0x7afbf3*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7afc07*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7afc0c*/
  v4 = DX9ShaderDeclaration; /*0x7afc0e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7afc15*/
  {
    if ( ShaderDeclaration ) /*0x7afc19*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7afc1f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7afc35*/
    }
    v1->ShaderDeclaration = v4; /*0x7afc39*/
    if ( v4 ) /*0x7afc3b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7afc41*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7afc58*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7afc6b*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7afc6d*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7afc7c*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7afc85*/
        break; /*0x7afc85*/
    }
  }
  v6 = (MapShader *)FormHeapAlloc(0xC4u); /*0x7afc93*/
  if ( v6 ) /*0x7afca9*/
    v7 = (volatile LONG *)MapShader::MapShader(v6); /*0x7afcb2*/
  else
    v7 = 0; /*0x7afcb6*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0x84))(v7); /*0x7afcca*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB0))(v7); /*0x7afcd6*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB4))(v7); /*0x7afce2*/
  shader = (volatile LONG *)v1->shader; /*0x7afce4*/
  if ( shader != v7 ) /*0x7afce9*/
  {
    if ( shader ) /*0x7afced*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x7afcf3*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x7afd09*/
    }
    v1->shader = (BSShader *)v7; /*0x7afd0b*/
    InterlockedIncrement(v7 + 1); /*0x7afd12*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7afd23*/
  return (NiD3DShaderDeclaration **)v1; /*0x7afd27*/
}
