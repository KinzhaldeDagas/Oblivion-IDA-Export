volatile LONG *__thiscall sub_4390B0(volatile LONG *this, const char *a2, char *a3, char a4)
{
  int v5; // edi

  *((_DWORD *)this + 2) = 0; /*0x4390d9*/
  v5 = *((_DWORD *)this + 2); /*0x4390e0*/
  if ( v5 ) /*0x4390ed*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x4390f3*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x439109*/
    *((_DWORD *)this + 2) = 0; /*0x43910b*/
  }
  sub_436880(this, a2, a3, a4); /*0x439123*/
  return this; /*0x43912a*/
}
