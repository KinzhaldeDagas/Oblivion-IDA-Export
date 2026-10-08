_DWORD *__thiscall sub_6AA590(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi

  *(this + 4) = 0; /*0x6aa5c2*/
  *this = a2; /*0x6aa5d9*/
  *(this + 1) = a3; /*0x6aa5df*/
  *(this + 2) = a4; /*0x6aa5e2*/
  *(this + 3) = a5; /*0x6aa5e5*/
  v7 = *(this + 4); /*0x6aa5e8*/
  if ( v7 != a6 ) /*0x6aa5f2*/
  {
    if ( v7 ) /*0x6aa5f6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6aa5fc*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6aa612*/
    }
    *(this + 4) = a6; /*0x6aa616*/
    if ( a6 ) /*0x6aa619*/
      InterlockedIncrement((volatile LONG *)(a6 + 4)); /*0x6aa61f*/
  }
  if ( a6 ) /*0x6aa62f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(a6 + 4)) ) /*0x6aa635*/
      (**(void (__thiscall ***)(int, int))a6)(a6, 1); /*0x6aa647*/
  }
  return this; /*0x6aa64b*/
}
