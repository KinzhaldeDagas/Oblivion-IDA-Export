char __thiscall sub_43C220(int *this, LONG Comperand, _DWORD *a3)
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

  v12 = (int *)(*(_DWORD *)(*this + 0xC) + 4 * Comperand); /*0x43c255*/
  do /*0x43c294*/
  {
LABEL_2:
    *(this + 4) = (int)v12; /*0x43c25b*/
    *(this + 5) = *v12; /*0x43c266*/
    *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE; /*0x43c272*/
  }
  while ( *(_DWORD *)*(this + 4) != (*(this + 5) & 0xFFFFFFFE) ); /*0x43c294*/
  while ( 1 ) /*0x43c296*/
  {
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 ) /*0x43c29f*/
      return 0; /*0x43c478*/
    *(this + 6) = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8); /*0x43c2ae*/
    *(_DWORD *)*(this + 1) = *(this + 6) & 0xFFFFFFFE; /*0x43c2ba*/
    if ( *(this + 6) != *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) ) /*0x43c2ca*/
      goto LABEL_2; /*0x43c2ca*/
    v4 = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4); /*0x43c2d2*/
    v11 = v4; /*0x43c2d7*/
    if ( v4 ) /*0x43c2db*/
      InterlockedIncrement((volatile LONG *)(v4 + 8)); /*0x43c2e1*/
    Comperanda = *(this + 5) & 0xFFFFFFFE; /*0x43c2f8*/
    if ( *(_DWORD *)*(this + 4) != Comperanda ) /*0x43c30b*/
    {
      v9 = (void (__thiscall ***)(_DWORD, int))v11; /*0x43c40c*/
      if ( v11 && !InterlockedDecrement((volatile LONG *)(v11 + 8)) ) /*0x43c424*/
        goto LABEL_23; /*0x43c42c*/
      goto LABEL_2; /*0x43c42c*/
    }
    if ( (*(this + 6) & 1) == 0 ) /*0x43c317*/
      break; /*0x43c317*/
    if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), *(this + 6) & 0xFFFFFFFE, Comperanda) != Comperanda ) /*0x43c375*/
    {
      v9 = (void (__thiscall ***)(_DWORD, int))v11; /*0x43c441*/
      if ( v11 && !InterlockedDecrement((volatile LONG *)(v11 + 8)) ) /*0x43c459*/
      {
LABEL_23:
        (**v9)(v9, 1); /*0x43c432*/
        goto LABEL_2; /*0x43c43c*/
      }
      goto LABEL_2; /*0x43c461*/
    }
    v5 = *(this + 5) & 0xFFFFFFFE; /*0x43c37e*/
    v6 = *(_DWORD *)(v5 + 4); /*0x43c381*/
    if ( v6 ) /*0x43c386*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 8)) ) /*0x43c38c*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x43c3a3*/
      *(_DWORD *)(v5 + 4) = 0; /*0x43c3a5*/
    }
    *(_DWORD *)(v5 + 4) = *(this + 7); /*0x43c3ab*/
    v7 = ++*(this + 8); /*0x43c3b2*/
    v8 = *this; /*0x43c3b5*/
    *(this + 7) = v5; /*0x43c3b7*/
    if ( v7 == *(_DWORD *)(v8 + 0x10) ) /*0x43c3bd*/
      sub_43A3F0(this); /*0x43c3c1*/
LABEL_18:
    *(this + 5) = *(this + 6); /*0x43c3c6*/
    *(_DWORD *)*(this + 2) = *(this + 6) & 0xFFFFFFFE; /*0x43c3db*/
    if ( v11 ) /*0x43c3e5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 8)) ) /*0x43c3ef*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x43c405*/
    }
  }
  if ( v11 != *a3 ) /*0x43c323*/
  {
    *(this + 4) = (*(this + 5) & 0xFFFFFFFE) + 8; /*0x43c332*/
    *(_DWORD *)*(this + 3) = *(this + 5) & 0xFFFFFFFE; /*0x43c33e*/
    goto LABEL_18; /*0x43c340*/
  }
  if ( v11 ) /*0x43c484*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v11 + 8)) ) /*0x43c48a*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x43c49c*/
  }
  return 1; /*0x43c4a0*/
}
