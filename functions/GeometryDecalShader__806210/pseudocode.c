ShaderDefinition *GeometryDecalShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ebx
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v8; // ebx
  NiDX9ShaderDeclaration *v9; // esi
  int v10; // eax
  void (__thiscall ***v11)(_DWORD, int); // ebx
  int i; // eax
  GeometryDecalShader *v13; // eax
  GeometryDecalShader *v14; // esi
  BSShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u);
  if ( v0 )
    v1 = ShaderDefinition::Init(v0);
  else
    v1 = 0;
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(dword_B43104, 2, 1u);
  v3 = InterlockedDecrement;
  v4 = (int)DX9ShaderDeclaration;
  v5 = dword_B47604;
  if ( dword_B47604 != v4 )
  {
    if ( v5 )
    {
      v6 = (void (__thiscall ***)(_DWORD, int))dword_B47604;
      if ( !v3((volatile LONG *)(v5 + 4)) )
      {
        if ( v6 )
          (**v6)(v6, 1);
      }
    }
    v5 = v4;
    dword_B47604 = v4;
    if ( v4 )
    {
      InterlockedIncrement((volatile LONG *)(v4 + 4));
      v5 = dword_B47604;
    }
  }
  ShaderDeclaration = v1->ShaderDeclaration;
  v8 = (NiDX9ShaderDeclaration *)v5;
  if ( v1->ShaderDeclaration != (NiDX9ShaderDeclaration *)v5 )
  {
    if ( ShaderDeclaration )
    {
      if ( !v3((volatile LONG *)&ShaderDeclaration->members) )
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1);
    }
    v1->ShaderDeclaration = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)&v8->members);
  }
  v9 = CreateDX9ShaderDeclaration(dword_B43104, 4, 1u);
  v10 = dword_B47608;
  if ( (NiDX9ShaderDeclaration *)dword_B47608 != v9 )
  {
    if ( v10 )
    {
      v11 = (void (__thiscall ***)(_DWORD, int))dword_B47608;
      if ( !v3((volatile LONG *)(v10 + 4)) )
      {
        if ( v11 )
          (**v11)(v11, 1);
      }
    }
    dword_B47608 = (int)v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)&v9->members);
  }
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
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)dword_B47608 + 0x50))(
    dword_B47608,
    0,
    0,
    0,
    2,
    0);
  (*(void (__thiscall **)(int, int, int, int, int, _DWORD))(*(_DWORD *)dword_B47608 + 0x50))(
    dword_B47608,
    1,
    1,
    1,
    3,
    0);
  (*(void (__thiscall **)(int, int, int, int, int, _DWORD))(*(_DWORD *)dword_B47608 + 0x50))(
    dword_B47608,
    2,
    2,
    2,
    4,
    0);
  (*(void (__thiscall **)(int, int, int, int, int, _DWORD))(*(_DWORD *)dword_B47608 + 0x50))(
    dword_B47608,
    3,
    3,
    3,
    2,
    0);
  if ( v1->ShaderDeclaration )
  {
    for ( i = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration);
          i;
          i = *(_DWORD *)(i + 4) )
    {
      if ( (char *)i == dword_B3F684 )
        break;
    }
  }
  v13 = (GeometryDecalShader *)FormHeapAlloc(0xA0u);
  if ( v13 )
    v14 = GeometryDecalShader::GeometryDecalShader(v13);
  else
    v14 = 0;
  (*(void (__thiscall **)(GeometryDecalShader *))(*(_DWORD *)v14 + 0x84))(v14);
  sub_805320((volatile LONG **)v14);
  sub_805670(v14);
  (*(void (__thiscall **)(GeometryDecalShader *))(*(_DWORD *)v14 + 0x88))(v14);
  (*(void (__thiscall **)(GeometryDecalShader *, NiDX9ShaderDeclaration *))(*(_DWORD *)v14 + 0x54))(
    v14,
    v1->ShaderDeclaration);
  shader = v1->shader;
  if ( shader != (BSShader *)v14 )
  {
    if ( shader )
    {
      if ( !v3((volatile LONG *)&shader->member) )
        shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1);
    }
    v1->shader = (BSShader *)v14;
    InterlockedIncrement((volatile LONG *)v14 + 1);
  }
  return v1;
}
