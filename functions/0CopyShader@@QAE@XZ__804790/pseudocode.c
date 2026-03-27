CopyShader *__thiscall CopyShader::CopyShader(CopyShader *this)
{
  int *v2; // edi
  int v3; // ebp
  int *v4; // ebp
  int v5; // ebx
  int v6; // edi
  int v8; // [esp+14h] [ebp-14h]

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this);
  v2 = (int *)((char *)this + 0x90);
  *(_DWORD *)this = &CopyShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x90,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0x98,
    4u,
    3,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_BYTE *)this + 0x20) = 1;
  v8 = 2;
  do
  {
    v3 = *v2;
    if ( *v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      {
        if ( v3 )
          (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      }
      *v2 = 0;
    }
    ++v2;
    --v8;
  }
  while ( v8 );
  v4 = (int *)((char *)this + 0x98);
  v5 = 3;
  do
  {
    v6 = *v4;
    if ( *v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      {
        if ( v6 )
          (**(void (__thiscall ***)(int, int))v6)(v6, 1);
      }
      *v4 = 0;
    }
    ++v4;
    --v5;
  }
  while ( v5 );
  *((_DWORD *)this + 0x29) = 0;
  return this;
}
