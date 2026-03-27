NiD3DShaderProgram *__thiscall sub_80E0C0(char *this)
{
  int v1; // esi
  char **v2; // edi
  char *v3; // ebx
  NiD3DShaderProgram *VertexShader; // eax
  int v5; // esi
  NiD3DShaderProgram *v6; // edi
  int v7; // esi
  bool v8; // cc
  int v9; // esi
  NiD3DShaderProgram **v10; // ebx
  NiD3DShaderProgram **v11; // edi
  NiD3DShaderProgram *result; // eax
  NiD3DShaderProgram *v13; // esi
  NiD3DShaderProgram *v14; // edi
  NiD3DShaderProgram *v15; // esi
  NiD3DShaderProgram *v16; // esi
  NiD3DShaderProgram *v17; // edi
  NiD3DShaderProgram *v18; // esi
  _DWORD *v19; // [esp+10h] [ebp-3E0h]
  _DWORD *v20; // [esp+10h] [ebp-3E0h]
  _DWORD *v21; // [esp+10h] [ebp-3E0h]
  int v22; // [esp+14h] [ebp-3DCh]
  int v23; // [esp+14h] [ebp-3DCh]
  _DWORD v25[38]; // [esp+1Ch] [ebp-3D4h] BYREF
  _DWORD v26[76]; // [esp+B4h] [ebp-33Ch] BYREF
  char FileName[260]; // [esp+1E4h] [ebp-20Ch] BYREF
  char v28[260]; // [esp+2E8h] [ebp-108h] BYREF

  v26[0] = "speedtree\\frond.v.hlsl";
  memset(&v26[1], 0, 0x48);
  v26[0x13] = "speedtree\\frond.v.hlsl";
  v26[0x14] = &off_A90D88;
  v26[0x15] = EmptyString;
  memset(&v26[0x16], 0, 0x40);
  v26[0x26] = "speedtree\\frond.v.hlsl";
  v26[0x27] = "PT";
  v26[0x28] = EmptyString;
  memset(&v26[0x29], 0, 0x40);
  v26[0x39] = "speedtree\\frond.v.hlsl";
  v26[0x3A] = "PT";
  v26[0x3B] = EmptyString;
  v26[0x3C] = &off_A90D88;
  v26[0x3D] = EmptyString;
  memset(&v26[0x3E], 0, 0x38);
  v25[0] = "speedtree\\frond.p.hlsl";
  memset(&v25[1], 0, 0x48);
  v25[0x13] = "speedtree\\frond.p.hlsl";
  v25[0x14] = &off_A90D88;
  v25[0x15] = EmptyString;
  memset(&v25[0x16], 0, 0x40);
  v1 = 0;
  v2 = (char **)v26;
  v22 = 0;
  v19 = v26;
  v3 = this + 0x7C;
  do
  {
    if ( *v2 )
    {
      sub_801030(*v2, (int)FileName);
      _sprintf(v28, "STFROND%03i.vso", v1);
      VertexShader = CreateVertexShader(FileName, v2 + 1, "vs_1_1", v28, 0, 0);
      v5 = *(_DWORD *)v3;
      v6 = VertexShader;
      if ( *(NiD3DShaderProgram **)v3 != VertexShader )
      {
        if ( v5 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
            (**(void (__thiscall ***)(int, int))v5)(v5, 1);
        }
        *(_DWORD *)v3 = v6;
        if ( v6 )
          InterlockedIncrement((volatile LONG *)v6 + 1);
      }
    }
    else
    {
      v7 = *(_DWORD *)v3;
      if ( *(_DWORD *)v3 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        {
          if ( v7 )
            (**(void (__thiscall ***)(int, int))v7)(v7, 1);
        }
        *(_DWORD *)v3 = 0;
      }
    }
    v1 = v22 + 1;
    v2 = (char **)(v19 + 0x13);
    v3 += 4;
    v8 = ++v22 < 4;
    v19 += 0x13;
  }
  while ( v8 );
  v9 = 0;
  v10 = (NiD3DShaderProgram **)(this + 0x8C);
  v11 = (NiD3DShaderProgram **)v25;
  v23 = 0;
  if ( ShaderPackage < 2 )
  {
    v21 = v25;
    do
    {
      result = *v11;
      if ( *v11 )
      {
        sub_801030((char *)result, (int)FileName);
        _sprintf(v28, "STFROND%03i.pso", v9);
        result = CreatePixelShader(FileName, v11 + 1, "ps_1_3", v28, 0, 0);
        v16 = *v10;
        v17 = result;
        if ( *v10 != result )
        {
          if ( v16 )
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v16 + 1);
            if ( !result )
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v16)(v16, 1);
          }
          *v10 = v17;
          if ( v17 )
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v17 + 1);
        }
      }
      else
      {
        v18 = *v10;
        if ( *v10 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v18 + 1);
          if ( !result )
          {
            if ( v18 )
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v18)(v18, 1);
          }
          *v10 = 0;
        }
      }
      v9 = v23 + 1;
      v11 = (NiD3DShaderProgram **)(v21 + 0x13);
      ++v10;
      v8 = ++v23 < 2;
      v21 += 0x13;
    }
    while ( v8 );
  }
  else
  {
    v20 = v25;
    do
    {
      result = *v11;
      if ( *v11 )
      {
        sub_801030((char *)result, (int)FileName);
        _sprintf(v28, "STFROND2%03i.pso", v9);
        result = CreatePixelShader(FileName, v11 + 1, "ps_2_0", v28, 0, 0);
        v13 = *v10;
        v14 = result;
        if ( *v10 != result )
        {
          if ( v13 )
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v13 + 1);
            if ( !result )
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v13)(v13, 1);
          }
          *v10 = v14;
          if ( v14 )
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v14 + 1);
        }
      }
      else
      {
        v15 = *v10;
        if ( *v10 )
        {
          result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v15 + 1);
          if ( !result )
          {
            if ( v15 )
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v15)(v15, 1);
          }
          *v10 = 0;
        }
      }
      v9 = v23 + 1;
      v11 = (NiD3DShaderProgram **)(v20 + 0x13);
      ++v10;
      v8 = ++v23 < 2;
      v20 += 0x13;
    }
    while ( v8 );
  }
  return result;
}
