void __thiscall sub_49AC60(_BYTE *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // edi
  int v5; // edi
  double v6; // st7

  v1 = InterlockedDecrement; /*0x49ac62*/
  if ( !*(this + 0x34) ) /*0x49ac6d*/
  {
    *(this + 0x34) = 1; /*0x49ac73*/
    *((_DWORD *)this + 3) = 0; /*0x49ac77*/
    *((_DWORD *)this + 2) = 0; /*0x49ac7a*/
    *this = 1; /*0x49ac7d*/
    *((_DWORD *)this + 5) = 0; /*0x49ac80*/
    v3 = *((_DWORD *)this + 4); /*0x49ac83*/
    if ( v3 ) /*0x49ac88*/
    {
      if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x49ac8e*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x49aca0*/
      *((_DWORD *)this + 4) = 0; /*0x49aca2*/
    }
  }
  v4 = *((_DWORD *)this + 7); /*0x49aca5*/
  if ( v4 ) /*0x49acaa*/
  {
    if ( !v1((volatile LONG *)(v4 + 4)) ) /*0x49acb0*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x49acc2*/
    *((_DWORD *)this + 7) = 0; /*0x49acc4*/
  }
  v5 = *((_DWORD *)this + 8); /*0x49acc7*/
  if ( v5 ) /*0x49accc*/
  {
    if ( !v1((volatile LONG *)(v5 + 4)) ) /*0x49acd2*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x49ace4*/
    *((_DWORD *)this + 8) = 0; /*0x49ace6*/
  }
  v6 = flt_A32048; /*0x49ace9*/
  *((float *)this + 0xA) = flt_A32048; /*0x49acf0*/
  *((float *)this + 0xB) = v6; /*0x49acf3*/
  *((float *)this + 0xC) = 0.0; /*0x49acf8*/
}
