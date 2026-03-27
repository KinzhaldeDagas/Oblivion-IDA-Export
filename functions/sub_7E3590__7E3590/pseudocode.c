NiD3DShaderProgram *__thiscall sub_7E3590(ParticleShader *this)
{
  NiD3DShaderProgram *VertexShader; // eax
  NiD3DVertexShader *v3; // edi
  volatile LONG *v4; // ebx
  char *v5; // edi
  NiD3DShaderProgram *result; // eax
  volatile LONG *v7; // edi
  volatile LONG *v8; // ebx
  int v9[18]; // [esp+14h] [ebp-2A0h] BYREF
  char *FullPath; // [esp+5Ch] [ebp-258h]
  int v11[18]; // [esp+60h] [ebp-254h] BYREF
  char v12[260]; // [esp+A8h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1ACh] [ebp-108h] BYREF

  FullPath = "particle\\v\\particle.v.hlsl";
  memset(v11, 0, sizeof(v11));
  sub_801030("particle\\v\\particle.v.hlsl", (int)FileName);
  _sprintf(v12, "PARTICLE.vso");
  VertexShader = CreateVertexShader(FileName, v11, "vs_2_0", v12, 0, 0);
  v3 = this->Vertex[0];
  v4 = (volatile LONG *)VertexShader;
  if ( v3 != VertexShader )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v3 + 1) )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v3)(v3, 1);
    }
    this->Vertex[0] = (NiD3DVertexShader *)v4;
    if ( v4 )
      InterlockedIncrement(v4 + 1);
  }
  v5 = "ps_1_3";
  if ( ShaderPackage >= 2 )
    v5 = "ps_2_0";
  memset(v9, 0, sizeof(v9));
  sub_801030("particle\\p\\particle.p.hlsl", (int)FileName);
  _sprintf(v12, "PARTICLE.pso");
  result = CreatePixelShader(FileName, v9, v5, v12, 0, 0);
  v7 = (volatile LONG *)this->Pixel[0];
  v8 = (volatile LONG *)result;
  if ( v7 != (volatile LONG *)result )
  {
    if ( v7 )
    {
      result = (NiD3DShaderProgram *)InterlockedDecrement(v7 + 1);
      if ( !result )
        result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v7)(v7, 1);
    }
    this->Pixel[0] = (NiD3DPixelShader *)v8;
    if ( v8 )
      return (NiD3DShaderProgram *)InterlockedIncrement(v8 + 1);
  }
  return result;
}
