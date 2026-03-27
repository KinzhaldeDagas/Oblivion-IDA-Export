ShaderDefinition *LighteningShaders_()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // ebp
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // edi
  NiDX9ShaderDeclaration *v5; // esi
  NiDX9ShaderDeclaration *v6; // ebx
  NiDX9ShaderDeclaration *v7; // edi
  int v8; // eax
  char v9; // al
  int v10; // eax
  char v11; // al
  int v12; // esi
  int v13; // eax
  char v14; // al
  int v15; // ebx
  int v16; // eax
  char v17; // al
  int v18; // edi
  Lighting30Shader *v19; // eax
  volatile LONG *v20; // esi
  volatile LONG *shader; // edi
  NiDX9ShaderDeclaration *v23; // [esp+26Ch] [ebp-14h]
  int v24; // [esp+26Ch] [ebp-14h]

  v0 = (ShaderDefinition *)FormHeapAlloc(8u);
  if ( v0 )
    v1 = ShaderDefinition::Init(v0);
  else
    v1 = 0;
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(dword_B43104, 6, 1u);
  ShaderDeclaration = v1->ShaderDeclaration;
  v4 = DX9ShaderDeclaration;
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration )
  {
    if ( ShaderDeclaration )
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) )
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1);
    }
    v1->ShaderDeclaration = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)&v4->members);
  }
  v5 = CreateDX9ShaderDeclaration(dword_B43104, 8, 1u);
  v6 = CreateDX9ShaderDeclaration(dword_B43104, 4, 1u);
  v7 = CreateDX9ShaderDeclaration(dword_B43104, 8, 1u);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))(
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))(
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))(
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v5->__vftable + 0x14))(
    v5,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))(
    v5,
    1,
    1,
    1,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))(
    v5,
    2,
    2,
    2,
    4,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))(
    v5,
    3,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))(
    v5,
    4,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))(
    v5,
    5,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v6->__vftable + 0x14))(
    v6,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v6->__vftable + 0x14))(
    v6,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v6->__vftable + 0x14))(
    v6,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v6->__vftable + 0x14))(
    v6,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v7->__vftable + 0x14))(
    v7,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v7->__vftable + 0x14))(
    v7,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v7->__vftable + 0x14))(
    v7,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v7->__vftable + 0x14))(
    v7,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v7->__vftable
   + 0x13))(
    v7,
    0,
    4,
    0xE,
    0x80000000,
    2,
    6,
    0,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v7->__vftable
   + 0x13))(
    v7,
    0,
    5,
    0xF,
    0x80000001,
    2,
    7,
    0,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, int, _DWORD))v7->__vftable
   + 0x13))(
    v7,
    0,
    6,
    8,
    0x80000002,
    3,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, int, _DWORD))v7->__vftable
   + 0x13))(
    v7,
    0,
    7,
    9,
    0x80000003,
    3,
    5,
    2,
    0);
  v23 = v1->ShaderDeclaration;
  if ( v1->ShaderDeclaration )
  {
    v8 = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration);
    if ( v8 )
    {
      while ( (char *)v8 != dword_B3F684 )
      {
        v8 = *(_DWORD *)(v8 + 4);
        if ( !v8 )
          goto LABEL_15;
      }
      v9 = 1;
    }
    else
    {
LABEL_15:
      v9 = 0;
    }
    v24 = v9 != 0 ? (unsigned int)v23 : 0;
  }
  else
  {
    v24 = (int)v1->ShaderDeclaration;
  }
  v10 = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v5->__vftable + 1))(v5);
  if ( v10 )
  {
    while ( (char *)v10 != dword_B3F684 )
    {
      v10 = *(_DWORD *)(v10 + 4);
      if ( !v10 )
        goto LABEL_20;
    }
    v11 = 1;
  }
  else
  {
LABEL_20:
    v11 = 0;
  }
  v12 = v11 != 0 ? (unsigned int)v5 : 0;
  v13 = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v6->__vftable + 1))(v6);
  if ( v13 )
  {
    while ( (char *)v13 != dword_B3F684 )
    {
      v13 = *(_DWORD *)(v13 + 4);
      if ( !v13 )
        goto LABEL_24;
    }
    v14 = 1;
  }
  else
  {
LABEL_24:
    v14 = 0;
  }
  v15 = v14 != 0 ? (unsigned int)v6 : 0;
  v16 = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v7->__vftable + 1))(v7);
  if ( v16 )
  {
    while ( (char *)v16 != dword_B3F684 )
    {
      v16 = *(_DWORD *)(v16 + 4);
      if ( !v16 )
        goto LABEL_28;
    }
    v17 = 1;
  }
  else
  {
LABEL_28:
    v17 = 0;
  }
  v18 = v17 != 0 ? (unsigned int)v7 : 0;
  v19 = (Lighting30Shader *)FormHeapAlloc(0xA0u);
  if ( v19 )
    v20 = (volatile LONG *)Lighting30Shader::Lighting30Shader(v19, v24, v12, v15, v18);
  else
    v20 = 0;
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0x84))(v20);
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0xA8))(v20);
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0xB4))(v20);
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0x88))(v20);
  shader = (volatile LONG *)v1->shader;
  if ( shader != v20 )
  {
    if ( shader )
    {
      if ( !InterlockedDecrement(shader + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1);
    }
    v1->shader = (BSShader *)v20;
    InterlockedIncrement(v20 + 1);
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration);
  return v1;
}
