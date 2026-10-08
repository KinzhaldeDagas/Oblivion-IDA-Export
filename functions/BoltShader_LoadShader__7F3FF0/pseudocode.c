NiD3DShaderProgram *__thiscall BoltShader::LoadShader(BoltShader *this)
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

  FullPath = "bolt\\v\\bolt.v.hlsl"; /*0x7f4014*/
  memset(v11, 0, sizeof(v11)); /*0x7f401c*/
  sub_801030("bolt\\v\\bolt.v.hlsl", (int)FileName); /*0x7f403a*/
  _sprintf(v12, "BOLT.vso"); /*0x7f404c*/
  VertexShader = CreateVertexShader(FileName, v11, "vs_1_1", v12, 0, 0); /*0x7f4072*/
  v3 = this->Vertex[0]; /*0x7f4077*/
  v4 = (volatile LONG *)VertexShader; /*0x7f407d*/
  if ( v3 != VertexShader ) /*0x7f4081*/
  {
    if ( v3 ) /*0x7f4085*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x7f408b*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v3)(v3, 1); /*0x7f40a1*/
    }
    this->Vertex[0] = (NiD3DVertexShader *)v4; /*0x7f40a5*/
    if ( v4 ) /*0x7f40ab*/
      InterlockedIncrement(v4 + 1); /*0x7f40b1*/
  }
  v5 = "ps_1_3"; /*0x7f40be*/
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x7f40c3*/
    v5 = "ps_2_0"; /*0x7f40c5*/
  memset(v9, 0, sizeof(v9)); /*0x7f40da*/
  sub_801030("bolt\\p\\bolt.p.hlsl", (int)FileName); /*0x7f40f8*/
  _sprintf(v12, "BOLT.pso"); /*0x7f410a*/
  result = CreatePixelShader(FileName, v9, v5, v12, 0, 0); /*0x7f412c*/
  v7 = (volatile LONG *)this->Pixel[0]; /*0x7f4131*/
  v8 = (volatile LONG *)result; /*0x7f4137*/
  if ( v7 != (volatile LONG *)result ) /*0x7f413b*/
  {
    if ( v7 ) /*0x7f413f*/
    {
      result = (NiD3DShaderProgram *)InterlockedDecrement(v7 + 1); /*0x7f4145*/
      if ( !result ) /*0x7f414d*/
        result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v7)(v7, 1); /*0x7f415b*/
    }
    this->Pixel[0] = (NiD3DPixelShader *)v8; /*0x7f415f*/
    if ( v8 ) /*0x7f4165*/
      return (NiD3DShaderProgram *)InterlockedIncrement(v8 + 1); /*0x7f416b*/
  }
  return result; /*0x7f4171*/
}
