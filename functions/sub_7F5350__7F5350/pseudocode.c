NiD3DShaderProgram *__thiscall sub_7F5350(volatile LONG **this)
{
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v3; // edi
  NiD3DShaderProgram *v4; // ebx
  NiD3DShaderProgram *result; // eax
  volatile LONG *v6; // edi
  NiD3DShaderProgram *v7; // ebx
  int v8[18]; // [esp+10h] [ebp-2A0h] BYREF
  char *FullPath; // [esp+58h] [ebp-258h]
  int v10[18]; // [esp+5Ch] [ebp-254h] BYREF
  char v11[260]; // [esp+A4h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1A8h] [ebp-108h] BYREF

  FullPath = "imagespace\\1x\\v\\base.v.hlsl";
  memset(v10, 0, sizeof(v10));
  memset(v8, 0, sizeof(v8));
  if ( "imagespace\\1x\\v\\base.v.hlsl" )
  {
    sub_801030(FullPath, (int)FileName);
    _sprintf(v11, "NIGHTEYE%03i.vso", 0);
    VertexShader = CreateVertexShader(FileName, v10, "vs_1_1", v11, 0, 0);
    v3 = *(this + 0x24);
    v4 = VertexShader;
    if ( v3 != (volatile LONG *)VertexShader )
    {
      if ( v3 )
      {
        if ( !InterlockedDecrement(v3 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
      }
      *(this + 0x24) = (volatile LONG *)v4;
      if ( v4 )
        InterlockedIncrement((volatile LONG *)v4 + 1);
    }
  }
  result = (NiD3DShaderProgram *)"imagespace\\1x\\p\\nighteye.p.hlsl";
  if ( "imagespace\\1x\\p\\nighteye.p.hlsl" )
  {
    sub_801030("imagespace\\1x\\p\\nighteye.p.hlsl", (int)FileName);
    _sprintf(v11, "NIGHTEYE%03i.pso", 0);
    result = CreatePixelShader(FileName, v8, "ps_1_3", v11, 0, 0);
    v6 = *(this + 0x25);
    v7 = result;
    if ( v6 != (volatile LONG *)result )
    {
      if ( v6 )
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v6 + 1);
        if ( !result )
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
      }
      *(this + 0x25) = (volatile LONG *)v7;
      if ( v7 )
        return (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v7 + 1);
    }
  }
  return result;
}
