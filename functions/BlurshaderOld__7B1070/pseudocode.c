NiD3DShaderDeclaration **BlurshaderOld()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  BlurShader *v6; // eax
  volatile LONG *v7; // esi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7b1096*/
  v1 = 0; /*0x7b10a2*/
  if ( v0 ) /*0x7b10aa*/
    v1 = ShaderDefinition::Init(v0); /*0x7b10b3*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7b10c7*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7b10cc*/
  v4 = DX9ShaderDeclaration; /*0x7b10ce*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7b10d5*/
  {
    if ( ShaderDeclaration ) /*0x7b10d9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7b10df*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7b10f5*/
    }
    v1->ShaderDeclaration = v4; /*0x7b10f9*/
    if ( v4 ) /*0x7b10fb*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7b1101*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7b1118*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7b112b*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7b112d*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7b113c*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7b1145*/
        break; /*0x7b1145*/
    }
  }
  v6 = (BlurShader *)FormHeapAlloc(0xE4u); /*0x7b1153*/
  if ( v6 ) /*0x7b1169*/
    v7 = (volatile LONG *)BlurShader::BlurShader(v6); /*0x7b1172*/
  else
    v7 = 0; /*0x7b1176*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0x84))(v7); /*0x7b118a*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB0))(v7); /*0x7b1196*/
  (*(void (__thiscall **)(volatile LONG *))(*v7 + 0xB4))(v7); /*0x7b11a2*/
  shader = (volatile LONG *)v1->shader; /*0x7b11a4*/
  if ( shader != v7 ) /*0x7b11a9*/
  {
    if ( shader ) /*0x7b11ad*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x7b11b3*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x7b11c9*/
    }
    v1->shader = (BSShader *)v7; /*0x7b11cb*/
    InterlockedIncrement(v7 + 1); /*0x7b11d2*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7b11e3*/
  return (NiD3DShaderDeclaration **)v1; /*0x7b11e7*/
}
