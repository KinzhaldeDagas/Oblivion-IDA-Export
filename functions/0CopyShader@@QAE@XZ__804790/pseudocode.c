// MoonSugarEffect decode: CopyShader ctor derives from BSImageSpaceShader, owns 2 vertex programs at +0x90, 3 pixel programs at +0x98, and mode/variant field +0xA4.
CopyShader *__thiscall CopyShader::CopyShader(CopyShader *this)
{
  int *v2; // edi
  int v3; // ebp
  int *v4; // ebp
  int v5; // ebx
  int v6; // edi
  int v8; // [esp+14h] [ebp-14h]

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this); /*0x8047bd*/
  v2 = (int *)((char *)this + 0x90); /*0x8047d0*/
  *(_DWORD *)this = &CopyShader::`vftable'; /*0x8047df*/
  ArrayConstructor( /*0x8047e5*/
    (char *)this + 0x90,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x804804*/
    (char *)this + 0x98,
    4u,
    3,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_BYTE *)this + 0x20) = 1; /*0x80480e*/
  v8 = 2; /*0x804812*/
  do /*0x804851*/
  {
    v3 = *v2; /*0x804820*/
    if ( *v2 ) /*0x804820*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x80482a*/
      {
        if ( v3 ) /*0x804836*/
          (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x804841*/
      }
      *v2 = 0; /*0x804843*/
    }
    ++v2; /*0x804849*/
    --v8; /*0x80484c*/
  }
  while ( v8 ); /*0x804851*/
  v4 = (int *)((char *)this + 0x98); /*0x804853*/
  v5 = 3; /*0x804855*/
  do /*0x804890*/
  {
    v6 = *v4; /*0x804860*/
    if ( *v4 ) /*0x804860*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x80486b*/
      {
        if ( v6 ) /*0x804877*/
          (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x804881*/
      }
      *v4 = 0; /*0x804883*/
    }
    ++v4; /*0x80488a*/
    --v5; /*0x80488d*/
  }
  while ( v5 ); /*0x804890*/
  *((_DWORD *)this + 0x29) = 0; /*0x804892*/
  return this; /*0x80489e*/
}
