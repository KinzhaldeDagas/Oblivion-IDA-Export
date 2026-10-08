// Oblivion Lighting30 shader-definition construction. Builds a one-stream six-element object declaration (POSITION float3, NORMAL float3, COLOR float4, TEXCOORD0 float2, generated TANGENT/BINORMAL float3) and a one-stream eight-element skinned declaration that inserts BLENDWEIGHT float4 and BLENDINDICES D3DCOLOR. Lighting30 stores these at +0x8C/+0x90; SetupRenderPass selects +0x90 when BSShaderProperty flags+0x1C bit 1 is set. Two additional compact/expanded declarations are also constructed for alternate routes.
ShaderDefinition *Lighting30ShaderDefinition_Create()
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

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7fc7f9*/
  if ( v0 ) /*0x7fc80f*/
    v1 = ShaderDefinition::Init(v0); /*0x7fc818*/
  else
    v1 = 0; /*0x7fc81c*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 6, 1u);// Create Lighting30 one-stream six-element object declaration. /*0x7fc830*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7fc835*/
  v4 = DX9ShaderDeclaration; /*0x7fc838*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7fc83f*/
  {
    if ( ShaderDeclaration ) /*0x7fc843*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7fc849*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7fc85f*/
    }
    v1->ShaderDeclaration = v4; /*0x7fc863*/
    if ( v4 ) /*0x7fc866*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7fc86c*/
  }
  v5 = CreateDX9ShaderDeclaration(unk_B43104, 8, 1u);// Create Lighting30 one-stream eight-element skinned declaration. /*0x7fc88d*/
  v6 = CreateDX9ShaderDeclaration(unk_B43104, 4, 1u);// Create Lighting30 alternate one-stream four-element declaration. /*0x7fc896*/
  v7 = CreateDX9ShaderDeclaration(unk_B43104, 8, 1u);// Create Lighting30 alternate one-stream eight-element declaration. /*0x7fc8b5*/
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7fc8bc*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);                                         // Object declaration element 0: POSITION0, FLOAT3.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7fc8d0*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);                                         // Object declaration element 1: NORMAL0, FLOAT3.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7fc8e4*/
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);                                         // Object declaration element 2: COLOR0, FLOAT4.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7fc8f8*/
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);                                         // Object declaration element 3: TEXCOORD0, FLOAT2.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x7fc915*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    4,
    0xE,
    0x80000000,
    2,
    6,
    0,
    0);                                         // Object declaration element 4: generated TANGENT0, FLOAT3.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x7fc932*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    5,
    0xF,
    0x80000001,
    2,
    7,
    0,
    0);                                         // Object declaration element 5: generated BINORMAL0, FLOAT3.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v5->__vftable + 0x14))( /*0x7fc945*/
    v5,
    0,
    0,
    0,
    2,
    0);                                         // Skinned declaration element 0: POSITION0, FLOAT3.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x7fc958*/
    v5,
    1,
    1,
    1,
    3,
    0);                                         // Skinned declaration element 1: BLENDWEIGHT0, FLOAT4.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x7fc96b*/
    v5,
    2,
    2,
    2,
    4,
    0);                                         // Skinned declaration element 2: BLENDINDICES0, D3DCOLOR (normalized/swizzled packed indices).
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x7fc97e*/
    v5,
    3,
    3,
    3,
    2,
    0);                                         // Skinned declaration element 3: NORMAL0, FLOAT3.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x7fc991*/
    v5,
    4,
    5,
    4,
    3,
    0);                                         // Skinned declaration element 4: COLOR0, FLOAT4.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x7fc9a4*/
    v5,
    5,
    7,
    5,
    1,
    0);                                         // Skinned declaration element 5: TEXCOORD0, FLOAT2.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable /*0x7fc9c0*/
   + 0x13))(
    v5,
    0,
    6,
    0xE,
    0x80000000,
    2,
    6,
    0,
    0);                                         // Skinned declaration element 6: generated TANGENT0, FLOAT3.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable /*0x7fc9dc*/
   + 0x13))(
    v5,
    0,
    7,
    0xF,
    0x80000001,
    2,
    7,
    0,
    0);                                         // Skinned declaration element 7: generated BINORMAL0, FLOAT3.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v6->__vftable + 0x14))( /*0x7fc9ef*/
    v6,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v6->__vftable + 0x14))( /*0x7fca02*/
    v6,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v6->__vftable + 0x14))( /*0x7fca15*/
    v6,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v6->__vftable + 0x14))( /*0x7fca28*/
    v6,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v7->__vftable + 0x14))( /*0x7fca3b*/
    v7,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v7->__vftable + 0x14))( /*0x7fca4e*/
    v7,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v7->__vftable + 0x14))( /*0x7fca61*/
    v7,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v7->__vftable + 0x14))( /*0x7fca74*/
    v7,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v7->__vftable /*0x7fca90*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v7->__vftable /*0x7fcaac*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, int, _DWORD))v7->__vftable /*0x7fcac8*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, int, _DWORD))v7->__vftable /*0x7fcae4*/
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
  v23 = v1->ShaderDeclaration; /*0x7fcaeb*/
  if ( v1->ShaderDeclaration )
  {
    v8 = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7fcafc*/
    if ( v8 ) /*0x7fcb00*/
    {
      while ( (char *)v8 != stru_B3F684 ) /*0x7fcb07*/
      {
        v8 = *(_DWORD *)(v8 + 4); /*0x7fcb0d*/
        if ( !v8 ) /*0x7fcb12*/
          goto LABEL_15; /*0x7fcb12*/
      }
      v9 = 1; /*0x7fcbcd*/
    }
    else
    {
LABEL_15:
      v9 = 0; /*0x7fcb14*/
    }
    v24 = v9 != 0 ? (unsigned int)v23 : 0;
  }
  else
  {
    v24 = (int)v1->ShaderDeclaration; /*0x7fcaf1*/
  }
  v10 = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v5->__vftable + 1))(v5); /*0x7fcb29*/
  if ( v10 ) /*0x7fcb2d*/
  {
    while ( (char *)v10 != stru_B3F684 ) /*0x7fcb35*/
    {
      v10 = *(_DWORD *)(v10 + 4); /*0x7fcb3b*/
      if ( !v10 ) /*0x7fcb40*/
        goto LABEL_20; /*0x7fcb40*/
    }
    v11 = 1; /*0x7fcbd4*/
  }
  else
  {
LABEL_20:
    v11 = 0; /*0x7fcb42*/
  }
  v12 = v11 != 0 ? (unsigned int)v5 : 0;
  v13 = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v6->__vftable + 1))(v6); /*0x7fcb53*/
  if ( v13 ) /*0x7fcb57*/
  {
    while ( (char *)v13 != stru_B3F684 ) /*0x7fcb65*/
    {
      v13 = *(_DWORD *)(v13 + 4); /*0x7fcb67*/
      if ( !v13 ) /*0x7fcb6c*/
        goto LABEL_24; /*0x7fcb6c*/
    }
    v14 = 1; /*0x7fcbdb*/
  }
  else
  {
LABEL_24:
    v14 = 0; /*0x7fcb6e*/
  }
  v15 = v14 != 0 ? (unsigned int)v6 : 0;
  v16 = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v7->__vftable + 1))(v7); /*0x7fcb7f*/
  if ( v16 ) /*0x7fcb83*/
  {
    while ( (char *)v16 != stru_B3F684 ) /*0x7fcb8a*/
    {
      v16 = *(_DWORD *)(v16 + 4); /*0x7fcb8c*/
      if ( !v16 ) /*0x7fcb91*/
        goto LABEL_28; /*0x7fcb91*/
    }
    v17 = 1; /*0x7fcbdf*/
  }
  else
  {
LABEL_28:
    v17 = 0; /*0x7fcb93*/
  }
  v18 = v17 != 0 ? (unsigned int)v7 : 0;
  v19 = (Lighting30Shader *)FormHeapAlloc(0xA0u); /*0x7fcba2*/
  if ( v19 ) /*0x7fcbb8*/
    v20 = (volatile LONG *)Lighting30Shader::Lighting30Shader(v19, v24, v12, v15, v18);// Lighting30ShaderDefinition_Create constructs the concrete Lighting30Shader used by GetShaderDefinition(0x1A). /*0x7fcbc9*/
  else
    v20 = 0; /*0x7fcbe3*/
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0x84))(v20); /*0x7fcbf7*/
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0xA8))(v20); /*0x7fcc03*/
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0xB4))(v20); /*0x7fcc0f*/
  (*(void (__thiscall **)(volatile LONG *))(*v20 + 0x88))(v20); /*0x7fcc1b*/
  shader = (volatile LONG *)v1->shader; /*0x7fcc1d*/
  if ( shader != v20 ) /*0x7fcc22*/
  {
    if ( shader ) /*0x7fcc26*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x7fcc2c*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x7fcc42*/
    }
    v1->shader = (BSShader *)v20; /*0x7fcc44*/
    InterlockedIncrement(v20 + 1); /*0x7fcc4b*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7fcc5d*/
  return v1; /*0x7fcc61*/
}
