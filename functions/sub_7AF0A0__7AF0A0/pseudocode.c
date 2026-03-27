volatile LONG *__thiscall sub_7AF0A0(volatile LONG **this)
{
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v3; // edi
  NiD3DShaderProgram *v4; // ebx
  volatile LONG *result; // eax
  volatile LONG *v6; // edi
  volatile LONG *v7; // ebx
  int v8[18]; // [esp+14h] [ebp-2A0h] BYREF
  char *v9; // [esp+5Ch] [ebp-258h]
  int v10[18]; // [esp+60h] [ebp-254h] BYREF
  char v11[260]; // [esp+A8h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1ACh] [ebp-108h] BYREF

  memset(v8, 0, sizeof(v8));
  v9 = "imagespace\\2x\\p\\map_P20.p.hlsl";
  memset(v10, 0, sizeof(v10));
  if ( "imagespace\\1x\\v\\base.v.hlsl" )
  {
    sub_801030("imagespace\\1x\\v\\base.v.hlsl", (int)FileName);
    _sprintf(v11, "MAP%03i.vso", 0);
    VertexShader = CreateVertexShader(FileName, v8, "vs_1_1", v11, 0, 0);
    v3 = *(this + 0x26);
    v4 = VertexShader;
    if ( v3 != (volatile LONG *)VertexShader )
    {
      if ( v3 )
      {
        if ( !InterlockedDecrement(v3 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
      }
      *(this + 0x26) = (volatile LONG *)v4;
      if ( v4 )
        InterlockedIncrement((volatile LONG *)v4 + 1);
    }
  }
  result = (volatile LONG *)v9;
  if ( v9 )
  {
    sub_801030(v9, (int)FileName);
    _sprintf(v11, "MAP%03i.pso", 0);
    result = (volatile LONG *)CreatePixelShader(FileName, v10, "ps_2_0", v11, 0, 0);
    v6 = *(this + 0x27);
    v7 = result;
    if ( v6 != result )
    {
      if ( v6 )
      {
        result = (volatile LONG *)InterlockedDecrement(v6 + 1);
        if ( !result )
          result = (volatile LONG *)(**(int (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
      }
      *(this + 0x27) = v7;
      if ( v7 )
        return (volatile LONG *)InterlockedIncrement(v7 + 1);
    }
  }
  return result;
}
