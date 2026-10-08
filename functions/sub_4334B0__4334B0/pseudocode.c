int __thiscall sub_4334B0(void *this, LONG a2, _DWORD *Comperand)
{
  int result; // eax
  LONG v6; // edi
  unsigned int Comperanda; // [esp+20h] [ebp+8h]

  do /*0x433516*/
  {
    if ( !sub_432C30((int *)this, a2, Comperand) ) /*0x4334d2*/
    {
      LOBYTE(result) = 0; /*0x433551*/
      goto LABEL_8; /*0x433553*/
    }
    Comperanda = *((_DWORD *)this + 6) & 0xFFFFFFFE; /*0x4334eb*/
  }
  while ( InterlockedCompareExchange( /*0x433516*/
            (volatile LONG *)((*((_DWORD *)this + 5) & 0xFFFFFFFE) + 0xC),
            Comperanda | 1,
            Comperanda) != Comperanda );
  v6 = *((_DWORD *)this + 5) & 0xFFFFFFFE; /*0x43352d*/
  if ( InterlockedCompareExchange(*((volatile LONG **)this + 4), Comperanda, v6) == v6 ) /*0x43353f*/
    result = sub_432A00((int *)this, *((_DWORD *)this + 5) & 0xFFFFFFFE); /*0x43354a*/
  else
    sub_432C30((int *)this, a2, Comperand); /*0x43355d*/
  LOBYTE(result) = 1; /*0x433562*/
LABEL_8:
  **((_DWORD **)this + 1) = 0; /*0x433564*/
  **((_DWORD **)this + 2) = 0; /*0x433571*/
  **((_DWORD **)this + 3) = 0; /*0x43357c*/
  return result; /*0x433570*/
}
