NiD3DShaderProgram *sub_7EF1C0()
{
  int v0; // edi
  int *v1; // ebp
  char *v2; // eax
  NiD3DShaderProgram *result; // eax
  volatile LONG *v4; // esi
  NiD3DShaderProgram *v5; // ebx
  const char *v6; // [esp+14h] [ebp-2A4h]
  int v7[37]; // [esp+18h] [ebp-2A0h] BYREF
  char v8[260]; // [esp+ACh] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+1B0h] [ebp-108h] BYREF

  v0 = 0;
  v6 = "precipitation\\precipitation.p.hlsl";
  memset(v7, 0, 0x48);
  v7[0x12] = (int)"precipitation\\precipitation.p.hlsl";
  v7[0x13] = (int)"SNOW";
  memset(&v7[0x14], 0, 0x44);
  v1 = v7;
  do
  {
    sub_801030((char *)v1[0xFFFFFFFF], (int)FileName);
    _sprintf(v8, "PRECIP%03i.pso", v0);
    v2 = (char *)sub_7B4780(0);
    result = CreatePixelShader(FileName, v1, v2, v8, 0, 0);
    v4 = *(volatile LONG **)(4 * v0 + 0xB46708);
    v5 = result;
    if ( v4 != (volatile LONG *)result )
    {
      if ( v4 )
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v4 + 1);
        if ( !result )
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
      }
      *(_DWORD *)(4 * v0 + 0xB46708) = v5;
      if ( v5 )
        result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v5 + 1);
    }
    ++v0;
    v1 += 0x13;
  }
  while ( v0 < 2 );
  return result;
}
