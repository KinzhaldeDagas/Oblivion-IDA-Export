NiD3DShaderInterface *__thiscall sub_77BFB0(int *this, _BYTE *ArgList, int a3, char a4)
{
  NiD3DShaderInterface *v6; // edi
  int v7; // eax
  int v8; // eax

  if ( *(this + 5) ) /*0x77bfb3*/
  {
    if ( ArgList && *ArgList ) /*0x77bfd7*/
    {
      v6 = (NiD3DShaderInterface *)(*(int (__thiscall **)(int *, _BYTE *, int))(*this + 8))(this, ArgList, a3); /*0x77bff0*/
      if ( !v6 ) /*0x77bff4*/
      {
        v7 = (*(int (__thiscall **)(int *))(*this + 0x34))(this); /*0x77bffd*/
        if ( v7 ) /*0x77c001*/
        {
          while ( 1 ) /*0x77c012*/
          {
            v6 = (NiD3DShaderInterface *)(*(int (__thiscall **)(int, _DWORD, _BYTE *, int))(*(_DWORD *)v7 + 4))( /*0x77c012*/
                                           v7,
                                           *(this + 5),
                                           ArgList,
                                           a3);
            v8 = *this; /*0x77c016*/
            if ( v6 ) /*0x77c01a*/
              break; /*0x77c01a*/
            v7 = (*(int (__thiscall **)(int *))(v8 + 0x38))(this); /*0x77c01f*/
            if ( !v7 ) /*0x77c023*/
              goto LABEL_11; /*0x77c023*/
          }
          (*(void (__thiscall **)(int *, NiD3DShaderInterface *, int))(v8 + 0x18))(this, v6, a3); /*0x77c02c*/
          sub_769B10((_DWORD *)*(this + 5), (int)v6); /*0x77c032*/
          NiD3DShaderInterface::SetDX9Renderer(v6, (NiDX9Renderer *)*(this + 5)); /*0x77c03d*/
        }
      }
LABEL_11:
      if ( a4 ) /*0x77c047*/
      {
        if ( !v6 ) /*0x77c04b*/
          sub_738460(1, 0, "Failed to find shader %s, Implementation %d\n", ArgList, a3); /*0x77c057*/
      }
      return v6; /*0x77c05f*/
    }
    else
    {
      sub_738460(1, 0, "Attempting to RetrieveShader w/out a valid name!\n"); /*0x77c071*/
      return 0; /*0x77c07a*/
    }
  }
  else
  {
    OutputDebugStringA("Attempting to RetrieveShader w/out a valid renderer!\n"); /*0x77bfbe*/
    return 0; /*0x77bfc4*/
  }
}
