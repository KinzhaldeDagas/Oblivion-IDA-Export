// BloodOnDeath decode 2026-05-30: registers/builds GeometryDecalShader. Static/skinned declarations and render passes only; no blood emission or trail count is decided here.
ShaderDefinition *GeometryDecalShader()
{
  ShaderDefinition *v0; // eax
  ShaderDefinition *v1; // edi
  NiDX9ShaderDeclaration *v2; // eax
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  float v4; // esi
  float v5; // eax
  float v6; // ebx
  NiDX9ShaderDeclaration *ShaderDeclaration; // esi
  float v8; // ebx
  NiDX9ShaderDeclaration *DX9ShaderDeclaration; // esi
  float v10; // eax
  float v11; // ebx
  int i; // eax
  GeometryDecalShader *v13; // eax
  GeometryDecalShader *v14; // esi
  BSShader *shader; // ebx

  v0 = (ShaderDefinition *)FormHeapAlloc(8u); /*0x806237*/
  if ( v0 ) /*0x80624d*/
    v1 = ShaderDefinition::Init(v0); /*0x806256*/
  else
    v1 = 0; /*0x80625a*/
  *(float *)&v2 = COERCE_FLOAT(CreateDX9ShaderDeclaration(unk_B43104, 2, 1u)); /*0x80626e*/
  v3 = InterlockedDecrement; /*0x806273*/
  v4 = *(float *)&v2; /*0x806279*/
  v5 = OB_ShaderConstantStorage_010201A0[0x5FC]; /*0x80627b*/
  if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x5FC]) != LODWORD(v4) ) /*0x806285*/
  {
    if ( v5 != 0.0 ) /*0x806289*/
    {
      v6 = OB_ShaderConstantStorage_010201A0[0x5FC]; /*0x80628b*/
      if ( !v3((volatile LONG *)(LODWORD(v5) + 4)) && v6 != 0.0 ) /*0x806299*/
        (**(void (__thiscall ***)(float, int))LODWORD(v6))(COERCE_FLOAT(LODWORD(v6)), 1); /*0x8062a3*/
    }
    v5 = v4; /*0x8062a7*/
    OB_ShaderConstantStorage_010201A0[0x5FC] = v4; /*0x8062a9*/
    if ( v4 != 0.0 ) /*0x8062ae*/
    {
      InterlockedIncrement((volatile LONG *)(LODWORD(v4) + 4)); /*0x8062b4*/
      v5 = OB_ShaderConstantStorage_010201A0[0x5FC]; /*0x8062ba*/
    }
  }
  ShaderDeclaration = v1->ShaderDeclaration; /*0x8062bf*/
  v8 = v5; /*0x8062c3*/
  if ( v1->ShaderDeclaration != (NiDX9ShaderDeclaration *)LODWORD(v5) ) /*0x8062c5*/
  {
    if ( ShaderDeclaration ) /*0x8062c9*/
    {
      if ( !v3((volatile LONG *)&ShaderDeclaration->members) ) /*0x8062cf*/
        (*(void (__thiscall **)(NiDX9ShaderDeclaration *, int))ShaderDeclaration->__vftable)(ShaderDeclaration, 1); /*0x8062e1*/
    }
    *(float *)&v1->ShaderDeclaration = v8; /*0x8062e5*/
    if ( v8 != 0.0 ) /*0x8062e7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v8) + 4)); /*0x8062ed*/
  }
  DX9ShaderDeclaration = CreateDX9ShaderDeclaration(unk_B43104, 4, 1u); /*0x806303*/
  v10 = OB_ShaderConstantStorage_010201A0[0x5FD]; /*0x806305*/
  if ( (NiDX9ShaderDeclaration *)LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]) != DX9ShaderDeclaration ) /*0x80630f*/
  {
    if ( v10 != 0.0 ) /*0x806313*/
    {
      v11 = OB_ShaderConstantStorage_010201A0[0x5FD]; /*0x806315*/
      if ( !v3((volatile LONG *)(LODWORD(v10) + 4)) && v11 != 0.0 ) /*0x806323*/
        (**(void (__thiscall ***)(float, int))LODWORD(v11))(COERCE_FLOAT(LODWORD(v11)), 1); /*0x80632d*/
    }
    LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]) = DX9ShaderDeclaration; /*0x806331*/
    if ( DX9ShaderDeclaration ) /*0x806337*/
      InterlockedIncrement((volatile LONG *)&DX9ShaderDeclaration->members); /*0x80633d*/
  }
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, _DWORD, _DWORD, _DWORD, int, _DWORD))v1->ShaderDeclaration->__vftable /*0x806354*/
   + 0x14))(
    v1->ShaderDeclaration,
    0,
    0,
    0,
    2,
    0);
  (*((void (__thiscall **)(NiDX9ShaderDeclaration *, int, int, int, int, _DWORD))v1->ShaderDeclaration->__vftable + 0x14))( /*0x806367*/
    v1->ShaderDeclaration,
    1,
    3,
    3,
    2,
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]) /*0x80637e*/
                                                                      + 0x50))(
    LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]),
    0,
    0,
    0,
    2,
    0);
  (*(void (__thiscall **)(_DWORD, int, int, int, int, _DWORD))(*(_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]) /*0x806395*/
                                                             + 0x50))(
    LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]),
    1,
    1,
    1,
    3,
    0);
  (*(void (__thiscall **)(_DWORD, int, int, int, int, _DWORD))(*(_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]) /*0x8063ac*/
                                                             + 0x50))(
    LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]),
    2,
    2,
    2,
    4,
    0);
  (*(void (__thiscall **)(_DWORD, int, int, int, int, _DWORD))(*(_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]) /*0x8063c3*/
                                                             + 0x50))(
    LODWORD(OB_ShaderConstantStorage_010201A0[0x5FD]),
    3,
    3,
    3,
    2,
    0);
  if ( v1->ShaderDeclaration ) /*0x8063c5*/
  {
    for ( i = (*((int (__thiscall **)(NiDX9ShaderDeclaration *))v1->ShaderDeclaration->__vftable + 1))(v1->ShaderDeclaration); /*0x8063d4*/
          i;
          i = *(_DWORD *)(i + 4) )
    {
      if ( (char *)i == stru_B3F684 ) /*0x8063db*/
        break; /*0x8063db*/
    }
  }
  v13 = (GeometryDecalShader *)FormHeapAlloc(0xA0u); /*0x8063e9*/
  if ( v13 ) /*0x8063ff*/
    v14 = GeometryDecalShader::GeometryDecalShader(v13); /*0x806408*/
  else
    v14 = 0; /*0x80640c*/
  (*(void (__thiscall **)(GeometryDecalShader *))(*(_DWORD *)v14 + 0x84))(v14); /*0x806420*/
  sub_805320((volatile LONG **)v14);            // BloodOnDeath decode: compiles/binds geometry-decal shader programs; MAXDECALS lives inside shader setup. /*0x806424*/
  sub_805670(v14);                              // BloodOnDeath decode: allocates/configures render passes. Draw plumbing, not decal spawn throttling. /*0x80642b*/
  (*(void (__thiscall **)(GeometryDecalShader *))(*(_DWORD *)v14 + 0x88))(v14); /*0x80643a*/
  (*(void (__thiscall **)(GeometryDecalShader *, NiDX9ShaderDeclaration *))(*(_DWORD *)v14 + 0x54))( /*0x806446*/
    v14,
    v1->ShaderDeclaration);
  shader = v1->shader; /*0x806448*/
  if ( shader != (BSShader *)v14 ) /*0x80644d*/
  {
    if ( shader ) /*0x806451*/
    {
      if ( !v3((volatile LONG *)&shader->member) ) /*0x806457*/
        shader->__vftable->super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x806469*/
    }
    v1->shader = (BSShader *)v14; /*0x80646b*/
    InterlockedIncrement((volatile LONG *)v14 + 1); /*0x806472*/
  }
  return v1; /*0x80647a*/
}
