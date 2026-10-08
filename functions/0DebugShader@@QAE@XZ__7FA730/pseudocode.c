DebugShader *__thiscall DebugShader::DebugShader(DebugShader *this)
{
  int *v2; // ebx
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v8; // [esp+14h] [ebp-14h]

  BSShader::BSShader((BSShader *)this); /*0x7fa75d*/
  v2 = (int *)((char *)this + 0x7C); /*0x7fa770*/
  *(_DWORD *)this = &DebugShader::`vftable'; /*0x7fa77a*/
  ArrayConstructor( /*0x7fa780*/
    (char *)this + 0x7C,
    4u,
    0x10,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0x2F) = 0; /*0x7fa785*/
  *((_DWORD *)this + 0x30) = 0; /*0x7fa78b*/
  *((_DWORD *)this + 0x31) = 0; /*0x7fa791*/
  v3 = *((_DWORD *)this + 0x30); /*0x7fa797*/
  if ( v3 ) /*0x7fa7a4*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7fa7aa*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7fa7c0*/
    *((_DWORD *)this + 0x30) = 0; /*0x7fa7c2*/
  }
  v4 = *((_DWORD *)this + 0x31); /*0x7fa7c8*/
  if ( v4 ) /*0x7fa7d0*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7fa7d6*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7fa7ec*/
    *((_DWORD *)this + 0x31) = 0; /*0x7fa7ee*/
  }
  v5 = *((_DWORD *)this + 0x2F); /*0x7fa7f4*/
  if ( v5 ) /*0x7fa7fc*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7fa802*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7fa818*/
    *((_DWORD *)this + 0x2F) = 0; /*0x7fa81a*/
  }
  v8 = 0x10; /*0x7fa820*/
  do /*0x7fa854*/
  {
    v6 = *v2; /*0x7fa828*/
    if ( *v2 ) /*0x7fa828*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7fa832*/
      {
        if ( v6 ) /*0x7fa83e*/
          (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7fa848*/
      }
      *v2 = 0; /*0x7fa84a*/
    }
    ++v2; /*0x7fa84c*/
    --v8; /*0x7fa84f*/
  }
  while ( v8 ); /*0x7fa854*/
  *((_BYTE *)this + 0x20) = 1; /*0x7fa856*/
  return this; /*0x7fa85c*/
}
