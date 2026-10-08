char __thiscall sub_55EF30(int *this, LONG Comperand, _DWORD *a3)
{
  LONG (__stdcall *v3)(volatile LONG *, LONG, LONG); // ebp
  unsigned int v5; // eax
  int v6; // edx
  int *v8; // [esp+18h] [ebp-4h]
  LONG Comperanda; // [esp+20h] [ebp+4h]

  v3 = InterlockedCompareExchange; /*0x55ef39*/
  v8 = (int *)(*(_DWORD *)(*this + 0xC) + 4 * Comperand); /*0x55ef4b*/
  do /*0x55ef8d*/
  {
LABEL_2:
    *(this + 4) = (int)v8; /*0x55ef54*/
    *(this + 5) = *v8; /*0x55ef5f*/
    *(_DWORD *)*(this + 2) = *(this + 5) & 0xFFFFFFFE; /*0x55ef6b*/
  }
  while ( *(_DWORD *)*(this + 4) != (*(this + 5) & 0xFFFFFFFE) ); /*0x55ef8d*/
  while ( 1 ) /*0x55ef90*/
  {
    if ( (*(this + 5) & 0xFFFFFFFE) == 0 ) /*0x55ef99*/
      return 0; /*0x55f097*/
    *(this + 6) = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8); /*0x55efa8*/
    *(_DWORD *)*(this + 1) = *(this + 6) & 0xFFFFFFFE; /*0x55efb4*/
    if ( *(this + 6) != *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) ) /*0x55efc4*/
      goto LABEL_2; /*0x55efc4*/
    Comperanda = *(this + 5) & 0xFFFFFFFE; /*0x55efe5*/
    if ( *(_DWORD *)*(this + 4) != Comperanda ) /*0x55efef*/
      goto LABEL_2; /*0x55efef*/
    if ( (*(this + 6) & 1) == 0 ) /*0x55effa*/
      break; /*0x55effa*/
    if ( v3((volatile LONG *)*(this + 4), *(this + 6) & 0xFFFFFFFE, Comperanda) != Comperanda ) /*0x55f048*/
      goto LABEL_2; /*0x55f048*/
    v5 = *(this + 5) & 0xFFFFFFFE; /*0x55f051*/
    *(_DWORD *)(v5 + 4) = 0; /*0x55f054*/
    *(_DWORD *)(v5 + 4) = *(this + 7); /*0x55f05e*/
    ++*(this + 8); /*0x55f061*/
    v6 = *this; /*0x55f064*/
    *(this + 7) = v5; /*0x55f066*/
    if ( *(this + 8) == *(_DWORD *)(v6 + 0x10) ) /*0x55f06f*/
      sub_435FE0(this); /*0x55f073*/
LABEL_12:
    *(this + 5) = *(this + 6); /*0x55f078*/
    *(_DWORD *)*(this + 2) = *(this + 6) & 0xFFFFFFFE; /*0x55f087*/
  }
  if ( *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4) != *a3 ) /*0x55f002*/
  {
    *(this + 4) = (*(this + 5) & 0xFFFFFFFE) + 8; /*0x55f011*/
    *(_DWORD *)*(this + 3) = *(this + 5) & 0xFFFFFFFE; /*0x55f01d*/
    goto LABEL_12; /*0x55f01f*/
  }
  return 1; /*0x55f08e*/
}
