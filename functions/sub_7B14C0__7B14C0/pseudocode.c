NiD3DShaderProgram *__thiscall sub_7B14C0(volatile LONG **this)
{
  const char *v2; // edi
  char *v3; // ebx
  NiD3DShaderProgram *VertexShader; // eax
  volatile LONG *v5; // edi
  NiD3DShaderProgram *v6; // ebp
  NiD3DShaderProgram *result; // eax
  volatile LONG *v8; // edi
  NiD3DShaderProgram *v9; // ebp
  int v10[18]; // [esp+14h] [ebp-2A0h] BYREF
  char *FullPath; // [esp+5Ch] [ebp-258h]
  int v12[18]; // [esp+60h] [ebp-254h] BYREF
  char v13[260]; // [esp+A8h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1ACh] [ebp-108h] BYREF

  FullPath = "imagespace\\1x\\v\\menuBG.v.hlsl";
  memset(v12, 0, sizeof(v12));
  memset(v10, 0, sizeof(v10));
  v2 = "vs_1_1";
  v3 = "ps_1_3";
  if ( UseHDR )
  {
    v2 = "vs_2_0";
    v3 = "ps_2_0";
  }
  if ( FullPath )
  {
    sub_801030(FullPath, (int)FileName);
    _sprintf(v13, "MENUBG%03i.vso", 0);
    VertexShader = CreateVertexShader(FileName, v12, v2, v13, 0, 0);
    v5 = *(this + 0x26);
    v6 = VertexShader;
    if ( v5 != (volatile LONG *)VertexShader )
    {
      if ( v5 )
      {
        if ( !InterlockedDecrement(v5 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
      }
      *(this + 0x26) = (volatile LONG *)v6;
      if ( v6 )
        InterlockedIncrement((volatile LONG *)v6 + 1);
    }
  }
  result = (NiD3DShaderProgram *)"imagespace\\1x\\p\\menuBG.p.hlsl";
  if ( "imagespace\\1x\\p\\menuBG.p.hlsl" )
  {
    sub_801030("imagespace\\1x\\p\\menuBG.p.hlsl", (int)FileName);
    _sprintf(v13, "MENUBG%03i.pso", 0);
    result = CreatePixelShader(FileName, v10, v3, v13, 0, 0);
    v8 = *(this + 0x27);
    v9 = result;
    if ( v8 != (volatile LONG *)result )
    {
      if ( v8 )
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v8 + 1);
        if ( !result )
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v8)(v8, 1);
      }
      *(this + 0x27) = (volatile LONG *)v9;
      if ( v9 )
        return (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v9 + 1);
    }
  }
  return result;
}
