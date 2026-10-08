void __thiscall sub_7021B0(_DWORD *this)
{
  int v2; // esi

  v2 = *(this + 0xF); /*0x7021b4*/
  if ( v2 ) /*0x7021b9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x7021bf*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7021d5*/
    *(this + 0xF) = 0; /*0x7021d7*/
  }
}
