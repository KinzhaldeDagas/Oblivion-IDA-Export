ShaderDefinition *HairShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiDX9ShaderDeclaration *v5; // esi
  int v6; // ebx
  NiRTTI *v7; // eax
  char v8; // al
  NiRTTI *v9; // eax
  char v10; // al
  int v11; // esi
  HairShader *v12; // eax
  volatile LONG *v13; // esi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x80d966*/
  v1 = 0; /*0x80d972*/
  if ( v0 ) /*0x80d97a*/
    v1 = ShaderDefinition::Init(v0); /*0x80d983*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 6u, 1u); /*0x80d997*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x80d99c*/
  v4 = DX9ShaderDeclaration; /*0x80d99e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x80d9a5*/
  {
    if ( ShaderDeclaration ) /*0x80d9a9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x80d9af*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x80d9c5*/
    }
    v1->ShaderDeclaration = v4; /*0x80d9c9*/
    if ( v4 ) /*0x80d9cb*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x80d9d1*/
  }
  v5 = CreateDX9ShaderDeclaration(unk_B43104, 8u, 1u); /*0x80d9f6*/
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x80d9fd*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x80da10*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x80da23*/
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x80da36*/
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x80da52*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    4,
    0xE,
    0x80000000,
    2,
    6,
    0,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x80da6e*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    5,
    0xF,
    0x80000001,
    2,
    7,
    0,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v5->__vftable + 0x14))( /*0x80da81*/
    v5,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80da94*/
    v5,
    1,
    1,
    1,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80daa7*/
    v5,
    2,
    2,
    2,
    4,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80daba*/
    v5,
    3,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80dacd*/
    v5,
    4,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80dae0*/
    v5,
    5,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable /*0x80dafc*/
   + 0x13))(
    v5,
    0,
    6,
    0xE,
    0x80000000,
    2,
    6,
    0,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable /*0x80db18*/
   + 0x13))(
    v5,
    0,
    7,
    0xF,
    0x80000001,
    2,
    7,
    0,
    0);
  v6 = (int)v1->ShaderDeclaration; /*0x80db1a*/
  if ( v1->ShaderDeclaration ) /*0x80db1a*/
  {
    v7 = (NiRTTI *)(*(int (__thiscall **)(NiDX9ShaderDeclaration *))(*(_DWORD *)v6 + 4))(v1->ShaderDeclaration); /*0x80db27*/
    if ( v7 ) /*0x80db2b*/
    {
      while ( v7 != &stru_B3F684 ) /*0x80db35*/
      {
        v7 = v7->parent; /*0x80db37*/
        if ( !v7 ) /*0x80db3c*/
          goto LABEL_13; /*0x80db3c*/
      }
      v8 = 1; /*0x80db97*/
    }
    else
    {
LABEL_13:
      v8 = 0; /*0x80db3e*/
    }
    v6 &= -(v8 != 0); /*0x80db46*/
  }
  v9 = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v5->__vftable + 1))(v5); /*0x80db4f*/
  if ( v9 ) /*0x80db53*/
  {
    while ( v9 != &stru_B3F684 ) /*0x80db5a*/
    {
      v9 = v9->parent; /*0x80db5c*/
      if ( !v9 ) /*0x80db61*/
        goto LABEL_18; /*0x80db61*/
    }
    v10 = 1; /*0x80db9b*/
  }
  else
  {
LABEL_18:
    v10 = 0; /*0x80db63*/
  }
  v11 = v10 != 0 ? (unsigned int)v5 : 0;
  v12 = (HairShader *)FormHeapAlloc(0xFCu); /*0x80db72*/
  if ( v12 ) /*0x80db88*/
    v13 = (volatile LONG *)HairShader::HairShader(v12, v6, v11); /*0x80db93*/
  else
    v13 = 0; /*0x80db9f*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0x84))(v13); /*0x80dbb3*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xA8))(v13); /*0x80dbbf*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xB4))(v13); /*0x80dbcb*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xB8))(v13); /*0x80dbd7*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0x88))(v13); /*0x80dbe3*/
  shader = (volatile LONG *)v1->shader; /*0x80dbe5*/
  if ( shader != v13 ) /*0x80dbea*/
  {
    if ( shader ) /*0x80dbee*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x80dbf4*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x80dc0a*/
    }
    v1->shader = (BSShader *)v13; /*0x80dc0c*/
    InterlockedIncrement(v13 + 1); /*0x80dc13*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x80dc24*/
  return v1; /*0x80dc28*/
}
