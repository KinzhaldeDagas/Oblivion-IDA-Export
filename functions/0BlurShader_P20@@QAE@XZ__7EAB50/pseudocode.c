BlurShader_P20 *__thiscall BlurShader_P20::BlurShader_P20(BlurShader_P20 *this)
{
  int *v2; // ebp
  int v3; // edi
  int v4; // edi
  int v6; // [esp+14h] [ebp-14h]

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this);
  *(_DWORD *)this = &BlurShader_P20::`vftable';
  ArrayConstructor(
    (char *)this + 0x94,
    4u,
    5,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0xA8,
    4u,
    5,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_DWORD *)this + 0x2F) = 0;
  *((_DWORD *)this + 0x24) = 0;
  v2 = (int *)((char *)this + 0xA8);
  v6 = 5;
  do
  {
    v3 = v2[0xFFFFFFFB];
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      v2[0xFFFFFFFB] = 0;
    }
    v4 = *v2;
    if ( *v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      *v2 = 0;
    }
    ++v2;
    --v6;
  }
  while ( v6 );
  *((_BYTE *)this + 0x20) = 1;
  return this;
}
