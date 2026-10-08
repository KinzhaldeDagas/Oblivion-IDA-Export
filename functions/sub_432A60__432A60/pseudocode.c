char __thiscall sub_432A60(_DWORD *this, LONG Comperand, int a3, int a4)
{
  int *v5; // eax
  int v6; // edi
  int v7; // ebp
  unsigned int v8; // edi
  int v9; // ebp
  int v10; // eax
  int v11; // ecx
  _DWORD *v13; // [esp+18h] [ebp-4h]

  v13 = (_DWORD *)(*(_DWORD *)(*this + 0xC) + 4 * Comperand); /*0x432a79*/
  do /*0x432ab9*/
  {
LABEL_2:
    *(this + 4) = v13; /*0x432a80*/
    *(this + 5) = *v13; /*0x432a8b*/
    *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE; /*0x432a97*/
  }
  while ( *(_DWORD *)*(this + 4) != (*(this + 5) & 0xFFFFFFFE) ); /*0x432ab9*/
  while ( 1 ) /*0x432ac0*/
  {
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 ) /*0x432ac9*/
      return 0; /*0x432c03*/
    *(this + 6) = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 0xC); /*0x432ad8*/
    *(_DWORD *)*(this + 1) = *(this + 6) & 0xFFFFFFFE; /*0x432ae4*/
    if ( *(this + 6) != *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 0xC) ) /*0x432af4*/
      goto LABEL_2; /*0x432af4*/
    v5 = (int *)(*(this + 5) & 0xFFFFFFFE); /*0x432af9*/
    v6 = *v5; /*0x432afc*/
    v7 = v5[1]; /*0x432afe*/
    if ( *(int **)*(this + 4) != v5 ) /*0x432b21*/
      goto LABEL_2; /*0x432b21*/
    if ( (*(this + 6) & 1) == 0 ) /*0x432b2d*/
      break; /*0x432b2d*/
    if ( (int *)InterlockedCompareExchange((volatile LONG *)*(this + 4), *(this + 6) & 0xFFFFFFFE, (LONG)v5) != v5 ) /*0x432b8f*/
      goto LABEL_2; /*0x432b8f*/
    v8 = *(this + 5) & 0xFFFFFFFE; /*0x432b98*/
    v9 = *(_DWORD *)(v8 + 8); /*0x432b9b*/
    if ( v9 ) /*0x432ba0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 8)) ) /*0x432ba6*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x432bbd*/
      *(_DWORD *)(v8 + 8) = 0; /*0x432bbf*/
    }
    *(_DWORD *)(v8 + 8) = *(this + 7); /*0x432bc9*/
    v10 = ++*(this + 8); /*0x432bd0*/
    v11 = *this; /*0x432bd3*/
    *(this + 7) = v8; /*0x432bd5*/
    if ( v10 == *(_DWORD *)(v11 + 0x10) ) /*0x432bdb*/
      sub_4328B0(this); /*0x432bdf*/
LABEL_16:
    *(this + 5) = *(this + 6); /*0x432be4*/
    *(_DWORD *)*(this + 2) = *(this + 6) & 0xFFFFFFFE; /*0x432bf3*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, int, int, int))(*(_DWORD *)*this + 0x28))(*this, v6, v7, a3, a4) ) /*0x432b3e*/
  {
    *(this + 4) = (*(this + 5) & 0xFFFFFFFE) + 0xC; /*0x432b51*/
    *(_DWORD *)*(this + 3) = *(this + 5) & 0xFFFFFFFE; /*0x432b5d*/
    goto LABEL_16; /*0x432b5f*/
  }
  return (*(char (__thiscall **)(_DWORD, int, int, int, int))(*(_DWORD *)*this + 0x2C))(*this, v6, v7, a3, a4); /*0x432bfa*/
}
