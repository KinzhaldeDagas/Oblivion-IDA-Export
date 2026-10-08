// BloodOnDeath decode 2026-05-30: GeometryDecalShader program creation. MAXDECALS="1" is a shader-pass define for geometry decal variants, not the gameplay blood spawn/trail count.
NiD3DShaderProgram *__thiscall sub_805320(volatile LONG **this)
{
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v3; // edi
  volatile LONG *v4; // ebx
  NiD3DShaderProgram *v5; // eax
  volatile LONG *v6; // edi
  volatile LONG *v7; // ebx
  char *v8; // edi
  NiD3DShaderProgram *result; // eax
  volatile LONG *v10; // edi
  volatile LONG *v11; // ebx
  volatile LONG *v12; // edi
  int v13[19]; // [esp+14h] [ebp-2ECh] BYREF
  int v14[19]; // [esp+60h] [ebp-2A0h] BYREF
  int v15[18]; // [esp+ACh] [ebp-254h] BYREF
  char v16[260]; // [esp+F4h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1F8h] [ebp-108h] BYREF

  v14[0x12] = (int)"lighting\\2x\\v\\decal.v.hlsl"; /*0x80534b*/
  v15[0] = (int)"DECAL"; /*0x805356*/
  v15[1] = (int)EmptyString; /*0x805361*/
  v15[2] = (int)"GEOMDECAL"; /*0x805368*/
  v15[3] = (int)EmptyString; /*0x805373*/
  v15[4] = (int)"MAXDECALS";                    // BloodOnDeath decode: non-skinned geometry-decal VS uses MAXDECALS=1; single-decal shader pass, not a global blood decal cap. /*0x80537a*/
  v15[5] = (int)"1"; /*0x805385*/
  memset(&v15[6], 0, 0x30); /*0x805390*/
  sub_801030("lighting\\2x\\v\\decal.v.hlsl", (int)FileName); /*0x8053b0*/
  _sprintf(v16, "GDECAL.vso"); /*0x8053c2*/
  VertexShader = CreateVertexShader(FileName, v15, "vs_1_1", v16, 0, 0); /*0x8053ed*/
  v3 = *(this + 0x21); /*0x8053f2*/
  v4 = (volatile LONG *)VertexShader; /*0x8053f8*/
  if ( v3 != (volatile LONG *)VertexShader ) /*0x8053fc*/
  {
    if ( v3 ) /*0x805400*/
    {
      if ( !InterlockedDecrement(v3 + 1) ) /*0x805406*/
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1); /*0x80541c*/
    }
    *(this + 0x21) = v4; /*0x805420*/
    if ( v4 ) /*0x805426*/
      InterlockedIncrement(v4 + 1); /*0x80542c*/
  }
  v13[0] = (int)"DECAL"; /*0x805446*/
  v13[1] = (int)EmptyString; /*0x80544e*/
  v13[2] = (int)"GEOMDECAL"; /*0x805452*/
  v13[3] = (int)EmptyString; /*0x80545a*/
  v13[4] = (int)"MAXDECALS";                    // BloodOnDeath decode: skinned geometry-decal VS also uses MAXDECALS=1; more trails require more decal instances/projection calls upstream. /*0x80545e*/
  v13[5] = (int)"1"; /*0x805466*/
  v13[6] = (int)"SKIN"; /*0x80546e*/
  v13[7] = (int)EmptyString; /*0x805476*/
  memset(&v13[8], 0, 0x28); /*0x80547a*/
  sub_801030("lighting\\2x\\v\\decal.v.hlsl", (int)FileName); /*0x8054a2*/
  _sprintf(v16, "GDECALS.vso"); /*0x8054b4*/
  v5 = CreateVertexShader(FileName, v13, "vs_1_1", v16, 0, 0); /*0x8054dc*/
  v6 = *(this + 0x22); /*0x8054e1*/
  v7 = (volatile LONG *)v5; /*0x8054e7*/
  if ( v6 != (volatile LONG *)v5 ) /*0x8054eb*/
  {
    if ( v6 ) /*0x8054ef*/
    {
      if ( !InterlockedDecrement(v6 + 1) ) /*0x8054f5*/
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x80550b*/
    }
    *(this + 0x22) = v7; /*0x80550f*/
    if ( v7 ) /*0x805515*/
      InterlockedIncrement(v7 + 1); /*0x80551b*/
  }
  v8 = "ps_1_3"; /*0x805528*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x80552d*/
    v8 = "ps_2_0"; /*0x80552f*/
  v13[0x12] = (int)"lighting\\2x\\p\\decal.p.hlsl"; /*0x805540*/
  v14[0] = (int)"DECAL"; /*0x805548*/
  v14[1] = (int)EmptyString; /*0x805550*/
  v14[2] = (int)"GEOMDECAL"; /*0x805554*/
  v14[3] = (int)EmptyString; /*0x80555c*/
  v14[4] = (int)"MAXDECALS";                    // BloodOnDeath decode: geometry-decal PS uses MAXDECALS=1; renderer consumes existing geometry decals rather than emitting blood. /*0x805560*/
  v14[5] = (int)"1"; /*0x805568*/
  memset(&v14[6], 0, 0x30); /*0x805573*/
  sub_801030("lighting\\2x\\p\\decal.p.hlsl", (int)FileName); /*0x805590*/
  _sprintf(v16, "GDECAL.pso"); /*0x8055a2*/
  result = CreatePixelShader(FileName, v14, v8, v16, 0, 0); /*0x8055c6*/
  v10 = *(this + 0x23); /*0x8055cb*/
  v11 = (volatile LONG *)result; /*0x8055d1*/
  if ( v10 != (volatile LONG *)result ) /*0x8055d5*/
  {
    if ( v10 ) /*0x8055d9*/
    {
      result = (NiD3DShaderProgram *)InterlockedDecrement(v10 + 1); /*0x8055df*/
      if ( !result ) /*0x8055e7*/
        result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v10)(v10, 1); /*0x8055f5*/
    }
    *(this + 0x23) = v11; /*0x8055f9*/
    if ( v11 ) /*0x8055ff*/
      result = (NiD3DShaderProgram *)InterlockedIncrement(v11 + 1); /*0x805605*/
  }
  v12 = *(this + 0x24); /*0x80560b*/
  if ( v12 != *(this + 0x23) ) /*0x805617*/
  {
    if ( v12 ) /*0x80561b*/
    {
      if ( !InterlockedDecrement(v12 + 1) ) /*0x805621*/
        (**(void (__thiscall ***)(volatile LONG *, int))v12)(v12, 1); /*0x805637*/
    }
    result = (NiD3DShaderProgram *)*(this + 0x23); /*0x805639*/
    *(this + 0x24) = (volatile LONG *)result; /*0x805641*/
    if ( result ) /*0x805647*/
      return (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)result + 1); /*0x80564d*/
  }
  return result; /*0x805653*/
}
