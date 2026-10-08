NiD3DShaderDeclaration **HdrShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  HDRShader *v6; // eax
  HDRShader *v7; // esi
  HDRShader *shader; // ebx
  bool v10; // [esp+20h] [ebp-20h]

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7c0ba6*/
  v1 = 0; /*0x7c0bb2*/
  if ( v0 ) /*0x7c0bba*/
    v1 = ShaderDefinition::Init(v0); /*0x7c0bc3*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7c0bd7*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7c0bdc*/
  v4 = DX9ShaderDeclaration; /*0x7c0bde*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7c0be5*/
  {
    if ( ShaderDeclaration ) /*0x7c0be9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7c0bef*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7c0c05*/
    }
    v1->ShaderDeclaration = v4; /*0x7c0c09*/
    if ( v4 ) /*0x7c0c0b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7c0c11*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7c0c28*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7c0c3b*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7c0c3d*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7c0c4c*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7c0c55*/
        break; /*0x7c0c55*/
    }
  }
  v6 = (HDRShader *)FormHeapAlloc(0x124u); /*0x7c0c63*/
  if ( v6 ) /*0x7c0c79*/
    v7 = HDRShader::HDRShader(v6); /*0x7c0c82*/
  else
    v7 = 0; /*0x7c0c86*/
  v7->__vftable->super.super.Unk084((BSShader *)v7); /*0x7c0c9a*/
  ((void (__thiscall *)(NiRefObject *, bool))v7->__vftable->LoadShader)((NiRefObject *)v7, v10); /*0x7c0ca6*/
  v7->__vftable->UnkB4(v7); /*0x7c0cb2*/
  shader = (HDRShader *)v1->shader; /*0x7c0cb4*/
  if ( shader != v7 ) /*0x7c0cb9*/
  {
    if ( shader ) /*0x7c0cbd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->member) ) /*0x7c0cc3*/
        shader->__vftable->super.super.super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7c0cd9*/
    }
    v1->shader = (BSShader *)v7; /*0x7c0cdb*/
    InterlockedIncrement((volatile LONG *)&v7->member); /*0x7c0ce2*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7c0cf3*/
  return (NiD3DShaderDeclaration **)v1; /*0x7c0cf7*/
}
