// MoonSugarEffect decode: shader definition ID 1 builds the base ShadowLightShader with multiple TES4 declarations; Parallax/Skin copy this shader's constant maps via their vtable +0x88 path.
ShaderDefinition *sub_7CBDC0()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // ebp
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // edi
  NiDX9ShaderDeclaration *v5; // esi
  NiDX9ShaderDeclaration *v6; // ebx
  NiDX9ShaderDeclaration *v7; // edi
  NiRTTI *v8; // eax
  char v9; // al
  NiRTTI *v10; // eax
  char v11; // al
  int v12; // esi
  NiRTTI *v13; // eax
  char v14; // al
  int v15; // ebx
  NiRTTI *v16; // eax
  char v17; // al
  int v18; // edi
  ShadowLightShader *v19; // eax
  volatile LONG *v20; // esi
  volatile LONG *shader; // edi
  NiDX9ShaderDeclaration *v23; // [esp+26Ch] [ebp-14h]
  int v24; // [esp+26Ch] [ebp-14h]

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7cbde9*/
  if ( v0 ) /*0x7cbdff*/
    v1 = ShaderDefinition::Init(v0); /*0x7cbe08*/
  else
    v1 = 0; /*0x7cbe0c*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 6u, 1u); /*0x7cbe20*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7cbe25*/
  v4 = DX9ShaderDeclaration; /*0x7cbe28*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7cbe2f*/
  {
    if ( ShaderDeclaration ) /*0x7cbe33*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7cbe39*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7cbe4f*/
    }
    v1->ShaderDeclaration = v4; /*0x7cbe53*/
    if ( v4 ) /*0x7cbe56*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7cbe5c*/
  }
  v5 = CreateDX9ShaderDeclaration(unk_B43104, 8u, 1u); /*0x7cbe7d*/
  v6 = CreateDX9ShaderDeclaration(unk_B43104, 4u, 1u); /*0x7cbe86*/
  v7 = CreateDX9ShaderDeclaration(unk_B43104, 8u, 1u); /*0x7cbea5*/
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7cbeac*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7cbec0*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7cbed4*/
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7cbee8*/
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x7cbf05*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x7cbf22*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v5->__vftable + 0x14))( /*0x7cbf35*/
    v5,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x7cbf48*/
    v5,
    1,
    1,
    1,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x7cbf5b*/
    v5,
    2,
    2,
    2,
    4,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x7cbf6e*/
    v5,
    3,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x7cbf81*/
    v5,
    4,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x7cbf94*/
    v5,
    5,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable /*0x7cbfb0*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable /*0x7cbfcc*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v6->__vftable + 0x14))( /*0x7cbfdf*/
    v6,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v6->__vftable + 0x14))( /*0x7cbff2*/
    v6,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v6->__vftable + 0x14))( /*0x7cc005*/
    v6,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v6->__vftable + 0x14))( /*0x7cc018*/
    v6,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v7->__vftable + 0x14))( /*0x7cc02b*/
    v7,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v7->__vftable + 0x14))( /*0x7cc03e*/
    v7,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v7->__vftable + 0x14))( /*0x7cc051*/
    v7,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v7->__vftable + 0x14))( /*0x7cc064*/
    v7,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v7->__vftable /*0x7cc080*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v7->__vftable /*0x7cc09c*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, int, _DWORD))v7->__vftable /*0x7cc0b8*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, int, _DWORD))v7->__vftable /*0x7cc0d4*/
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
  v23 = v1->ShaderDeclaration; /*0x7cc0db*/
  if ( v1->ShaderDeclaration )
  {
    v8 = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7cc0ec*/
    if ( v8 ) /*0x7cc0f0*/
    {
      while ( v8 != &stru_B3F684 ) /*0x7cc0f7*/
      {
        v8 = v8->parent; /*0x7cc0fd*/
        if ( !v8 ) /*0x7cc102*/
          goto LABEL_15; /*0x7cc102*/
      }
      v9 = 1; /*0x7cc1bd*/
    }
    else
    {
LABEL_15:
      v9 = 0; /*0x7cc104*/
    }
    v24 = v9 != 0 ? (unsigned int)v23 : 0;
  }
  else
  {
    v24 = (int)v1->ShaderDeclaration; /*0x7cc0e1*/
  }
  v10 = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v5->__vftable + 1))(v5); /*0x7cc119*/
  if ( v10 ) /*0x7cc11d*/
  {
    while ( v10 != &stru_B3F684 ) /*0x7cc125*/
    {
      v10 = v10->parent; /*0x7cc12b*/
      if ( !v10 ) /*0x7cc130*/
        goto LABEL_20; /*0x7cc130*/
    }
    v11 = 1; /*0x7cc1c4*/
  }
  else
  {
LABEL_20:
    v11 = 0; /*0x7cc132*/
  }
  v12 = v11 != 0 ? (unsigned int)v5 : 0;
  v13 = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v6->__vftable + 1))(v6); /*0x7cc143*/
  if ( v13 ) /*0x7cc147*/
  {
    while ( v13 != &stru_B3F684 ) /*0x7cc155*/
    {
      v13 = v13->parent; /*0x7cc157*/
      if ( !v13 ) /*0x7cc15c*/
        goto LABEL_24; /*0x7cc15c*/
    }
    v14 = 1; /*0x7cc1cb*/
  }
  else
  {
LABEL_24:
    v14 = 0; /*0x7cc15e*/
  }
  v15 = v14 != 0 ? (unsigned int)v6 : 0;
  v16 = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v7->__vftable + 1))(v7); /*0x7cc16f*/
  if ( v16 ) /*0x7cc173*/
  {
    while ( v16 != &stru_B3F684 ) /*0x7cc17a*/
    {
      v16 = v16->parent; /*0x7cc17c*/
      if ( !v16 ) /*0x7cc181*/
        goto LABEL_28; /*0x7cc181*/
    }
    v17 = 1; /*0x7cc1cf*/
  }
  else
  {
LABEL_28:
    v17 = 0; /*0x7cc183*/
  }
  v18 = v17 != 0 ? (unsigned int)v7 : 0;
  v19 = (ShadowLightShader *)FormHeapAlloc(0x9Cu); /*0x7cc192*/
  if ( v19 ) /*0x7cc1a8*/
    v20 = (volatile LONG *)ShadowLightShader::ShadowLightShader(v19, v24, v12, v15, v18); /*0x7cc1b9*/
  else
    v20 = 0; /*0x7cc1d3*/
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0x84))(v20); /*0x7cc1e7*/
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0xA8))(v20); /*0x7cc1f3*/
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0xB4))(v20); /*0x7cc1ff*/
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0xB8))(v20); /*0x7cc20b*/
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0x88))(v20); /*0x7cc217*/
  shader = (volatile LONG *)v1->shader; /*0x7cc219*/
  if ( shader != v20 ) /*0x7cc21e*/
  {
    if ( shader ) /*0x7cc222*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x7cc228*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x7cc23e*/
    }
    v1->shader = (BSShader *)v20; /*0x7cc240*/
    InterlockedIncrement(v20 + 1); /*0x7cc247*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7cc259*/
  return v1; /*0x7cc25d*/
}
