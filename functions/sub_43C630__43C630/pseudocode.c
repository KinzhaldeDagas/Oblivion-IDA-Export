int __thiscall sub_43C630(void *this, LONG a2, _DWORD *Comperand)
{
  int result; // eax
  LONG v6; // edi
  unsigned int Comperanda; // [esp+20h] [ebp+8h]

  do /*0x43c696*/
  {
    if ( !sub_43C220((int *)this, a2, Comperand) ) /*0x43c652*/
    {
      LOBYTE(result) = 0; /*0x43c6d1*/
      goto LABEL_8; /*0x43c6d3*/
    }
    Comperanda = *((_DWORD *)this + 6) & 0xFFFFFFFE; /*0x43c66b*/
  }
  while ( InterlockedCompareExchange( /*0x43c696*/
            (volatile LONG *)((*((_DWORD *)this + 5) & 0xFFFFFFFE) + 8),
            Comperanda | 1,
            Comperanda) != Comperanda );
  v6 = *((_DWORD *)this + 5) & 0xFFFFFFFE; /*0x43c6ad*/
  if ( InterlockedCompareExchange(*((volatile LONG **)this + 4), Comperanda, v6) == v6 ) /*0x43c6bf*/
    result = sub_43AB20((int *)this, *((_DWORD *)this + 5) & 0xFFFFFFFE); /*0x43c6ca*/
  else
    sub_43C220((int *)this, a2, Comperand); /*0x43c6dd*/
  LOBYTE(result) = 1; /*0x43c6e2*/
LABEL_8:
  **((_DWORD **)this + 1) = 0; /*0x43c6e4*/
  **((_DWORD **)this + 2) = 0; /*0x43c6f1*/
  **((_DWORD **)this + 3) = 0; /*0x43c6fc*/
  return result; /*0x43c6f0*/
}
