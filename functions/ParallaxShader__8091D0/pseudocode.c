ShaderDefinition *ParallaxShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiDX9ShaderDeclaration *v5; // esi
  int v6; // ebx
  int v7; // eax
  char v8; // al
  int v9; // eax
  char v10; // al
  int v11; // esi
  ParallaxShader *v12; // eax
  volatile LONG *v13; // esi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u);
  v1 = 0;
  if ( v0 )
    v1 = ShaderDefinition::Init(v0);
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
  v6 = (int)v1->ShaderDeclaration;
  if ( v1->ShaderDeclaration )
  {
    v7 = (*(int (__thiscall **)(NiDX9ShaderDeclaration *))(*(_DWORD *)v6 + 4))(v1->ShaderDeclaration);
    if ( v7 )
    {
      while ( (char *)v7 != dword_B3F684 )
      {
        v7 = *(_DWORD *)(v7 + 4);
        if ( !v7 )
          goto LABEL_13;
      }
      v8 = 1;
    }
    else
    {
LABEL_13:
      v8 = 0;
    }
    v6 &= -(v8 != 0);
  }
  v9 = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v5->__vftable + 1))(v5);
  if ( v9 )
  {
    while ( (char *)v9 != dword_B3F684 )
    {
      v9 = *(_DWORD *)(v9 + 4);
      if ( !v9 )
        goto LABEL_18;
    }
    v10 = 1;
  }
  else
  {
LABEL_18:
    v10 = 0;
  }
  v11 = v10 != 0 ? (unsigned int)v5 : 0;
  v12 = (ParallaxShader *)FormHeapAlloc(0x1A4u);
  if ( v12 )
    v13 = (volatile LONG *)ParallaxShader::ParallaxShader(v12, v6, v11);
  else
    v13 = 0;
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0x84))(v13);
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xA8))(v13);
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xB4))(v13);
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xB8))(v13);
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0x88))(v13);
  shader = (volatile LONG *)v1->shader;
  if ( shader != v13 )
  {
    if ( shader )
    {
      if ( !InterlockedDecrement(shader + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1);
    }
    v1->shader = (BSShader *)v13;
    InterlockedIncrement(v13 + 1);
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration);
  return v1;
}
