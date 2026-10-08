GeometryDecalShader *__thiscall GeometryDecalShader::GeometryDecalShader(GeometryDecalShader *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
  NiD3DPass **v5; // edi
  int v6; // ebp
  NiD3DPass *v7; // ecx

  BSShader::BSShader((BSShader *)this); /*0x805dbb*/
  *(_DWORD *)this = &GeometryDecalShader::`vftable'; /*0x805dd8*/
  ArrayConstructor( /*0x805dde*/
    (char *)this + 0x7C,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  ArrayConstructor( /*0x805dfd*/
    (char *)this + 0x84,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x805e1c*/
    (char *)this + 0x8C,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0x25) = 0; /*0x805e21*/
  *((_DWORD *)this + 0x26) = 0; /*0x805e27*/
  *((_DWORD *)this + 0x27) = 0; /*0x805e2d*/
  *((_BYTE *)this + 0x20) = 1; /*0x805e33*/
  v2 = *((_DWORD *)this + 0x25); /*0x805e37*/
  if ( v2 ) /*0x805e44*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x805e4a*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x805e60*/
    *((_DWORD *)this + 0x25) = 0; /*0x805e62*/
  }
  v3 = *((_DWORD *)this + 0x26); /*0x805e68*/
  if ( v3 ) /*0x805e70*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x805e76*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x805e8c*/
    *((_DWORD *)this + 0x26) = 0; /*0x805e8e*/
  }
  v4 = *((_DWORD *)this + 0x27); /*0x805e94*/
  if ( v4 ) /*0x805e9c*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x805ea2*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x805eb8*/
    *((_DWORD *)this + 0x27) = 0; /*0x805eba*/
  }
  v5 = (NiD3DPass **)((char *)this + 0x7C); /*0x805ec0*/
  v6 = 2; /*0x805ec2*/
  do /*0x805ee0*/
  {
    v7 = *v5; /*0x805ec7*/
    if ( *v5 ) /*0x805ec7*/
    {
      if ( v7->RefCount-- == 1 ) /*0x805ecd*/
        NiD3DPass_ReleaseToPool(v7); /*0x805ed3*/
      *v5 = 0; /*0x805ed8*/
    }
    ++v5; /*0x805eda*/
    --v6; /*0x805edd*/
  }
  while ( v6 ); /*0x805ee0*/
  return this; /*0x805ee4*/
}
