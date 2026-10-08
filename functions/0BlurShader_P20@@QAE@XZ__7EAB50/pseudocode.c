// MoonSugarEffect decode: BlurShader_P20 ctor owns 5 vertex/pixel program slots and blur pass state; inherits image-space source texture handling from BSImageSpaceShader.
BlurShader_P20 *__thiscall BlurShader_P20::BlurShader_P20(BlurShader_P20 *this)
{
  int *v2; // ebp
  int v3; // edi
  int v4; // edi
  int v6; // [esp+14h] [ebp-14h]

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this); /*0x7eab7d*/
  *(_DWORD *)this = &BlurShader_P20::`vftable'; /*0x7eab9d*/
  ArrayConstructor( /*0x7eaba3*/
    (char *)this + 0x94,
    4u,
    5,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x7eabc2*/
    (char *)this + 0xA8,
    4u,
    5,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0x2F) = 0; /*0x7eabcc*/
  *((_DWORD *)this + 0x24) = 0; /*0x7eabd2*/
  v2 = (int *)((char *)this + 0xA8); /*0x7eabd8*/
  v6 = 5; /*0x7eabda*/
  do /*0x7eac36*/
  {
    v3 = v2[0xFFFFFFFB]; /*0x7eabe2*/
    if ( v3 ) /*0x7eabe7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7eabed*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7eac03*/
      v2[0xFFFFFFFB] = 0; /*0x7eac05*/
    }
    v4 = *v2; /*0x7eac08*/
    if ( *v2 ) /*0x7eac08*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7eac13*/
      {
        if ( v4 ) /*0x7eac1f*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7eac29*/
      }
      *v2 = 0; /*0x7eac2b*/
    }
    ++v2; /*0x7eac2e*/
    --v6; /*0x7eac31*/
  }
  while ( v6 ); /*0x7eac36*/
  *((_BYTE *)this + 0x20) = 1; /*0x7eac38*/
  return this; /*0x7eac3e*/
}
