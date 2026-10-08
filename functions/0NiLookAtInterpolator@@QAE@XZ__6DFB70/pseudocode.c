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

  sub_6EBA00((NiObject *)this); /*0x6dfb9b*/
  *(_DWORD *)this = &NiLookAtInterpolator::`vftable'; /*0x6dfba4*/
  *((_DWORD *)this + 4) = a2; /*0x6dfbaa*/
  *((_WORD *)this + 6) = 0; /*0x6dfbaf*/
  *((_DWORD *)this + 5) = 0; /*0x6dfbb3*/
  *((_DWORD *)this + 6) = dword_B24260; /*0x6dfbbc*/
  *((_DWORD *)this + 7) = dword_B24264; /*0x6dfbc5*/
  *((_DWORD *)this + 8) = dword_B24268; /*0x6dfbcd*/
  *((float *)this + 9) = flt_B3CBA4; /*0x6dfbd6*/
  *((float *)this + 0xA) = flt_B3CBA8; /*0x6dfbdf*/
  *((float *)this + 0xB) = flt_B3CBAC; /*0x6dfbf1*/
  *((float *)this + 0xC) = flt_B3CBB0; /*0x6dfbfc*/
  *((float *)this + 0xD) = flt_A79E10; /*0x6dfc07*/
  v5 = (int *)((char *)this + 0x38); /*0x6dfc0a*/
  ArrayConstructor( /*0x6dfc12*/
    (char *)this + 0x38,
    4u,
    3,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  if ( a4 ) /*0x6dfc20*/
    *((_WORD *)this + 6) |= 1u; /*0x6dfc22*/
  else
    *((_WORD *)this + 6) &= ~1u; /*0x6dfc29*/
  *((_WORD *)this + 6) = (2 * a3) | *((_WORD *)this + 6) & 0xFFF9; /*0x6dfc42*/
  v6 = *v5; /*0x6dfc46*/
  if ( *v5 ) /*0x6dfc46*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x6dfc51*/
    {
      if ( v6 ) /*0x6dfc5d*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6dfc67*/
    }
    *v5 = 0; /*0x6dfc69*/
  }
  v7 = *((_DWORD *)this + 0xF); /*0x6dfc6c*/
  if ( v7 ) /*0x6dfc71*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6dfc77*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6dfc8d*/
    *((_DWORD *)this + 0xF) = 0; /*0x6dfc8f*/
  }
  v8 = *((_DWORD *)this + 0x10); /*0x6dfc92*/
  if ( v8 ) /*0x6dfc97*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x6dfc9d*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x6dfcb3*/
    *((_DWORD *)this + 0x10) = 0; /*0x6dfcb5*/
  }
  return this; /*0x6dfcba*/
}
