NiD3DShaderProgram *__thiscall sub_8041B0(char *this)
{
  int v1; // ebx
  char **v2; // esi
  char *v3; // ebp
  const char *v4; // eax
  NiD3DShaderProgram *VertexShader; // eax
  int v6; // esi
  NiD3DShaderProgram *v7; // edi
  int v8; // ebx
  NiD3DShaderProgram **v9; // ebp
  NiD3DShaderProgram **v10; // esi
  NiD3DShaderProgram *result; // eax
  char *v12; // eax
  NiD3DShaderProgram *v13; // esi
  NiD3DShaderProgram *v14; // edi
  char *v15; // eax
  NiD3DShaderProgram *v16; // esi
  NiD3DShaderProgram *v17; // edi
  _DWORD *v18; // [esp+10h] [ebp-390h]
  _DWORD *v19; // [esp+10h] [ebp-390h]
  _DWORD *v20; // [esp+10h] [ebp-390h]
  _DWORD v22[38]; // [esp+18h] [ebp-388h] BYREF
  _DWORD v23[57]; // [esp+B0h] [ebp-2F0h] BYREF
  char v24[260]; // [esp+194h] [ebp-20Ch] BYREF
  char FileName[260]; // [esp+298h] [ebp-108h] BYREF

  v1 = 0;
  v22[0] = "imagespace\\1x\\v\\copy.v.hlsl";
  memset(&v22[1], 0, 0x48);
  v22[0x13] = "imagespace\\1x\\v\\copy.v.hlsl";
  v22[0x14] = "MASK";
  v22[0x15] = EmptyString;
  memset(&v22[0x16], 0, 0x40);
  v2 = (char **)v22;
  v18 = v22;
  v3 = this + 0x90;
  do
  {
    if ( *v2 )
    {
      sub_801030(*v2, (int)FileName);
      _sprintf(v24, "COPY%03i.vso", v1);
      v4 = sub_7B47E0();
      VertexShader = CreateVertexShader(FileName, v2 + 1, v4, v24, 0, 0);
      v6 = *(_DWORD *)v3;
      v7 = VertexShader;
      if ( *(NiD3DShaderProgram **)v3 != VertexShader )
      {
        if ( v6 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
            (**(void (__thiscall ***)(int, int))v6)(v6, 1);
        }
        *(_DWORD *)v3 = v7;
        if ( v7 )
          InterlockedIncrement((volatile LONG *)v7 + 1);
      }
    }
    ++v1;
    v2 = (char **)(v18 + 0x13);
    v3 += 4;
    v18 += 0x13;
  }
  while ( v1 < 2 );
  v23[0] = "imagespace\\1x\\p\\copy.p.hlsl";
  memset(&v23[1], 0, 0x48);
  v23[0x13] = "imagespace\\1x\\p\\copy.p.hlsl";
  v23[0x14] = "MASK";
  memset(&v23[0x15], 0, 0x90);
  v8 = 0;
  v9 = (NiD3DShaderProgram **)(this + 0x98);
  v10 = (NiD3DShaderProgram **)v23;
  if ( ShaderPackage >= 2 )
  {
    v20 = v23;
    do
    {
      result = *v10;
      if ( *v10 )
      {
        sub_801030((char *)result, (int)FileName);
        _sprintf(v24, "COPY%03i.pso", v8);
        v15 = (char *)sub_7B4780(0);
        result = CreatePixelShader(FileName, v10 + 1, v15, v24, 0, 0);
        v16 = *v9;
        v17 = result;
        if ( *v9 != result )
        {
          if ( v16 )
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v16 + 1);
            if ( !result )
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v16)(v16, 1);
          }
          *v9 = v17;
          if ( v17 )
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v17 + 1);
        }
      }
      ++v8;
      v10 = (NiD3DShaderProgram **)(v20 + 0x13);
      ++v9;
      v20 += 0x13;
    }
    while ( v8 < 3 );
  }
  else
  {
    v19 = v23;
    do
    {
      result = *v10;
      if ( *v10 )
      {
        sub_801030((char *)result, (int)FileName);
        _sprintf(v24, "COPY%03i.pso", v8);
        v12 = (char *)sub_7B4780(0);
        result = CreatePixelShader(FileName, v10 + 1, v12, v24, 0, 0);
        v13 = *v9;
        v14 = result;
        if ( *v9 != result )
        {
          if ( v13 )
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v13 + 1);
            if ( !result )
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v13)(v13, 1);
          }
          *v9 = v14;
          if ( v14 )
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v14 + 1);
        }
      }
      ++v8;
      v10 = (NiD3DShaderProgram **)(v19 + 0x13);
      ++v9;
      v19 += 0x13;
    }
    while ( v8 < 2 );
  }
  return result;
}
