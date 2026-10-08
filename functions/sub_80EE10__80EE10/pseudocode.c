// GetShaderDefinition case 5 factory for SpeedTreeFrondShader. Creates declaration id 5 and a 0xB8 frond shader object; stock tree attachment evidence does not route NiGeometry to this shader.
// [4.1 layer extension 2026-10-03] Verified declaration capacity5, streamCount1; raw +4C setter maps descriptor0x80000000 to additional stream0, FLOAT4/BLENDINDICES. Plugin extension will allocate capacity8 and append AGD streams1..3 as FLOAT4 TEXCOORD1..3. Native class layout remains unchanged.
// [2026-10-03 implementation] Frond-only call80EE67 now wrapped in plugin: native771090 allocates8 entries, adds raw elements5..7 with descriptor80000001..3, FLOAT4 type3, TEXCOORD usage5 indices1..3. Native first5 entries still constructed normally. Frond-only80EF7A wrapper extends renderer-owned pass with normal stage1 and projected-shadow stage2.
// [2026-10-03 startup crash investigation] Windows Application Error/WER records two executable-startup failures around13:02, unknown module offset18894A41, c0000409 subtype21 INVALID_EXCEPTION_CHAIN and c0000005. SpeedTree log ends after sixth embedded record supply(STFROND2001.pso), before tree generation. This does NOT prove the crash is in this factory: supplying a record precedes GPU creation. Candidate sequence is LoadPrograms+ A8 -> BuildDrawPass80E740 -> BuildConstantMap+88 -> declaration association. Plugin now brackets these boundaries with flushed startup markers and x86 SEH-head observations. Root cause remains unproven without a current dump/next log.
// [2026-10-03 log provenance follow-up] New13:15 empty SpeedTreeOBSE.log came from Construction Set DLL probing: OBSE editor explicitly rejected SpeedTree during Query, but plugin global IDebugLog ctor opened game log in write mode first. This was corrected by deferring log opening past editor rejection and verified against actualDLL load/query/unload in isolatedx86 fixture. Zero log is not evidence of a new game/frond-factory failure. Saved13:13 game run still has prior INVALID_EXCEPTION_CHAIN signature and precedes diagnostic checkpoint deployment.
ShaderDefinition *__cdecl OB_SpeedTreeFrondShader_CreateDefinition_010201A0()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // esi
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // eax
  NiDX9ShaderDeclaration *ShaderDeclaration; // edi
  NiDX9ShaderDeclaration *v4; // ebx
  NiRTTI *i; // eax
  SpeedTreeFrondShader *v6; // eax
  SpeedTreeFrondShader *v7; // edi
  BSShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x80ee36*/
  v1 = 0; /*0x80ee42*/
  if ( v0 ) /*0x80ee4a*/
    v1 = ShaderDefinition::Init(v0); /*0x80ee53*/
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 5u, 1u); /*0x80ee67*/
  ShaderDeclaration = v1->ShaderDeclaration; /*0x80ee6c*/
  v4 = DX9ShaderDeclaration; /*0x80ee6e*/
  if ( v1->ShaderDeclaration != DX9ShaderDeclaration ) /*0x80ee75*/
  {
    if ( ShaderDeclaration ) /*0x80ee79*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&ShaderDeclaration->members) ) /*0x80ee7f*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x80ee95*/
    }
    v1->ShaderDeclaration = v4; /*0x80ee99*/
    if ( v4 ) /*0x80ee9b*/
      InterlockedIncrement((volatile LONG *)&v4->members); /*0x80eea1*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x80eeb8*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x80eecb*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x80eede*/
    v1->ShaderDeclaration,
    2,
    5,
    4,
    3,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x80eef1*/
    v1->ShaderDeclaration,
    3,
    7,
    5,
    1,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, int, int, unsigned int, int, int, _DWORD, _DWORD))v1->ShaderDeclaration->__vftable /*0x80ef0d*/
   + 0x13))(
    v1->ShaderDeclaration,
    0,
    4,
    8,
    0x80000000,
    3,
    2,
    0,
    0);
  if ( v1->ShaderDeclaration ) /*0x80ef0f*/
  {
    for ( i = (NiRTTI *)(*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x80ef1e*/
          i;
          i = i->parent )
    {
      if ( i == &stru_B3F684 ) /*0x80ef25*/
        break; /*0x80ef25*/
    }
  }
  v6 = (SpeedTreeFrondShader *)FormHeapAlloc(0xB8u); /*0x80ef33*/
  if ( v6 ) /*0x80ef49*/
    v7 = SpeedTreeFrondShader::SpeedTreeFrondShader(v6);// Only observed SpeedTreeFrondShader construction site: GetShaderDefinition(5) factory allocates/constructs the shader object here. /*0x80ef52*/
  else
    v7 = 0; /*0x80ef56*/
  (*(void (__thiscall **)(SpeedTreeFrondShader *))(*(_DWORD *)v7 + 0x84))(v7); /*0x80ef6a*/
  (*(void (__thiscall **)(SpeedTreeFrondShader *))(*(_DWORD *)v7 + 0xA8))(v7); /*0x80ef76*/
  OB_SpeedTreeFrondShader_BuildDrawPass_010201A0((NiD3DPass **)v7); /*0x80ef7a*/
  (*(void (__thiscall **)(SpeedTreeFrondShader *))(*(_DWORD *)v7 + 0x88))(v7); /*0x80ef89*/
  shader = v1->shader; /*0x80ef8b*/
  if ( shader != (BSShader *)v7 ) /*0x80ef90*/
  {
    if ( shader ) /*0x80ef94*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&shader->member) ) /*0x80ef9a*/
        shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x80efb0*/
    }
    v1->shader = (BSShader *)v7; /*0x80efb2*/
    InterlockedIncrement((volatile LONG *)v7 + 1); /*0x80efb9*/
  }
  v1->shader->__vftable->super.super.Unk54((NiD3DShaderInterface *)v1->shader, (UInt32)v1->ShaderDeclaration); /*0x80efca*/
  return v1; /*0x80efce*/
}
