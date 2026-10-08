void __thiscall sub_436CB0(unsigned int *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
  int v5; // esi

  FormHeapFree(*this); /*0x436ce5*/
  v2 = *(this + 1); /*0x436cea*/
  if ( v2 ) /*0x436cf8*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x436cfe*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x436d10*/
    *(this + 1) = 0; /*0x436d12*/
  }
  v3 = *(this + 2); /*0x436d19*/
  if ( v3 ) /*0x436d1e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x436d24*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x436d36*/
    *(this + 2) = 0; /*0x436d38*/
  }
  v4 = *(this + 2); /*0x436d3f*/
  if ( v4 ) /*0x436d49*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x436d4f*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x436d61*/
  }
  v5 = *(this + 1); /*0x436d63*/
  if ( v5 ) /*0x436d70*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x436d76*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x436d88*/
  }
}
