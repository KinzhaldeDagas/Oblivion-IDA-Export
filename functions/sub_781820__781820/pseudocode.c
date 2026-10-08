// Creates an Oblivion NiD3DHLSLPixelShader: chooses default entry 'main' and the device pixel profile, compiles the source, creates the D3D9 shader object, and retains source/bytecode/profile/constant-table metadata.
NiD3DShaderProgram *__thiscall sub_781820(_DWORD *this, char *a2, const char *ArgList, const char *a4, char *a5)
{
  NiD3DShaderProgram *v6; // esi
  char *v7; // ebp
  int v9; // edi
  int v10; // [esp+24h] [ebp-Ch] BYREF
  int v11; // [esp+28h] [ebp-8h] BYREF
  int v12; // [esp+2Ch] [ebp-4h] BYREF

  v6 = (NiD3DShaderProgram *)FormHeapAlloc(0x38u); /*0x78182f*/
  if ( !v6 ) /*0x781838*/
    return 0; /*0x7818cb*/
  NiD3DShaderProgram::NiD3DShaderProgram(v6, unk_B428C4); /*0x781846*/
  *((_DWORD *)v6 + 0xA) = 0; /*0x78184f*/
  *(_DWORD *)v6 = &NiD3DHLSLPixelShader::`vftable'; /*0x781852*/
  *((_DWORD *)v6 + 0xB) = 0; /*0x781858*/
  *((_DWORD *)v6 + 0xC) = 0; /*0x78185b*/
  *((_DWORD *)v6 + 0xD) = 0; /*0x78185e*/
  v12 = 0; /*0x781861*/
  v10 = 0; /*0x781865*/
  v11 = 0; /*0x781869*/
  if ( !a4 ) /*0x78186d*/
    a4 = "main"; /*0x78186f*/
  v7 = a5; /*0x781878*/
  if ( !a5 ) /*0x78187e*/
    v7 = (char *)D3DXGetPixelShaderProfile_0(g_ShaderD3DDevice); /*0x78188c*/
  if ( NiD3DShaderProgramCreatorHLSL__CompileShaderFromFile(this, a2, a4, v7, (void **)&v10, (size_t *)&v12, (int)&v11) ) /*0x7818aa*/
  {
    v9 = NiDX9Renderer__CreatePixelShader(v10); /*0x7818e0*/
    if ( v9 ) /*0x7818e4*/
    {
      (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v6 + 8))(v6, ArgList); /*0x78191d*/
      (*(void (__thiscall **)(NiD3DShaderProgram *, char *))(*(_DWORD *)v6 + 0x10))(v6, a2); /*0x78192b*/
      (*(void (__thiscall **)(NiD3DShaderProgram *, int, int))(*(_DWORD *)v6 + 0x1C))(v6, v12, v10); /*0x78193e*/
      (*(void (__thiscall **)(NiD3DShaderProgram *, _DWORD *))(*(_DWORD *)v6 + 0x24))(v6, this); /*0x781948*/
      (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v6 + 0x3C))(v6, v9); /*0x781952*/
      (*(void (__thiscall **)(NiD3DShaderProgram *, const char *))(*(_DWORD *)v6 + 0x4C))(v6, a4); /*0x781960*/
      (*(void (__thiscall **)(NiD3DShaderProgram *, char *))(*(_DWORD *)v6 + 0x54))(v6, v7); /*0x78196a*/
      (*(void (__thiscall **)(NiD3DShaderProgram *, int))(*(_DWORD *)v6 + 0x5C))(v6, v11); /*0x781978*/
      if ( v11 ) /*0x781980*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v11 + 8))(v11); /*0x781988*/
      return v6; /*0x78198c*/
    }
    else
    {
      sub_738460(1, 0, "Failed CreatePixelShader call on %s\n", ArgList); /*0x7818f3*/
      (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v6)(v6, 1); /*0x781903*/
      return 0; /*0x781908*/
    }
  }
  else
  {
    (**(void (__thiscall ***)(NiD3DShaderProgram *, int))v6)(v6, 1); /*0x7818bb*/
    return 0; /*0x7818c0*/
  }
}
