int __thiscall sub_43AB20(int *this, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // edx

  v2 = *(_DWORD *)(a2 + 4); /*0x43ab27*/
  if ( v2 ) /*0x43ab2e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 8)) ) /*0x43ab34*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x43ab4a*/
    *(_DWORD *)(a2 + 4) = 0; /*0x43ab4c*/
  }
  *(_DWORD *)(a2 + 4) = *(this + 7); /*0x43ab56*/
  result = ++*(this + 8); /*0x43ab5d*/
  v5 = *this; /*0x43ab60*/
  *(this + 7) = a2; /*0x43ab62*/
  if ( result == *(_DWORD *)(v5 + 0x10) ) /*0x43ab68*/
    return sub_43A3F0(this); /*0x43ab6c*/
  return result; /*0x43ab71*/
}
