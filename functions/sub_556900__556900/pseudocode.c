_DWORD *__thiscall sub_556900(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi

  *this = 0; /*0x55692d*/
  *((_WORD *)this + 2) = 0; /*0x55692f*/
  *((_WORD *)this + 3) = 0; /*0x556933*/
  *(this + 3) = 0; /*0x55693b*/
  *(this + 4) = 0; /*0x55693e*/
  *(this + 7) = 0; /*0x556941*/
  *(this + 8) = 0; /*0x556944*/
  v2 = InterlockedDecrement; /*0x556947*/
  *(this + 2) = 0; /*0x55694d*/
  v3 = *(this + 4); /*0x556950*/
  if ( v3 ) /*0x55695a*/
  {
    if ( !v2((volatile LONG *)(v3 + 4)) ) /*0x556960*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x556972*/
    *(this + 4) = 0; /*0x556974*/
  }
  v4 = *(this + 3); /*0x556977*/
  if ( v4 ) /*0x55697c*/
  {
    if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x556982*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x556994*/
    *(this + 3) = 0; /*0x556996*/
  }
  v5 = *(this + 7); /*0x556999*/
  if ( v5 ) /*0x55699e*/
  {
    if ( !v2((volatile LONG *)(v5 + 4)) ) /*0x5569a4*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x5569b6*/
    *(this + 7) = 0; /*0x5569b8*/
  }
  v6 = *(this + 8); /*0x5569bb*/
  if ( v6 ) /*0x5569c0*/
  {
    if ( !v2((volatile LONG *)(v6 + 4)) ) /*0x5569c6*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x5569d8*/
    *(this + 8) = 0; /*0x5569da*/
  }
  *(this + 5) = 0; /*0x5569dd*/
  *(this + 6) = 0; /*0x5569e0*/
  return this; /*0x5569e5*/
}
