NiD3DShaderInterface *__thiscall sub_77BFB0(int *this, _BYTE *ArgList, int a3, char a4)
{
  NiD3DShaderInterface *v6; // edi
  int v7; // eax
  int v8; // eax

  if ( *(this + 5) )
  {
    if ( ArgList && *ArgList )
    {
      v6 = (NiD3DShaderInterface *)(*(int (__thiscall **)(int *, _BYTE *, int))(*this + 8))(this, ArgList, a3);
      if ( !v6 )
      {
        v7 = (*(int (__thiscall **)(int *))(*this + 0x34))(this);
        if ( v7 )
        {
          while ( 1 )
          {
            v6 = (NiD3DShaderInterface *)(*(int (__thiscall **)(int, _DWORD, _BYTE *, int))(*(_DWORD *)v7 + 4))(
                                           v7,
                                           *(this + 5),
                                           ArgList,
                                           a3);
            v8 = *this;
            if ( v6 )
              break;
            v7 = (*(int (__thiscall **)(int *))(v8 + 0x38))(this);
            if ( !v7 )
              goto LABEL_11;
          }
          (*(void (__thiscall **)(int *, NiD3DShaderInterface *, int))(v8 + 0x18))(this, v6, a3);
          sub_769B10((_DWORD *)*(this + 5), (int)v6);
          NiD3DShaderInterface::SetDX9Renderer(v6, (NiDX9Renderer *)*(this + 5));
        }
      }
LABEL_11:
      if ( a4 )
      {
        if ( !v6 )
          sub_738460(1, 0, "Failed to find shader %s, Implementation %d\n", ArgList, a3);
      }
      return v6;
    }
    else
    {
      sub_738460(1, 0, "Attempting to RetrieveShader w/out a valid name!\n");
      return 0;
    }
  }
  else
  {
    OutputDebugStringA("Attempting to RetrieveShader w/out a valid renderer!\n");
    return 0;
  }
}
