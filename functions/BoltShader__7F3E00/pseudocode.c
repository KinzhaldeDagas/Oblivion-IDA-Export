ShaderDefinition *BoltShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // esi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiDX9ShaderDeclaration *v4; // ebx
  NiDX9ShaderDeclaration *v5; // edi
  NiRTTI *v6; // eax
  char v7; // al
  BoltShader *v8; // eax
  BSShader *v9; // edi
  BSShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7f3e26*/
  v1 = 0; /*0x7f3e32*/
  if ( v0 ) /*0x7f3e3a*/
    v1 = ShaderDefinition::Init(v0); /*0x7f3e43*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 5u, 1u); /*0x7f3e57*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7f3e5c*/
  v4 = DX9ShaderDeclaration; /*0x7f3e5e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7f3e65*/
  {
    if ( ShaderDeclaration ) /*0x7f3e69*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7f3e6f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7f3e85*/
    }
    v1->ShaderDeclaration = v4; /*0x7f3e89*/
    if ( v4 ) /*0x7f3e8b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7f3e91*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7f3ea8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7f3ebb*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7f3ece*/
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7f3ee1*/
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, _DWORD, int, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7f3efd*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    4,
    6,
    0x80000000,
    0,
    0xA,
    1,
    0);
  v5 = v1->ShaderDeclaration; /*0x7f3eff*/
  if ( v1->ShaderDeclaration )
  {
    v6 = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v5->__vftable + 1))(v1->ShaderDeclaration); /*0x7f3f0c*/
    if ( v6 ) /*0x7f3f10*/
    {
      while ( v6 != &stru_B3F684 ) /*0x7f3f17*/
      {
        v6 = v6->parent; /*0x7f3f19*/
        if ( !v6 ) /*0x7f3f1e*/
          goto LABEL_13; /*0x7f3f1e*/
      }
      v7 = 1; /*0x7f3f53*/
    }
    else
    {
LABEL_13:
      v7 = 0; /*0x7f3f20*/
    }
    v5 = v7 != 0 ? v5 : 0;
  }
  v8 = (BoltShader *)FormHeapAlloc(0x1A4u); /*0x7f3f2f*/
  if ( v8 ) /*0x7f3f45*/
    v9 = (BSShader *)BoltShader::BoltShader(v8, v5); /*0x7f3f4f*/
  else
    v9 = 0; /*0x7f3f57*/
  v9->__vftable->Unk084(v9); /*0x7f3f6b*/
  ((void (__thiscall *)(BSShader *))v9->__vftable[1].super.super.super.super.Destructor)(v9); /*0x7f3f77*/
  v9->__vftable[1].super.super.super.GetType((NiShader *)v9); /*0x7f3f83*/
  v9->__vftable->Unk088(v9); /*0x7f3f8f*/
  shader = v1->shader; /*0x7f3f91*/
  if ( shader != v9 ) /*0x7f3f96*/
  {
    if ( shader ) /*0x7f3f9a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->member) ) /*0x7f3fa0*/
        shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7f3fb6*/
    }
    v1->shader = v9; /*0x7f3fb8*/
    InterlockedIncrement((volatile LONG *)&v9->member); /*0x7f3fbf*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7f3fd0*/
  return v1; /*0x7f3fd4*/
}
