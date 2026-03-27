NiD3DShaderProgram *sub_7EF000()
{
  int *v0; // edi
  int v1; // esi
  const char *v2; // eax
  NiD3DShaderProgram *result; // eax
  volatile LONG *v4; // edi
  NiD3DShaderProgram *v5; // ebp
  int *i; // [esp+10h] [ebp-344h]
  const char *v7; // [esp+18h] [ebp-33Ch]
  int v8[75]; // [esp+1Ch] [ebp-338h] BYREF
  char v9[260]; // [esp+148h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+24Ch] [ebp-108h] BYREF

  v7 = "precipitation\\precipitation.v.hlsl";
  v8[0] = (int)"BILLBOARD_UP";
  memset(&v8[1], 0, 0x44);
  v8[0x12] = (int)"precipitation\\precipitation.v.hlsl";
  v8[0x13] = (int)"BILLBOARD_FACE";
  memset(&v8[0x14], 0, 0x44);
  v8[0x26] = (int)"BILLBOARD_UP";
  v8[0x25] = (int)"precipitation\\precipitation.v.hlsl";
  v8[0x27] = 0;
  v8[0x28] = (int)"SNOW";
  memset(&v8[0x29], 0, 0x3C);
  v8[0x38] = (int)"precipitation\\precipitation.v.hlsl";
  v8[0x39] = (int)"BILLBOARD_FACE";
  v8[0x3A] = 0;
  v8[0x3B] = (int)"SNOW";
  memset(&v8[0x3C], 0, 0x3C);
  v0 = v8;
  v1 = 0;
  for ( i = v8; ; v0 = i )
  {
    sub_801030((char *)v0[0xFFFFFFFF], (int)FileName);
    _sprintf(v9, "PRECIP%03i.vso", v1);
    v2 = sub_7B47E0();
    result = CreateVertexShader(FileName, v0, v2, v9, 0, 0);
    v4 = *(volatile LONG **)(4 * v1 + 0xB466E0);
    v5 = result;
    if ( v4 != (volatile LONG *)result )
    {
      if ( v4 )
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v4 + 1);
        if ( !result )
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
      }
      *(_DWORD *)(4 * v1 + 0xB466E0) = v5;
      if ( v5 )
        result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v5 + 1);
    }
    i += 0x13;
    if ( ++v1 >= 4 )
      break;
  }
  return result;
}
