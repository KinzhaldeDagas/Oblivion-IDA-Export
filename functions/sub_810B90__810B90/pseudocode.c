// Creates ShaderDefinition for SpeedTree branch shader (GetShaderDefinition id 4): declaration id 6, SpeedTreeBranchShader object, branch lighting/TREE program sets.
ShaderDefinition *OB_CreateSpeedTreeBranchShaderDefinition_010201A0()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // esi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiDX9ShaderDeclaration *v4; // ebx
  int v5; // edi
  int v6; // eax
  char v7; // al
  SpeedTreeBranchShader *v8; // eax
  volatile LONG *v9; // edi
  volatile LONG *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x810bb6*/
  v1 = 0; /*0x810bc2*/
  if ( v0 ) /*0x810bca*/
    v1 = ShaderDefinition::Init(v0); /*0x810bd3*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 6, 1u); /*0x810be7*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x810bec*/
  v4 = DX9ShaderDeclaration; /*0x810bee*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x810bf5*/
  {
    if ( ShaderDeclaration ) /*0x810bf9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x810bff*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x810c15*/
    }
    v1->ShaderDeclaration = v4; /*0x810c19*/
    if ( v4 ) /*0x810c1b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x810c21*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x810c38*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x810c4b*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x810c5e*/
    v1->ShaderDeclaration,
    2,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x810c7a*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    3,
    8,
    0x80000000,
    2,
    6,
    0,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x810c96*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    4,
    9,
    0x80000001,
    2,
    7,
    0,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x810cb2*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    5,
    0xA,
    0x80000002,
    3,
    2,
    0,
    0);
  v5 = (int)v1->ShaderDeclaration; /*0x810cb4*/
  if ( v1->ShaderDeclaration ) /*0x810cb4*/
  {
    v6 = (*(int (__thiscall **)(NiDX9ShaderDeclaration *))(*(_DWORD *)v5 + 4))(v1->ShaderDeclaration); /*0x810cc1*/
    if ( v6 ) /*0x810cc5*/
    {
      while ( (char *)v6 != stru_B3F684 ) /*0x810ccc*/
      {
        v6 = *(_DWORD *)(v6 + 4); /*0x810cce*/
        if ( !v6 ) /*0x810cd3*/
          goto LABEL_13; /*0x810cd3*/
      }
      v7 = 1; /*0x810d08*/
    }
    else
    {
LABEL_13:
      v7 = 0; /*0x810cd5*/
    }
    v5 &= -(v7 != 0); /*0x810cdd*/
  }
  v8 = (SpeedTreeBranchShader *)FormHeapAlloc(0x134u); /*0x810ce4*/
  if ( v8 ) /*0x810cfa*/
    v9 = (volatile LONG *)SpeedTreeBranchShader::SpeedTreeBranchShader(v8, v5); /*0x810d04*/
  else
    v9 = 0; /*0x810d0c*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0x84))(v9); /*0x810d20*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0xA8))(v9); /*0x810d2c*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0xB4))(v9); /*0x810d38*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0xB8))(v9); /*0x810d44*/
  (*(void (__thiscall **)(volatile LONG *))(*v9 + 0x88))(v9); /*0x810d50*/
  shader = (volatile LONG *)v1->shader; /*0x810d52*/
  if ( shader != v9 ) /*0x810d57*/
  {
    if ( shader ) /*0x810d5b*/
    {
      if ( !InterlockedDecrement(shader + 1) ) /*0x810d61*/
        (**(void (__thiscall ***)(volatile LONG *, int))shader)(shader, 1); /*0x810d77*/
    }
    v1->shader = (BSShader *)v9; /*0x810d79*/
    InterlockedIncrement(v9 + 1); /*0x810d80*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x810d91*/
  return v1; /*0x810d95*/
}
