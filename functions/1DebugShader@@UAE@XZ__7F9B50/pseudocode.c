void __thiscall DebugShader::~DebugShader(BSShader *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // edi
  int v4; // esi
  int v5; // esi
  int *v6; // edi
  int v7; // ebx
  int v8; // esi
  int v9; // esi
  LONG (__stdcall *v10)(volatile LONG *); // edi
  int v11; // esi
  int v12; // esi

  this->__vftable = (BSShaderVtbl *)&DebugShader::`vftable';
  v2 = *((_DWORD *)this + 0x30);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x30) = 0;
  }
  v4 = *((_DWORD *)this + 0x31);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0x31) = 0;
  }
  v5 = *((_DWORD *)this + 0x2F);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0x2F) = 0;
  }
  v6 = (int *)(this + 1);
  v7 = 0x10;
  do
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      {
        if ( v8 )
          (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      }
      *v6 = 0;
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = *((_DWORD *)this + 0x31);
  v10 = InterlockedDecrement;
  if ( v9 )
  {
    if ( !v10((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  v11 = *((_DWORD *)this + 0x30);
  if ( v11 )
  {
    if ( !v10((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  v12 = *((_DWORD *)this + 0x2F);
  if ( v12 )
  {
    if ( !v10((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
  }
  _LN21(this + 1, 4u, 0x10, (void (__thiscall *)(void *))sub_7016A0);
  BSShader::~BSShader(this);
}
