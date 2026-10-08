void __thiscall sub_401160(char *this)
{
  char *v1; // edi
  int v2; // esi
  int v3; // esi

  v1 = this + 8; /*0x4010e4*/
  v2 = *((_DWORD *)this + 5); /*0x4010ea*/
  if ( v2 ) /*0x4010fd*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x401103*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x401115*/
    *((_DWORD *)v1 + 3) = 0; /*0x401117*/
  }
  v3 = *((_DWORD *)v1 + 3); /*0x40111e*/
  if ( v3 ) /*0x40112b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x401131*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x401143*/
  }
}
