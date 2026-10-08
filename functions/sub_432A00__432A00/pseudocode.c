int __thiscall sub_432A00(int *this, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // edx

  v2 = *(_DWORD *)(a2 + 8); /*0x432a07*/
  if ( v2 ) /*0x432a0e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 8)) ) /*0x432a14*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x432a2a*/
    *(_DWORD *)(a2 + 8) = 0; /*0x432a2c*/
  }
  *(_DWORD *)(a2 + 8) = *(this + 7); /*0x432a36*/
  result = ++*(this + 8); /*0x432a3d*/
  v5 = *this; /*0x432a40*/
  *(this + 7) = a2; /*0x432a42*/
  if ( result == *(_DWORD *)(v5 + 0x10) ) /*0x432a48*/
    return sub_4328B0(this); /*0x432a4c*/
  return result; /*0x432a51*/
}
