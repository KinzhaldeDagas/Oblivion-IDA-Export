int __thiscall sub_6E3AA0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi

  v6 = *(this + 7); /*0x6e3aa4*/
  if ( v6 ) /*0x6e3aa9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x6e3aaf*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6e3ac5*/
    *(this + 7) = 0; /*0x6e3ac7*/
  }
  *(this + 3) = a2; /*0x6e3ada*/
  *(this + 4) = a3; /*0x6e3ae1*/
  *(this + 5) = a4; /*0x6e3ae4*/
  *(this + 6) = a5; /*0x6e3ae7*/
  return a4; /*0x6e3aea*/
}
