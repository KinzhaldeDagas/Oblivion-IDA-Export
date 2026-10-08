char __thiscall sub_432C30(int *this, LONG Comperand, _DWORD *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // edi
  int v11; // [esp+14h] [ebp-1Ch]
  int *v12; // [esp+20h] [ebp-10h]
  unsigned int Comperanda; // [esp+34h] [ebp+4h]

  v12 = (int *)(*(_DWORD *)(*this + 0xC) + 4 * Comperand); /*0x432c65*/
  do /*0x432ca4*/
  {
LABEL_2:
    *(this + 4) = (int)v12; /*0x432c6b*/
    *(this + 5) = *v12; /*0x432c76*/
    *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE; /*0x432c82*/
  }
  while ( *(_DWORD *)*(this + 4) != (*(this + 5) & 0xFFFFFFFE) ); /*0x432ca4*/
  while ( 1 ) /*0x432ca6*/
  {
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 ) /*0x432caf*/
      return 0; /*0x432e88*/
    *(this + 6) = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 0xC); /*0x432cbe*/
    *(_DWORD *)*(this + 1) = *(this + 6) & 0xFFFFFFFE; /*0x432cca*/
    if ( *(this + 6) != *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 0xC) ) /*0x432cda*/
      goto LABEL_2; /*0x432cda*/
    v4 = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8); /*0x432ce2*/
    v11 = v4; /*0x432ce7*/
    if ( v4 ) /*0x432ceb*/
      InterlockedIncrement((volatile LONG *)(v4 + 8)); /*0x432cf1*/
    Comperanda = *(this + 5) & 0xFFFFFFFE; /*0x432d08*/
    if ( *(_DWORD *)*(this + 4) != Comperanda ) /*0x432d1b*/
    {
      v9 = (void (__thiscall ***)(_DWORD, int))v11; /*0x432e1c*/
      if ( v11 && !InterlockedDecrement((volatile LONG *)(v11 + 8)) ) /*0x432e34*/
        goto LABEL_23; /*0x432e3c*/
      goto LABEL_2; /*0x432e3c*/
    }
    if ( (*(this + 6) & 1) == 0 ) /*0x432d27*/
      break; /*0x432d27*/
    if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), *(this + 6) & 0xFFFFFFFE, Comperanda) != Comperanda ) /*0x432d85*/
    {
      v9 = (void (__thiscall ***)(_DWORD, int))v11; /*0x432e51*/
      if ( v11 && !InterlockedDecrement((volatile LONG *)(v11 + 8)) ) /*0x432e69*/
      {
LABEL_23:
        (**v9)(v9, 1); /*0x432e42*/
        goto LABEL_2; /*0x432e4c*/
      }
      goto LABEL_2; /*0x432e71*/
    }
    v5 = *(this + 5) & 0xFFFFFFFE; /*0x432d8e*/
    v6 = *(_DWORD *)(v5 + 8); /*0x432d91*/
    if ( v6 ) /*0x432d96*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 8)) ) /*0x432d9c*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x432db3*/
      *(_DWORD *)(v5 + 8) = 0; /*0x432db5*/
    }
    *(_DWORD *)(v5 + 8) = *(this + 7); /*0x432dbb*/
    v7 = ++*(this + 8); /*0x432dc2*/
    v8 = *this; /*0x432dc5*/
    *(this + 7) = v5; /*0x432dc7*/
    if ( v7 == *(_DWORD *)(v8 + 0x10) ) /*0x432dcd*/
      sub_4328B0(this); /*0x432dd1*/
LABEL_18:
    *(this + 5) = *(this + 6); /*0x432dd6*/
    *(_DWORD *)*(this + 2) = *(this + 6) & 0xFFFFFFFE; /*0x432deb*/
    if ( v11 ) /*0x432df5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 8)) ) /*0x432dff*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x432e15*/
    }
  }
  if ( v11 != *a3 ) /*0x432d33*/
  {
    *(this + 4) = (*(this + 5) & 0xFFFFFFFE) + 0xC; /*0x432d42*/
    *(_DWORD *)*(this + 3) = *(this + 5) & 0xFFFFFFFE; /*0x432d4e*/
    goto LABEL_18; /*0x432d50*/
  }
  if ( v11 ) /*0x432e94*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v11 + 8)) ) /*0x432e9a*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x432eac*/
  }
  return 1; /*0x432eb0*/
}
