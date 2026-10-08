// MoonSugarEffect decode: Parallax shader definition mirrors Lighting/Skin-style declarations, including tangent/binormal-style raw entries. Generic vertex shader replacement must match these layouts.
ShaderDefinition *ParallaxShader()
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
  ParallaxShader *v12; // eax
  volatile LONG *v13; // esi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x8091f6*/
  v1 = 0; /*0x809202*/
  if ( v0 ) /*0x80920a*/
    v1 = ShaderDefinition::Init(v0); /*0x809213*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 6u, 1u); /*0x809227*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x80922c*/
  v4 = DX9ShaderDeclaration; /*0x80922e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x809235*/
  {
    if ( ShaderDeclaration ) /*0x809239*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x80923f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x809255*/
    }
    v1->ShaderDeclaration = v4; /*0x809259*/
    if ( v4 ) /*0x80925b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x809261*/
  }
  v5 = CreateDX9ShaderDeclaration(unk_B43104, 8u, 1u); /*0x809286*/
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x80928d*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x8092a0*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x8092b3*/
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x8092c6*/
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x8092e2*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x8092fe*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v5->__vftable + 0x14))( /*0x809311*/
    v5,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x809324*/
    v5,
    1,
    1,
    1,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x809337*/
    v5,
    2,
    2,
    2,
    4,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80934a*/
    v5,
    3,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x80935d*/
    v5,
    4,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v5->__vftable + 0x14))( /*0x809370*/
    v5,
    5,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable /*0x80938c*/
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
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v5->__vftable /*0x8093a8*/
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
  v6 = (int)v1->ShaderDeclaration; /*0x8093aa*/
  if ( v1->ShaderDeclaration ) /*0x8093aa*/
  {
    v7 = (NiRTTI *)(*(int (__thiscall **)(NiDX9ShaderDeclaration *))(*(_DWORD *)v6 + 4))(v1->ShaderDeclaration); /*0x8093b7*/
    if ( v7 ) /*0x8093bb*/
    {
      while ( v7 != &stru_B3F684 ) /*0x8093c5*/
      {
        v7 = v7->parent; /*0x8093c7*/
        if ( !v7 ) /*0x8093cc*/
          goto LABEL_13; /*0x8093cc*/
      }
      v8 = 1; /*0x809427*/
    }
    else
    {
LABEL_13:
      v8 = 0; /*0x8093ce*/
    }
    v6 &= -(v8 != 0); /*0x8093d6*/
  }
  v9 = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v5->__vftable + 1))(v5); /*0x8093df*/
  if ( v9 ) /*0x8093e3*/
  {
    while ( v9 != &stru_B3F684 ) /*0x8093ea*/
    {
      v9 = v9->parent; /*0x8093ec*/
      if ( !v9 ) /*0x8093f1*/
        goto LABEL_18; /*0x8093f1*/
    }
    v10 = 1; /*0x80942b*/
  }
  else
  {
LABEL_18:
    v10 = 0; /*0x8093f3*/
  }
  v11 = v10 != 0 ? (unsigned int)v5 : 0;
  v12 = (ParallaxShader *)FormHeapAlloc(0x1A4u); /*0x809402*/
  if ( v12 ) /*0x809418*/
    v13 = (volatile LONG *)ParallaxShader::ParallaxShader(v12, v6, v11); /*0x809423*/
  else
    v13 = 0; /*0x80942f*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0x84))(v13); /*0x809443*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xA8))(v13); /*0x80944f*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xB4))(v13); /*0x80945b*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0xB8))(v13); /*0x809467*/
  (*(void (__thiscall **)(volatile LONG *))(*v13 + 0x88))(v13); /*0x809473*/
  shader = (volatile LONG *)v1->shader; /*0x809475*/
  if ( shader != v13 ) /*0x80947a*/
  {
    if ( shader ) /*0x80947e*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x809484*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x80949a*/
    }
    v1->shader = (BSShader *)v13; /*0x80949c*/
    InterlockedIncrement(v13 + 1); /*0x8094a3*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x8094b4*/
  return v1; /*0x8094b8*/
}
