NiD3DShaderDeclaration **WaterShaderHeightMap()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  WaterShaderHeightMap *v6; // eax
  WaterShaderHeightMap *v7; // esi
  WaterShaderHeightMap *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x7e1456*/
  v1 = 0; /*0x7e1462*/
  if ( v0 ) /*0x7e146a*/
    v1 = ShaderDefinition::Init(v0); /*0x7e1473*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 2u, 1u); /*0x7e1487*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x7e148c*/
  v4 = DX9ShaderDeclaration; /*0x7e148e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x7e1495*/
  {
    if ( ShaderDeclaration ) /*0x7e1499*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x7e149f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x7e14b5*/
    }
    v1->ShaderDeclaration = v4; /*0x7e14b9*/
    if ( v4 ) /*0x7e14bb*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x7e14c1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x7e14d8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x7e14eb*/
    v1->ShaderDeclaration,
    1,
    7,
    5,
    1,
    0);
  if ( v1->ShaderDeclaration ) /*0x7e14ed*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x7e14fc*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x7e1505*/
        break; /*0x7e1505*/
    }
  }
  v6 = (WaterShaderHeightMap *)FormHeapAlloc(0x10Cu); /*0x7e1513*/
  if ( v6 ) /*0x7e1529*/
    v7 = WaterShaderHeightMap::WaterShaderHeightMap(v6); /*0x7e1532*/
  else
    v7 = 0; /*0x7e1536*/
  v7->__vftable->super.Unk084((BSShader *)v7); /*0x7e154a*/
  sub_7DFBD0((char *)v7); /*0x7e154e*/
  sub_7DFEE0((NiD3DPass **)v7); /*0x7e1555*/
  v7->__vftable->super.Unk088((BSShader *)v7); /*0x7e1564*/
  v7->__vftable->super.super.super.Unk54((NiD3DShaderInterface *)v7, (UInt32)v1->ShaderDeclaration); /*0x7e1570*/
  shader = (WaterShaderHeightMap *)v1->shader; /*0x7e1572*/
  if ( shader != v7 ) /*0x7e1577*/
  {
    if ( shader ) /*0x7e157b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->super) ) /*0x7e1581*/
        shader->__vftable->super.super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x7e1597*/
    }
    v1->shader = (BSShader *)v7; /*0x7e1599*/
    InterlockedIncrement((volatile LONG *)&v7->super); /*0x7e15a0*/
  }
  return (NiD3DShaderDeclaration **)v1; /*0x7e15a8*/
}
