int __thiscall sub_43A680(int *this, LONG a2, _DWORD *Comperand)
{
  int result; // eax
  LONG v6; // edi
  unsigned int v7; // eax
  int v8; // edx
  unsigned int Comperanda; // [esp+20h] [ebp+8h]

  do /*0x43a6ea*/
  {
    if ( !sub_55EF30(this, a2, Comperand) ) /*0x43a6a2*/
    {
      LOBYTE(result) = 0; /*0x43a742*/
      goto LABEL_9; /*0x43a744*/
    }
    Comperanda = *(this + 6) & 0xFFFFFFFE; /*0x43a6bf*/
  }
  while ( InterlockedCompareExchange((volatile LONG *)((*(this + 5) & 0xFFFFFFFE) + 8), Comperanda | 1, Comperanda) != Comperanda ); /*0x43a6ea*/
  v6 = *(this + 5) & 0xFFFFFFFE; /*0x43a701*/
  if ( InterlockedCompareExchange((volatile LONG *)*(this + 4), Comperanda, v6) == v6 ) /*0x43a713*/
  {
    v7 = *(this + 5) & 0xFFFFFFFE; /*0x43a718*/
    *(_DWORD *)(v7 + 4) = 0; /*0x43a71b*/
    *(_DWORD *)(v7 + 4) = *(this + 7); /*0x43a725*/
    ++*(this + 8); /*0x43a728*/
    v8 = *this; /*0x43a72c*/
    *(this + 7) = v7; /*0x43a72e*/
    result = *(this + 8); /*0x43a731*/
    if ( result == *(_DWORD *)(v8 + 0x10) ) /*0x43a737*/
      result = sub_435FE0(this); /*0x43a73b*/
  }
  else
  {
    sub_55EF30(this, a2, Comperand); /*0x43a74e*/
  }
  LOBYTE(result) = 1; /*0x43a753*/
LABEL_9:
  *(_DWORD *)*(this + 1) = 0; /*0x43a755*/
  *(_DWORD *)*(this + 2) = 0; /*0x43a762*/
  *(_DWORD *)*(this + 3) = 0; /*0x43a76d*/
  return result; /*0x43a761*/
}
