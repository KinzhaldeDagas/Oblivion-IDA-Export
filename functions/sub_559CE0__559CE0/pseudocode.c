void __thiscall sub_559CE0(unsigned int *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  unsigned int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi

  v2 = *(this + 4); /*0x559d0b*/
  v3 = InterlockedDecrement; /*0x559d0e*/
  if ( v2 ) /*0x559d20*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x559d26*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x559d38*/
    *(this + 4) = 0; /*0x559d3a*/
  }
  v4 = *(this + 3); /*0x559d3d*/
  if ( v4 ) /*0x559d42*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x559d48*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x559d5a*/
    *(this + 3) = 0; /*0x559d5c*/
  }
  v5 = *(this + 7); /*0x559d5f*/
  if ( v5 ) /*0x559d64*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x559d6a*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x559d7c*/
    *(this + 7) = 0; /*0x559d7e*/
  }
  v6 = *(this + 8); /*0x559d81*/
  if ( v6 ) /*0x559d86*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x559d8c*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x559d9e*/
    *(this + 8) = 0; /*0x559da0*/
  }
  if ( *(this + 5) ) /*0x559da3*/
    FormHeapFree(*(this + 5)); /*0x559dab*/
  v7 = *(this + 2); /*0x559db3*/
  if ( v7 ) /*0x559db8*/
  {
    sub_5599B0((_DWORD *)*(this + 2)); /*0x559dbc*/
    FormHeapFree(v7); /*0x559dc2*/
  }
  v8 = *(this + 8); /*0x559dca*/
  if ( v8 ) /*0x559dd4*/
  {
    if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x559dda*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x559dec*/
  }
  v9 = *(this + 7); /*0x559dee*/
  if ( v9 ) /*0x559df8*/
  {
    if ( !v3((volatile LONG *)(v9 + 4)) ) /*0x559dfe*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x559e10*/
  }
  v10 = *(this + 4); /*0x559e12*/
  if ( v10 ) /*0x559e1c*/
  {
    if ( !v3((volatile LONG *)(v10 + 4)) ) /*0x559e22*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x559e34*/
  }
  v11 = *(this + 3); /*0x559e36*/
  if ( v11 ) /*0x559e3f*/
  {
    if ( !v3((volatile LONG *)(v11 + 4)) ) /*0x559e45*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x559e57*/
  }
  FormHeapFree(*this); /*0x559e5c*/
  *this = 0; /*0x559e64*/
  *((_WORD *)this + 3) = 0; /*0x559e66*/
  *((_WORD *)this + 2) = 0; /*0x559e6a*/
}
