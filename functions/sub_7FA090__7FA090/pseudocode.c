NiD3DShaderProgram *__thiscall sub_7FA090(volatile LONG **this)
{
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v3; // edi
  NiD3DShaderProgram *v4; // ebx
  NiD3DShaderProgram *result; // eax
  volatile LONG *v6; // edi
  NiD3DShaderProgram *v7; // ebx
  int v8[19]; // [esp+14h] [ebp-2A0h] BYREF
  int v9[18]; // [esp+60h] [ebp-254h] BYREF
  char v10[260]; // [esp+A8h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1ACh] [ebp-108h] BYREF

  v8[0x12] = (int)"imagespace\\1x\\v\\base_old.v.hlsl";
  memset(v9, 0, sizeof(v9));
  sub_801030("imagespace\\1x\\v\\base_old.v.hlsl", (int)FileName);
  _sprintf(v10, "DEBUG.vso");
  VertexShader = CreateVertexShader(FileName, v9, "vs_1_1", v10, 0, 0);
  v3 = *(this + 0x30);
  v4 = VertexShader;
  if ( v3 != (volatile LONG *)VertexShader )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement(v3 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
    }
    *(this + 0x30) = (volatile LONG *)v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)v4 + 1);
  }
  memset(v8, 0, 0x48);
  sub_801030("imagespace\\1x\\p\\copy.p.hlsl", (int)FileName);
  _sprintf(v10, "DEBUG.pso");
  result = CreatePixelShader(FileName, v8, "ps_1_3", v10, 0, 0);
  v6 = *(this + 0x31);
  v7 = result;
  if ( v6 != (volatile LONG *)result )
  {
    if ( v6 )
    {
      result = (NiD3DShaderProgram *)InterlockedDecrement(v6 + 1);
      if ( !result )
        result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
    }
    *(this + 0x31) = (volatile LONG *)v7;
    if ( v7 )
      return (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v7 + 1);
  }
  return result;
}
