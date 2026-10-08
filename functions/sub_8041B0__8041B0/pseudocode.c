// MoonSugarEffect decode: Copy program loader. Loads copy.v/copy.p plus MASK variants and stores wrappers with ref-counted replace.
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

  v1 = 0; /*0x8041c8*/
  v22[0] = "imagespace\\1x\\v\\copy.v.hlsl"; /*0x8041dd*/
  memset(&v22[1], 0, 0x48); /*0x8041e1*/
  v22[0x13] = "imagespace\\1x\\v\\copy.v.hlsl"; /*0x8041fd*/
  v22[0x14] = "MASK"; /*0x804201*/
  v22[0x15] = EmptyString; /*0x80420c*/
  memset(&v22[0x16], 0, 0x40); /*0x804217*/
  v2 = (char **)v22; /*0x804223*/
  v18 = v22; /*0x80422a*/
  v3 = this + 0x90; /*0x80422e*/
  do /*0x8042db*/
  {
    if ( *v2 ) /*0x80423a*/
    {
      sub_801030(*v2, (int)FileName); /*0x80424d*/
      _sprintf(v24, "COPY%03i.vso", v1); /*0x804260*/
      v4 = BSShaderManager_GetVertexShaderTargetName(); /*0x804274*/
      VertexShader = CreateVertexShader(FileName, v2 + 1, v4, v24, 0, 0); /*0x804288*/
      v6 = *(_DWORD *)v3; /*0x80428d*/
      v7 = VertexShader; /*0x804290*/
      if ( *(NiD3DShaderProgram **)v3 != VertexShader ) /*0x804294*/
      {
        if ( v6 ) /*0x804298*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x80429e*/
            (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x8042b4*/
        }
        *(_DWORD *)v3 = v7; /*0x8042b8*/
        if ( v7 ) /*0x8042bb*/
          InterlockedIncrement((volatile LONG *)v7 + 1); /*0x8042c1*/
      }
    }
    ++v1; /*0x8042cb*/
    v2 = (char **)(v18 + 0x13); /*0x8042ce*/
    v3 += 4; /*0x8042d1*/
    v18 += 0x13; /*0x8042d7*/
  }
  while ( v1 < 2 ); /*0x8042db*/
  v23[0] = "imagespace\\1x\\p\\copy.p.hlsl"; /*0x8042f3*/
  memset(&v23[1], 0, 0x48); /*0x8042fa*/
  v23[0x13] = "imagespace\\1x\\p\\copy.p.hlsl"; /*0x80431f*/
  v23[0x14] = "MASK"; /*0x804326*/
  memset(&v23[0x15], 0, 0x90); /*0x804331*/
  v8 = 0; /*0x804362*/
  v9 = (NiD3DShaderProgram **)(this + 0x98); /*0x804364*/
  v10 = (NiD3DShaderProgram **)v23; /*0x804371*/
  if ( MEMORY[0xB42F48] >= 2 ) /*0x804378*/
  {
    v20 = v23; /*0x804436*/
    do /*0x8044e7*/
    {
      result = *v10; /*0x804442*/
      if ( *v10 ) /*0x804442*/
      {
        sub_801030((char *)result, (int)FileName); /*0x804455*/
        _sprintf(v24, "COPY%03i.pso", v8); /*0x804468*/
        v15 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x80447b*/
        result = CreatePixelShader(FileName, v10 + 1, v15, v24, 0, 0); /*0x804494*/
        v16 = *v9; /*0x804499*/
        v17 = result; /*0x80449c*/
        if ( *v9 != result ) /*0x8044a0*/
        {
          if ( v16 ) /*0x8044a4*/
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v16 + 1); /*0x8044aa*/
            if ( !result ) /*0x8044b2*/
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v16)(v16, 1); /*0x8044c0*/
          }
          *v9 = v17; /*0x8044c4*/
          if ( v17 ) /*0x8044c7*/
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v17 + 1); /*0x8044cd*/
        }
      }
      ++v8; /*0x8044d7*/
      v10 = (NiD3DShaderProgram **)(v20 + 0x13); /*0x8044da*/
      ++v9; /*0x8044dd*/
      v20 += 0x13; /*0x8044e3*/
    }
    while ( v8 < 3 ); /*0x8044e7*/
  }
  else
  {
    v19 = v23; /*0x80437e*/
    do /*0x80442b*/
    {
      result = *v10; /*0x804386*/
      if ( *v10 ) /*0x804386*/
      {
        sub_801030((char *)result, (int)FileName); /*0x804399*/
        _sprintf(v24, "COPY%03i.pso", v8); /*0x8043ac*/
        v12 = (char *)BSShaderManager_GetPixelShaderTargetName(0); /*0x8043bf*/
        result = CreatePixelShader(FileName, v10 + 1, v12, v24, 0, 0); /*0x8043d8*/
        v13 = *v9; /*0x8043dd*/
        v14 = result; /*0x8043e0*/
        if ( *v9 != result ) /*0x8043e4*/
        {
          if ( v13 ) /*0x8043e8*/
          {
            result = (NiD3DShaderProgram *)InterlockedDecrement((volatile LONG *)v13 + 1); /*0x8043ee*/
            if ( !result ) /*0x8043f6*/
              result = (NiD3DShaderProgram *)(**(int (__thiscall ***)(NiD3DShaderProgram *, int))v13)(v13, 1); /*0x804404*/
          }
          *v9 = v14; /*0x804408*/
          if ( v14 ) /*0x80440b*/
            result = (NiD3DShaderProgram *)InterlockedIncrement((volatile LONG *)v14 + 1); /*0x804411*/
        }
      }
      ++v8; /*0x80441b*/
      v10 = (NiD3DShaderProgram **)(v19 + 0x13); /*0x80441e*/
      ++v9; /*0x804421*/
      v19 += 0x13; /*0x804427*/
    }
    while ( v8 < 2 ); /*0x80442b*/
  }
  return result; /*0x8044ed*/
}
