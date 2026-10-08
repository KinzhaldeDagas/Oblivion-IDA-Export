char __thiscall sub_43C070(_DWORD *this, LONG Comperand, int a3)
{
  int v4; // edi
  unsigned int v5; // edi
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  _DWORD *v10; // [esp+18h] [ebp-4h]
  unsigned int Comperanda; // [esp+20h] [ebp+4h]

  v10 = (_DWORD *)(*(_DWORD *)(*this + 0xC) + 4 * Comperand); /*0x43c08b*/
  do /*0x43c0c9*/
  {
LABEL_2:
    *(this + 4) = v10; /*0x43c090*/
    *(this + 5) = *v10; /*0x43c09b*/
    *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE; /*0x43c0a7*/
  }
  while ( *(_DWORD *)*(this + 4) != (*(this + 5) & 0xFFFFFFFE) ); /*0x43c0c9*/
  while ( 1 ) /*0x43c0d0*/
  {
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 ) /*0x43c0d9*/
      return 0; /*0x43c206*/
    *(this + 6) = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8); /*0x43c0e8*/
    *(_DWORD *)*(this + 1) = *(this + 6) & 0xFFFFFFFE; /*0x43c0f4*/
    if ( *(this + 6) != *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) ) /*0x43c104*/
      goto LABEL_2; /*0x43c104*/
    v4 = *(_DWORD *)(*(this + 5) & 0xFFFFFFFE); /*0x43c10c*/
    Comperanda = *(this + 5) & 0xFFFFFFFE; /*0x43c124*/
    if ( *(_DWORD *)*(this + 4) != Comperanda ) /*0x43c12e*/
      goto LABEL_2; /*0x43c12e*/
    if ( (*(this + 6) & 1) == 0 ) /*0x43c139*/
      break; /*0x43c139*/
    if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), *(this + 6) & 0xFFFFFFFE, Comperanda) != Comperanda ) /*0x43c192*/
      goto LABEL_2; /*0x43c192*/
    v5 = *(this + 5) & 0xFFFFFFFE; /*0x43c19b*/
    v6 = *(_DWORD *)(v5 + 4); /*0x43c19e*/
    if ( v6 ) /*0x43c1a3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 8)) ) /*0x43c1a9*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x43c1c0*/
      *(_DWORD *)(v5 + 4) = 0; /*0x43c1c2*/
    }
    *(_DWORD *)(v5 + 4) = *(this + 7); /*0x43c1cc*/
    v7 = ++*(this + 8); /*0x43c1d3*/
    v8 = *this; /*0x43c1d6*/
    *(this + 7) = v5; /*0x43c1d8*/
    if ( v7 == *(_DWORD *)(v8 + 0x10) ) /*0x43c1de*/
      sub_43A3F0(this); /*0x43c1e2*/
LABEL_16:
    *(this + 5) = *(this + 6); /*0x43c1e7*/
    *(_DWORD *)*(this + 2) = *(this + 6) & 0xFFFFFFFE; /*0x43c1f6*/
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*this + 0x28))(*this, v4, a3) ) /*0x43c148*/
  {
    *(this + 4) = (*(this + 5) & 0xFFFFFFFE) + 8; /*0x43c15b*/
    *(_DWORD *)*(this + 3) = *(this + 5) & 0xFFFFFFFE; /*0x43c167*/
    goto LABEL_16; /*0x43c169*/
  }
  return (*(char (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*this + 0x2C))(*this, v4, a3); /*0x43c1fd*/
}
