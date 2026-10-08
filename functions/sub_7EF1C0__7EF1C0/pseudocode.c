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

  v0 = 0; /*0x7ef1d8*/
  v6 = "precipitation\\precipitation.p.hlsl"; /*0x7ef1eb*/
  memset(v7, 0, 0x48); /*0x7ef1ef*/
  v7[0x12] = (int)"precipitation\\precipitation.p.hlsl"; /*0x7ef203*/
  v7[0x13] = (int)"SNOW"; /*0x7ef207*/
  memset(&v7[0x14], 0, 0x44); /*0x7ef20f*/
  v1 = v7; /*0x7ef225*/
  do /*0x7ef2cb*/
  {
    sub_801030((char *)v1[0xFFFFFFFF], (int)FileName); /*0x7ef23c*/
    _sprintf(v8, "PRECIP%03i.pso", v0); /*0x7ef24f*/
    v2 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x7ef265*/
    result = CreatePixelShader(FileName, v1, v2, v8, 0, 0); /*0x7ef27b*/
    v4 = *(volatile LONG **)(4 * v0 + 0xB46708); /*0x7ef280*/
    v5 = result; /*0x7ef287*/
    if ( v4 != (volatile LONG *)result ) /*0x7ef28b*/
    {
      if ( v4 ) /*0x7ef28f*/
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v4 + 1); /*0x7ef295*/
        if ( !result ) /*0x7ef29d*/
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x7ef2ab*/
      }
      *(_DWORD *)(4 * v0 + 0xB46708) = v5; /*0x7ef2af*/
      if ( v5 ) /*0x7ef2b6*/
        result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v5 + 1); /*0x7ef2bc*/
    }
    ++v0; /*0x7ef2c2*/
    v1 += 0x13; /*0x7ef2c5*/
  }
  while ( v0 < 2 ); /*0x7ef2cb*/
  return result; /*0x7ef2d1*/
}
