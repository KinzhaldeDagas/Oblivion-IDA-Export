DebugShader *__thiscall DebugShader::DebugShader(DebugShader *this)
{
  int *v2; // ebx
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v8; // [esp+14h] [ebp-14h]

  BSShader::BSShader((BSShader *)this);
  v2 = (int *)((char *)this + 0x7C);
  *(_DWORD *)this = &DebugShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x7C,
    4u,
    0x10,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_DWORD *)this + 0x2F) = 0;
  *((_DWORD *)this + 0x30) = 0;
  *((_DWORD *)this + 0x31) = 0;
  v3 = *((_DWORD *)this + 0x30);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x30) = 0;
  }
  v4 = *((_DWORD *)this + 0x31);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0x31) = 0;
  }
  v5 = *((_DWORD *)this + 0x2F);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0x2F) = 0;
  }
  v8 = 0x10;
  do
  {
    v6 = *v2;
    if ( *v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      {
        if ( v6 )
          (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      }
      *v2 = 0;
    }
    ++v2;
    --v8;
  }
  while ( v8 );
  *((_BYTE *)this + 0x20) = 1;
  return this;
}
