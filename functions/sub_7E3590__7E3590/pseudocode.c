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

  FullPath = "particle\\v\\particle.v.hlsl"; /*0x7e35b4*/
  memset(v11, 0, sizeof(v11)); /*0x7e35bc*/
  sub_801030("particle\\v\\particle.v.hlsl", (int)FileName); /*0x7e35da*/
  _sprintf(v12, "PARTICLE.vso"); /*0x7e35ec*/
  VertexShader = CreateVertexShader(FileName, v11, "vs_2_0", v12, 0, 0); /*0x7e3612*/
  v3 = this->Vertex[0]; /*0x7e3617*/
  v4 = (volatile LONG *)VertexShader; /*0x7e361d*/
  if ( v3 != VertexShader ) /*0x7e3621*/
  {
    if ( v3 ) /*0x7e3625*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x7e362b*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v3)(v3, 1); /*0x7e3641*/
    }
    this->Vertex[0] = (NiD3DVertexShader *)v4; /*0x7e3645*/
    if ( v4 ) /*0x7e364b*/
      InterlockedIncrement(v4 + 1); /*0x7e3651*/
  }
  v5 = "ps_1_3"; /*0x7e365e*/
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x7e3663*/
    v5 = "ps_2_0"; /*0x7e3665*/
  memset(v9, 0, sizeof(v9)); /*0x7e367a*/
  sub_801030("particle\\p\\particle.p.hlsl", (int)FileName); /*0x7e3698*/
  _sprintf(v12, "PARTICLE.pso"); /*0x7e36aa*/
  result = CreatePixelShader(FileName, v9, v5, v12, 0, 0); /*0x7e36cc*/
  v7 = (volatile LONG *)this->Pixel[0]; /*0x7e36d1*/
  v8 = (volatile LONG *)result; /*0x7e36d7*/
  if ( v7 != (volatile LONG *)result ) /*0x7e36db*/
  {
    if ( v7 ) /*0x7e36df*/
    {
      result = (NiD3DShaderProgram *)InterlockedDecrement(v7 + 1); /*0x7e36e5*/
      if ( !result ) /*0x7e36ed*/
        result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v7)(v7, 1); /*0x7e36fb*/
    }
    this->Pixel[0] = (NiD3DPixelShader *)v8; /*0x7e36ff*/
    if ( v8 ) /*0x7e3705*/
      return (NiD3DShaderProgram *)InterlockedIncrement(v8 + 1); /*0x7e370b*/
  }
  return result; /*0x7e3711*/
}
