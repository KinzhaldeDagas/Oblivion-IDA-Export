char __thiscall sub_43A260(_DWORD *this, LONG Comperand, int a3)
{
  int v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  _DWORD *v8; // [esp+14h] [ebp-4h]
  unsigned int Comperanda; // [esp+1Ch] [ebp+4h]

  v8 = (_DWORD *)(*(_DWORD *)(*this + 0xC) + 4 * Comperand); /*0x43a27f*/
  do /*0x43a2bc*/
  {
LABEL_2:
    *(this + 4) = v8; /*0x43a283*/
    *(this + 5) = *v8; /*0x43a28e*/
    *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE; /*0x43a29a*/
  }
  while ( *(_DWORD *)*(this + 4) != (*(this + 5) & 0xFFFFFFFE) ); /*0x43a2bc*/
  while ( 1 ) /*0x43a2c0*/
  {
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 ) /*0x43a2c9*/
      return 0; /*0x43a3ce*/
    *(this + 6) = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8); /*0x43a2d8*/
    *(_DWORD *)*(this + 1) = *(this + 6) & 0xFFFFFFFE; /*0x43a2e4*/
    if ( *(this + 6) != *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) ) /*0x43a2f4*/
      goto LABEL_2; /*0x43a2f4*/
    v4 = *(_DWORD *)(*(this + 5) & 0xFFFFFFFE); /*0x43a2fc*/
    Comperanda = *(this + 5) & 0xFFFFFFFE; /*0x43a314*/
    if ( *(_DWORD *)*(this + 4) != Comperanda ) /*0x43a31e*/
      goto LABEL_2; /*0x43a31e*/
    if ( (*(this + 6) & 1) == 0 ) /*0x43a329*/
      break; /*0x43a329*/
    if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), *(this + 6) & 0xFFFFFFFE, Comperanda) != Comperanda ) /*0x43a37e*/
      goto LABEL_2; /*0x43a37e*/
    v5 = *(this + 5) & 0xFFFFFFFE; /*0x43a387*/
    *(_DWORD *)(v5 + 4) = 0; /*0x43a38a*/
    *(_DWORD *)(v5 + 4) = *(this + 7); /*0x43a394*/
    ++*(this + 8); /*0x43a397*/
    v6 = *this; /*0x43a39b*/
    *(this + 7) = v5; /*0x43a39d*/
    if ( *(this + 8) == *(_DWORD *)(v6 + 0x10) ) /*0x43a3a6*/
      sub_435FE0(this); /*0x43a3aa*/
LABEL_12:
    *(this + 5) = *(this + 6); /*0x43a3af*/
    *(_DWORD *)*(this + 2) = *(this + 6) & 0xFFFFFFFE; /*0x43a3be*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*this + 0x28))(*this, v4, a3) ) /*0x43a334*/
  {
    *(this + 4) = (*(this + 5) & 0xFFFFFFFE) + 8; /*0x43a347*/
    *(_DWORD *)*(this + 3) = *(this + 5) & 0xFFFFFFFE; /*0x43a353*/
    goto LABEL_12; /*0x43a355*/
  }
  return (*(char (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*this + 0x2C))(*this, v4, a3); /*0x43a3c5*/
}
