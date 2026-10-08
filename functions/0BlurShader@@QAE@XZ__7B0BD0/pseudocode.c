BlurShader *__thiscall BlurShader::BlurShader(BlurShader *this)
{
  int *v2; // ebx
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v7; // [esp+14h] [ebp-14h]

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this); /*0x7b0bfd*/
  *(_DWORD *)this = &BlurShader::`vftable'; /*0x7b0c1d*/
  ArrayConstructor( /*0x7b0c23*/
    (char *)this + 0x94,
    4u,
    3,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  v2 = (int *)((char *)this + 0xA0); /*0x7b0c36*/
  ArrayConstructor( /*0x7b0c42*/
    (char *)this + 0xA0,
    4u,
    3,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0x38) = 0; /*0x7b0c47*/
  *((_DWORD *)this + 0x2B) = 0; /*0x7b0c4d*/
  *((_DWORD *)this + 0x24) = 0; /*0x7b0c53*/
  v3 = *((_DWORD *)this + 0x38); /*0x7b0c59*/
  if ( v3 ) /*0x7b0c66*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7b0c6c*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7b0c82*/
    *((_DWORD *)this + 0x38) = 0; /*0x7b0c84*/
  }
  v7 = 3; /*0x7b0c8a*/
  do /*0x7b0ce4*/
  {
    v4 = v2[0xFFFFFFFD]; /*0x7b0c92*/
    if ( v4 ) /*0x7b0c97*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7b0c9d*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7b0cb3*/
      v2[0xFFFFFFFD] = 0; /*0x7b0cb5*/
    }
    v5 = *v2; /*0x7b0cb8*/
    if ( *v2 ) /*0x7b0cb8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7b0cc2*/
      {
        if ( v5 ) /*0x7b0cce*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7b0cd8*/
      }
      *v2 = 0; /*0x7b0cda*/
    }
    ++v2; /*0x7b0cdc*/
    --v7; /*0x7b0cdf*/
  }
  while ( v7 ); /*0x7b0ce4*/
  return this; /*0x7b0ce8*/
}
