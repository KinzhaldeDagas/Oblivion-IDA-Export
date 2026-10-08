ShaderDefinition *sub_8122A0()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // esi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiDX9ShaderDeclaration *v4; // ebx
  int v5; // edi
  NiRTTI *v6; // eax
  char v7; // al
  DistantLODShader *v8; // eax
  volatile LONG *v9; // edi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x8122c6*/
  v1 = 0; /*0x8122d2*/
  if ( v0 ) /*0x8122da*/
    v1 = ShaderDefinition::Init(v0); /*0x8122e3*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 4u, 1u); /*0x8122f7*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x8122fc*/
  v4 = DX9ShaderDeclaration; /*0x8122fe*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x812305*/
  {
    if ( ShaderDeclaration ) /*0x812309*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x81230f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x812325*/
    }
    v1->ShaderDeclaration = v4; /*0x812329*/
    if ( v4 ) /*0x81232b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x812331*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x812348*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x81235b*/
    v1->ShaderDeclaration,
    1,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x81236e*/
    v1->ShaderDeclaration,
    2,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, _DWORD, int, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x81238a*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    3,
    6,
    0x80000000,
    0,
    5,
    1,
    0);
  v5 = (int)v1->ShaderDeclaration; /*0x81238c*/
  if ( v1->ShaderDeclaration ) /*0x81238c*/
  {
    v6 = (NiRTTI *)(*(int (__thiscall **)(NiDX9ShaderDeclaration *))(*(_DWORD *)v5 + 4))(v1->ShaderDeclaration); /*0x812399*/
    if ( v6 ) /*0x81239d*/
    {
      while ( v6 != &stru_B3F684 ) /*0x8123a5*/
      {
        v6 = v6->parent; /*0x8123a7*/
        if ( !v6 ) /*0x8123ac*/
          goto LABEL_13; /*0x8123ac*/
      }
      v7 = 1; /*0x8123e1*/
    }
    else
    {
LABEL_13:
      v7 = 0; /*0x8123ae*/
    }
    v5 &= -(v7 != 0); /*0x8123b6*/
  }
  v8 = (DistantLODShader *)FormHeapAlloc(0x110u); /*0x8123bd*/
  if ( v8 ) /*0x8123d3*/
    v9 = (volatile LONG *)DistantLODShader::DistantLODShader(v8, v5); /*0x8123dd*/
  else
    v9 = 0; /*0x8123e5*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0x84))(v9); /*0x8123f9*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0xA8))(v9); /*0x812405*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0xAC))(v9); /*0x812411*/
  shader = (volatile LONG *)v1->shader; /*0x812413*/
  if ( shader != v9 ) /*0x812418*/
  {
    if ( shader ) /*0x81241c*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x812422*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x812438*/
    }
    v1->shader = (BSShader *)v9; /*0x81243a*/
    InterlockedIncrement(v9 + 1); /*0x812441*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x812452*/
  return v1; /*0x812456*/
}
