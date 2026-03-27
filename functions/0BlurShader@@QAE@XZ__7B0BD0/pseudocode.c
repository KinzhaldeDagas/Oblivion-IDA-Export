BlurShader *__thiscall BlurShader::BlurShader(BlurShader *this)
{
  int *v2; // ebx
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v7; // [esp+14h] [ebp-14h]

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this);
  *(_DWORD *)this = &BlurShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x94,
    4u,
    3,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  v2 = (int *)((char *)this + 0xA0);
  ArrayConstructor(
    (char *)this + 0xA0,
    4u,
    3,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_DWORD *)this + 0x38) = 0;
  *((_DWORD *)this + 0x2B) = 0;
  *((_DWORD *)this + 0x24) = 0;
  v3 = *((_DWORD *)this + 0x38);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x38) = 0;
  }
  v7 = 3;
  do
  {
    v4 = v2[0xFFFFFFFD];
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      v2[0xFFFFFFFD] = 0;
    }
    v5 = *v2;
    if ( *v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      *v2 = 0;
    }
    ++v2;
    --v7;
  }
  while ( v7 );
  return this;
}
