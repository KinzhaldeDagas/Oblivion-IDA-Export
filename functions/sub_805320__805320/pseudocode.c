NiD3DShaderProgram *__thiscall sub_805320(volatile LONG **this)
{
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v3; // edi
  NiD3DShaderProgram *v4; // ebx
  NiD3DShaderProgram *v5; // eax
  volatile LONG *v6; // edi
  NiD3DShaderProgram *v7; // ebx
  char *v8; // edi
  NiD3DShaderProgram *result; // eax
  volatile LONG *v10; // edi
  NiD3DShaderProgram *v11; // ebx
  volatile LONG *v12; // edi
  int v13[19]; // [esp+14h] [ebp-2ECh] BYREF
  int v14[19]; // [esp+60h] [ebp-2A0h] BYREF
  int v15[18]; // [esp+ACh] [ebp-254h] BYREF
  char v16[260]; // [esp+F4h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1F8h] [ebp-108h] BYREF

  v14[0x12] = (int)"lighting\\2x\\v\\decal.v.hlsl";
  v15[0] = (int)"DECAL";
  v15[1] = (int)EmptyString;
  v15[2] = (int)"GEOMDECAL";
  v15[3] = (int)EmptyString;
  v15[4] = (int)"MAXDECALS";
  v15[5] = (int)"1";
  memset(&v15[6], 0, 0x30);
  sub_801030("lighting\\2x\\v\\decal.v.hlsl", (int)FileName);
  _sprintf(v16, "GDECAL.vso");
  VertexShader = CreateVertexShader(FileName, v15, "vs_1_1", v16, 0, 0);
  v3 = *(this + 0x21);
  v4 = VertexShader;
  if ( v3 != (volatile LONG *)VertexShader )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement(v3 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
    }
    *(this + 0x21) = (volatile LONG *)v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)v4 + 1);
  }
  v13[0] = (int)"DECAL";
  v13[1] = (int)EmptyString;
  v13[2] = (int)"GEOMDECAL";
  v13[3] = (int)EmptyString;
  v13[4] = (int)"MAXDECALS";
  v13[5] = (int)"1";
  v13[6] = (int)"SKIN";
  v13[7] = (int)EmptyString;
  memset(&v13[8], 0, 0x28);
  sub_801030("lighting\\2x\\v\\decal.v.hlsl", (int)FileName);
  _sprintf(v16, "GDECALS.vso");
  v5 = CreateVertexShader(FileName, v13, "vs_1_1", v16, 0, 0);
  v6 = *(this + 0x22);
  v7 = v5;
  if ( v6 != (volatile LONG *)v5 )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement(v6 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
    }
    *(this + 0x22) = (volatile LONG *)v7;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)v7 + 1);
  }
  v8 = "ps_1_3";
  if ( ShaderPackage >= 2 )
    v8 = "ps_2_0";
  v13[0x12] = (int)"lighting\\2x\\p\\decal.p.hlsl";
  v14[0] = (int)"DECAL";
  v14[1] = (int)EmptyString;
  v14[2] = (int)"GEOMDECAL";
  v14[3] = (int)EmptyString;
  v14[4] = (int)"MAXDECALS";
  v14[5] = (int)"1";
  memset(&v14[6], 0, 0x30);
  sub_801030("lighting\\2x\\p\\decal.p.hlsl", (int)FileName);
  _sprintf(v16, "GDECAL.pso");
  result = CreatePixelShader(FileName, v14, v8, v16, 0, 0);
  v10 = *(this + 0x23);
  v11 = result;
  if ( v10 != (volatile LONG *)result )
  {
    if ( v10 )
    {
      result = (NiD3DShaderProgram *)InterlockedDecrement(v10 + 1);
      if ( !result )
        result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v10)(v10, 1);
    }
    *(this + 0x23) = (volatile LONG *)v11;
    if ( v11 )
      result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v11 + 1);
  }
  v12 = *(this + 0x24);
  if ( v12 != *(this + 0x23) )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement(v12 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v12)(v12, 1);
    }
    result = (NiD3DShaderProgram *)*(this + 0x23);
    *(this + 0x24) = (volatile LONG *)result;
    if ( result )
      return (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)result + 1);
  }
  return result;
}
