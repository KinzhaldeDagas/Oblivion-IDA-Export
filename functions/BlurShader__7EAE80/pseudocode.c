NiD3DShaderDeclaration **BlurShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  BlurShader_P20 *v6; // eax
  volatile LONG *v7; // esi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7eaea6*/
  v1 = 0; /*0x7eaeb2*/
  if ( v0 ) /*0x7eaeba*/
    v1 = ShaderDefinition::Init(v0); /*0x7eaec3*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7eaed7*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7eaedc*/
  v4 = DX9ShaderDeclaration; /*0x7eaede*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7eaee5*/
  {
    if ( ShaderDeclaration ) /*0x7eaee9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7eaeef*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7eaf05*/
    }
    v1->ShaderDeclaration = v4; /*0x7eaf09*/
    if ( v4 ) /*0x7eaf0b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7eaf11*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7eaf28*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7eaf3b*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7eaf3d*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7eaf4c*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7eaf55*/
        break; /*0x7eaf55*/
    }
  }
  v6 = (BlurShader_P20 *)FormHeapAlloc(0xD0u); /*0x7eaf63*/
  if ( v6 ) /*0x7eaf79*/
    v7 = (volatile LONG *)BlurShader_P20::BlurShader_P20(v6); /*0x7eaf82*/
  else
    v7 = 0; /*0x7eaf86*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0x84))(v7); /*0x7eaf9a*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB0))(v7); /*0x7eafa6*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB4))(v7); /*0x7eafb2*/
  shader = (volatile LONG *)v1->shader; /*0x7eafb4*/
  if ( shader != v7 ) /*0x7eafb9*/
  {
    if ( shader ) /*0x7eafbd*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x7eafc3*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x7eafd9*/
    }
    v1->shader = (BSShader *)v7; /*0x7eafdb*/
    InterlockedIncrement(v7 + 1); /*0x7eafe2*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7eaff3*/
  return (NiD3DShaderDeclaration **)v1; /*0x7eaff7*/
}
