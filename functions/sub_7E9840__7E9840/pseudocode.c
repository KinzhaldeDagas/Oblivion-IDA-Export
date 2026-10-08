ShaderDefinition *sub_7E9840()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // esi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiDX9ShaderDeclaration *v4; // ebx
  int v5; // edi
  NiRTTI *v6; // eax
  char v7; // al
  TallGrassShader *v8; // eax
  volatile LONG *v9; // edi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7e9866*/
  v1 = 0; /*0x7e9872*/
  if ( v0 ) /*0x7e987a*/
    v1 = ShaderDefinition::Init(v0); /*0x7e9883*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 5u, 1u); /*0x7e9897*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7e989c*/
  v4 = DX9ShaderDeclaration; /*0x7e989e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7e98a5*/
  {
    if ( ShaderDeclaration ) /*0x7e98a9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7e98af*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7e98c5*/
    }
    v1->ShaderDeclaration = v4; /*0x7e98c9*/
    if ( v4 ) /*0x7e98cb*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7e98d1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7e98e8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7e98fb*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7e990e*/
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7e9921*/
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, _DWORD, int, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7e993d*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    4,
    6,
    0x80000000,
    0,
    5,
    1,
    0);
  v5 = (int)v1->ShaderDeclaration; /*0x7e993f*/
  if ( v1->ShaderDeclaration ) /*0x7e993f*/
  {
    v6 = (NiRTTI *)(*(int (__thiscall **)(NiDX9ShaderDeclaration *))(*(_DWORD *)v5 + 4))(v1->ShaderDeclaration); /*0x7e994c*/
    if ( v6 ) /*0x7e9950*/
    {
      while ( v6 != &stru_B3F684 ) /*0x7e9957*/
      {
        v6 = v6->parent; /*0x7e9959*/
        if ( !v6 ) /*0x7e995e*/
          goto LABEL_13; /*0x7e995e*/
      }
      v7 = 1; /*0x7e9993*/
    }
    else
    {
LABEL_13:
      v7 = 0; /*0x7e9960*/
    }
    v5 &= -(v7 != 0); /*0x7e9968*/
  }
  v8 = (TallGrassShader *)FormHeapAlloc(0x194u); /*0x7e996f*/
  if ( v8 ) /*0x7e9985*/
    v9 = (volatile LONG *)TallGrassShader::TallGrassShader(v8, v5); /*0x7e998f*/
  else
    v9 = 0; /*0x7e9997*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0x84))(v9); /*0x7e99ab*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0xA8))(v9); /*0x7e99b7*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0xAC))(v9); /*0x7e99c3*/
  shader = (volatile LONG *)v1->shader; /*0x7e99c5*/
  if ( shader != v9 ) /*0x7e99ca*/
  {
    if ( shader ) /*0x7e99ce*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x7e99d4*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x7e99ea*/
    }
    v1->shader = (BSShader *)v9; /*0x7e99ec*/
    InterlockedIncrement(v9 + 1); /*0x7e99f3*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7e9a04*/
  return v1; /*0x7e9a08*/
}
