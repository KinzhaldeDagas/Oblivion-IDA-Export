//
// [RT4.1 parity v147 2026-10-08] Native leaf definition6 has four declaration entries: position, normal, UV, STSP. No COLOR stream; setup7F0BC0 selects four VS variants (fog/point bits) and two PS variants. Stock VS uses only packed green fraction for dimming. Full RGB corner rendering still needs vertex/declaration/program integration with default fallback, clones and device-reset contracts proven; generated CPU colors alone do not establish rendering.
// [Leaf RGB v148 2026-10-08] Isolated leaf shader composition uses ctor7F1200,init8025F0,pass7F09D0,constants7F07D0,declaration setter77A400. Declaration5 entries preserve position,normal,UV,STSP and add COLOR0 atv4 using native semantic/source/type tuple5,4,3. Stock programs/definition6 unchanged. Native ctor writes shared B45E14+251*4..260*4 camera/wind defaults, so v148 restores that16-dword snapshot on unwind. Interface device+10 and renderer+14 verified. Native factory wrappers adopt created D3D handles without extra COM AddRef.
NiD3DShaderDeclaration **sub_7F1410()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // esi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiDX9ShaderDeclaration *v4; // ebx
  int i; // eax
  SpeedTreeLeafShader *v6; // eax
  SpeedTreeLeafShader *v7; // edi
  BSShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7f1436*/
  v1 = 0; /*0x7f1442*/
  if ( v0 ) /*0x7f144a*/
    v1 = ShaderDefinition::Init(v0); /*0x7f1453*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 4, 1u); /*0x7f1467*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7f146c*/
  v4 = DX9ShaderDeclaration; /*0x7f146e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7f1475*/
  {
    if ( ShaderDeclaration ) /*0x7f1479*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7f147f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7f1495*/
    }
    v1->ShaderDeclaration = v4; /*0x7f1499*/
    if ( v4 ) /*0x7f149b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7f14a1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7f14b8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);                                         // Leaf declaration element 0 is POSITION float3.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7f14cb*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);                                         // Leaf declaration element 1 is NORMAL float3.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7f14de*/
    v1->ShaderDeclaration,
    2,
    7,
    5,
    1,
    0);                                         // Leaf declaration element 2 is TEXCOORD float2.
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x7f14fa*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    3,
    8,
    0x80000000,
    3,
    2,
    0,
    0);                                         // Leaf declaration element 3 supplies packed BLENDINDICES/card-wind data. No D3DDECLUSAGE_COLOR element is created, matching STLEAF VS bytecode's lack of vertex color input.
  if ( v1->ShaderDeclaration ) /*0x7f14fc*/
  {
    for ( i = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7f150b*/
          i;
          i = *(_DWORD *)(i + 4) )
    {
      if ( (char *)i == stru_B3F684 ) /*0x7f1515*/
        break; /*0x7f1515*/
    }
  }
  v6 = (SpeedTreeLeafShader *)FormHeapAlloc(0x398u); /*0x7f1523*/
  if ( v6 ) /*0x7f1539*/
    v7 = SpeedTreeLeafShader::SpeedTreeLeafShader(v6); /*0x7f1542*/
  else
    v7 = 0; /*0x7f1546*/
  (*(void (__thiscall **)(SpeedTreeLeafShader *))(*(_DWORD *)v7 + 0x84))(v7); /*0x7f155a*/
  (*(void (__thiscall **)(SpeedTreeLeafShader *))(*(_DWORD *)v7 + 0xA8))(v7); /*0x7f1566*/
  OB_SpeedTreeLeafPass_Build_010201A0((NiD3DPass **)v7); /*0x7f156a*/
  (*(void (__thiscall **)(SpeedTreeLeafShader *))(*(_DWORD *)v7 + 0x88))(v7); /*0x7f1579*/
  shader = v1->shader; /*0x7f157b*/
  if ( shader != (BSShader *)v7 ) /*0x7f1580*/
  {
    if ( shader ) /*0x7f1584*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->member) ) /*0x7f158a*/
        shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7f15a0*/
    }
    v1->shader = (BSShader *)v7; /*0x7f15a2*/
    InterlockedIncrement((volatile LONG *)v7 + 1); /*0x7f15a9*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x7f15ba*/
  return (NiD3DShaderDeclaration **)v1; /*0x7f15be*/
}
