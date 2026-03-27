NiLookAtInterpolator *__thiscall NiLookAtInterpolator::NiLookAtInterpolator(
        NiLookAtInterpolator *this,
        int a2,
        __int16 a3,
        char a4)
{
  int *v5; // ebp
  int v6; // edi
  int v7; // edi
  int v8; // edi

  sub_6EBA00((float *)this);
  *(_DWORD *)this = &NiLookAtInterpolator::`vftable';
  *((_DWORD *)this + 4) = a2;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = dword_B24260;
  *((_DWORD *)this + 7) = dword_B24264;
  *((_DWORD *)this + 8) = dword_B24268;
  *((_DWORD *)this + 9) = dword_B3CBA4;
  *((_DWORD *)this + 0xA) = dword_B3CBA8;
  *((_DWORD *)this + 0xB) = dword_B3CBAC;
  *((_DWORD *)this + 0xC) = dword_B3CBB0;
  *((float *)this + 0xD) = flt_A79E10;
  v5 = (int *)((char *)this + 0x38);
  ArrayConstructor(
    (char *)this + 0x38,
    4u,
    3,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  if ( a4 )
    *((_WORD *)this + 6) |= 1u;
  else
    *((_WORD *)this + 6) &= ~1u;
  *((_WORD *)this + 6) = (2 * a3) | *((_WORD *)this + 6) & 0xFFF9;
  v6 = *v5;
  if ( *v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
    {
      if ( v6 )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
    *v5 = 0;
  }
  v7 = *((_DWORD *)this + 0xF);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0xF) = 0;
  }
  v8 = *((_DWORD *)this + 0x10);
  if ( v8 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    *((_DWORD *)this + 0x10) = 0;
  }
  return this;
}
