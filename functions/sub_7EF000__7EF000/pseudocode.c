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

  v7 = "precipitation\\precipitation.v.hlsl"; /*0x7ef030*/
  v8[0] = (int)"BILLBOARD_UP"; /*0x7ef034*/
  memset(&v8[1], 0, 0x44); /*0x7ef038*/
  v8[0x12] = (int)"precipitation\\precipitation.v.hlsl"; /*0x7ef055*/
  v8[0x13] = (int)"BILLBOARD_FACE"; /*0x7ef059*/
  memset(&v8[0x14], 0, 0x44); /*0x7ef060*/
  v8[0x26] = (int)"BILLBOARD_UP"; /*0x7ef075*/
  v8[0x25] = (int)"precipitation\\precipitation.v.hlsl"; /*0x7ef08a*/
  v8[0x27] = 0; /*0x7ef091*/
  v8[0x28] = (int)"SNOW"; /*0x7ef098*/
  memset(&v8[0x29], 0, 0x3C); /*0x7ef09f*/
  v8[0x38] = (int)"precipitation\\precipitation.v.hlsl"; /*0x7ef0bd*/
  v8[0x39] = (int)"BILLBOARD_FACE"; /*0x7ef0c4*/
  v8[0x3A] = 0; /*0x7ef0cb*/
  v8[0x3B] = (int)"SNOW"; /*0x7ef0d2*/
  memset(&v8[0x3C], 0, 0x3C); /*0x7ef0d9*/
  v0 = v8; /*0x7ef0ec*/
  v1 = 0; /*0x7ef0f3*/
  for ( i = v8; ; v0 = i ) /*0x7ef0f5*/
  {
    sub_801030((char *)v0[0xFFFFFFFF], (int)FileName); /*0x7ef110*/
    _sprintf(v9, "PRECIP%03i.vso", v1); /*0x7ef123*/
    v2 = BSShaderManager_GetVertexShaderTargetName(); /*0x7ef135*/
    result = CreateVertexShader(FileName, v0, v2, v9, 0, 0); /*0x7ef148*/
    v4 = *(volatile LONG **)(4 * v1 + 0xB466E0); /*0x7ef14d*/
    v5 = result; /*0x7ef154*/
    if ( v4 != (volatile LONG *)result ) /*0x7ef158*/
    {
      if ( v4 ) /*0x7ef15c*/
      {
        result = (NiD3DShaderProgram *)InterlockedDecrement(v4 + 1); /*0x7ef162*/
        if ( !result ) /*0x7ef16a*/
          result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x7ef178*/
      }
      *(_DWORD *)(4 * v1 + 0xB466E0) = v5; /*0x7ef17c*/
      if ( v5 ) /*0x7ef183*/
        result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v5 + 1); /*0x7ef189*/
    }
    i += 0x13; /*0x7ef18f*/
    if ( ++v1 >= 4 ) /*0x7ef19a*/
      break; /*0x7ef19a*/
  }
  return result; /*0x7ef1a0*/
}
