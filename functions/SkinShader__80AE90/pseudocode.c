// MoonSugarEffect decode: Skin shader definition uses 6-slot and 8-slot declarations with skin/blend-related inputs. Skinned geometry remains unsafe for first Moon Sugar non-rigid wobble.
ShaderDefinition *SkinShader()
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
  SkinShader *v12; // eax
  volatile LONG *v13; // esi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x80aeb6*/
  v1 = 0; /*0x80aec2*/
  if ( v0 ) /*0x80aeca*/
    v1 = ShaderDefinition::Init(v0); /*0x80aed3*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 6u, 1u); /*0x80aee7*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x80aeec*/
  v4 = DX9ShaderDeclaration; /*0x80aeee*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x80aef5*/
  {
    if ( ShaderDeclaration ) /*0x80aef9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x80aeff*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x80af15*/
    }
    v1->ShaderDeclaration = v4; /*0x80af19*/
    if ( v4 ) /*0x80af1b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x80af21*/
  }
  v5 = CreateDX9ShaderDeclaration(unk_B43104, 8u, 1u); /*0x80af46*/
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x80af4d*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x80af60*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x80af73*/
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x80af86*/
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x80afa2*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x80afbe*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v5->__vftable + 0x14))( /*0x80afd1*/
    v5,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80afe4*/
    v5,
    1,
    1,
    1,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80aff7*/
    v5,
    2,
    2,
    2,
    4,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80b00a*/
    v5,
    3,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80b01d*/
    v5,
    4,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80b030*/
    v5,
    5,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable /*0x80b04c*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable /*0x80b068*/
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
  v6 = (int)v1->ShaderDeclaration; /*0x80b06a*/
  if ( v1->ShaderDeclaration ) /*0x80b06a*/
  {
    v7 = (NiRTTI *)(*(int (__thiscall **)(NiDX9ShaderDeclaration *))(*(_DWORD *)v6 + 4))(v1->ShaderDeclaration); /*0x80b077*/
    if ( v7 ) /*0x80b07b*/
    {
      while ( v7 != &stru_B3F684 ) /*0x80b085*/
      {
        v7 = v7->parent; /*0x80b087*/
        if ( !v7 ) /*0x80b08c*/
          goto LABEL_13; /*0x80b08c*/
      }
      v8 = 1; /*0x80b0e7*/
    }
    else
    {
LABEL_13:
      v8 = 0; /*0x80b08e*/
    }
    v6 &= -(v8 != 0); /*0x80b096*/
  }
  v9 = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v5->__vftable + 1))(v5); /*0x80b09f*/
  if ( v9 ) /*0x80b0a3*/
  {
    while ( v9 != &stru_B3F684 ) /*0x80b0aa*/
    {
      v9 = v9->parent; /*0x80b0ac*/
      if ( !v9 ) /*0x80b0b1*/
        goto LABEL_18; /*0x80b0b1*/
    }
    v10 = 1; /*0x80b0eb*/
  }
  else
  {
LABEL_18:
    v10 = 0; /*0x80b0b3*/
  }
  v11 = v10 != 0 ? (unsigned int)v5 : 0;
  v12 = (SkinShader *)FormHeapAlloc(0x114u); /*0x80b0c2*/
  if ( v12 ) /*0x80b0d8*/
    v13 = (volatile LONG *)SkinShader::SkinShader(v12, v6, v11); /*0x80b0e3*/
  else
    v13 = 0; /*0x80b0ef*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0x84))(v13); /*0x80b103*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xA8))(v13); /*0x80b10f*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xB4))(v13); /*0x80b11b*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xB8))(v13); /*0x80b127*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0x88))(v13); /*0x80b133*/
  shader = (volatile LONG *)v1->shader; /*0x80b135*/
  if ( shader != v13 ) /*0x80b13a*/
  {
    if ( shader ) /*0x80b13e*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x80b144*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x80b15a*/
    }
    v1->shader = (BSShader *)v13; /*0x80b15c*/
    InterlockedIncrement(v13 + 1); /*0x80b163*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x80b174*/
  return v1; /*0x80b178*/
}
