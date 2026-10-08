LONG __thiscall sub_4362F0(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // esi
  _DWORD *v8; // edi
  bool v9; // zf

  if ( (unk_B33A28 & 1) == 0 ) /*0x436301*/
  {
    unk_B33A28 |= 1u; /*0x436303*/
    unk_B33A24 = 0; /*0x43630e*/
    atexit(sub_A17C30); /*0x436318*/
  }
  result = a2; /*0x436324*/
  if ( a2 < *((unsigned __int16 *)this + 5) ) /*0x43632e*/
  {
    v5 = *(this + 1); /*0x436351*/
    if ( *a3 == unk_B33A24 ) /*0x436354*/
    {
      if ( *(_DWORD *)(v5 + 4 * a2) != unk_B33A24 ) /*0x436364*/
        --*((_WORD *)this + 6); /*0x436366*/
    }
    else if ( *(_DWORD *)(v5 + 4 * a2) == unk_B33A24 ) /*0x436359*/
    {
      ++*((_WORD *)this + 6); /*0x43635b*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1; /*0x436333*/
    if ( *a3 != unk_B33A24 ) /*0x436340*/
      ++*((_WORD *)this + 6); /*0x436342*/
  }
  v6 = *(this + 1); /*0x43636c*/
  v7 = *(_DWORD *)(v6 + 4 * a2); /*0x43636f*/
  v8 = (_DWORD *)(v6 + 4 * a2); /*0x436375*/
  if ( v7 != *a3 ) /*0x436378*/
  {
    if ( v7 ) /*0x43637c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) ) /*0x436382*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x436397*/
    }
    result = *a3; /*0x436399*/
    v9 = *a3 == 0; /*0x43639c*/
    *v8 = *a3; /*0x43639e*/
    if ( !v9 ) /*0x4363a0*/
      return InterlockedIncrement((volatile LONG *)(result + 8)); /*0x4363a6*/
  }
  return result; /*0x4363ac*/
}
