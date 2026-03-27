Lighting30Shader *__thiscall Lighting30Shader::Lighting30Shader(Lighting30Shader *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  LONG (__stdcall *v12)(volatile LONG *); // ebp
  int v13; // edi
  int v14; // edi
  int v15; // edi
  Lighting30Shader *result; // eax

  BSShader::BSShader((BSShader *)this);
  *(_DWORD *)this = &Lighting30Shader::`vftable';
  *((_DWORD *)this + 0x1F) = 0;
  *((_DWORD *)this + 0x20) = 0;
  *((_DWORD *)this + 0x21) = 0;
  *((_DWORD *)this + 0x22) = 0;
  *((_DWORD *)this + 0x23) = 0;
  *((_DWORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x25) = 0;
  *((_DWORD *)this + 0x26) = 0;
  v6 = *((_DWORD *)this + 9);
  if ( v6 != a2 )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
    *((_DWORD *)this + 9) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v7 = *((_DWORD *)this + 0x23);
  if ( v7 != a2 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *((_DWORD *)this + 0x23) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v8 = *((_DWORD *)this + 0x24);
  if ( v8 != a3 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    *((_DWORD *)this + 0x24) = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  v9 = *((_DWORD *)this + 0x25);
  if ( v9 != a4 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *((_DWORD *)this + 0x25) = a4;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
  }
  v10 = *((_DWORD *)this + 0x26);
  if ( v10 != a5 )
  {
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *((_DWORD *)this + 0x26) = a5;
    if ( a5 )
      InterlockedIncrement((volatile LONG *)(a5 + 4));
  }
  v11 = *((_DWORD *)this + 0x1F);
  v12 = InterlockedDecrement;
  if ( v11 )
  {
    if ( !v12((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    *((_DWORD *)this + 0x1F) = 0;
  }
  v13 = *((_DWORD *)this + 0x20);
  if ( v13 )
  {
    if ( !v12((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    *((_DWORD *)this + 0x20) = 0;
  }
  v14 = *((_DWORD *)this + 0x21);
  if ( v14 )
  {
    if ( !v12((volatile LONG *)(v14 + 4)) )
      (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    *((_DWORD *)this + 0x21) = 0;
  }
  v15 = *((_DWORD *)this + 0x22);
  if ( v15 )
  {
    if ( !v12((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    *((_DWORD *)this + 0x22) = 0;
  }
  *((_DWORD *)this + 0x27) = 0;
  dword_B46964 = 0;
  dword_B46968 = 0;
  dword_B4696C = 0;
  dword_B46970 = 0;
  dword_B46974 = 0;
  dword_B46978 = 0;
  dword_B4697C = 0;
  dword_B46980 = 0;
  byte_B46984 = 0;
  _memset(byte_B46930, 0, 0x31);
  result = this;
  if ( ShaderPackage < 7 )
    dword_B2DCFC = 8;
  return result;
}
