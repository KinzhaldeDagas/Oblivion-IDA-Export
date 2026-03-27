int __thiscall sub_43C630(void *this, LONG a2, _DWORD *Comperand)
{
  int result; // eax
  LONG v6; // edi
  unsigned int Comperanda; // [esp+20h] [ebp+8h]

  do
  {
    if ( !sub_43C220((int *)this, a2, Comperand) )
    {
      LOBYTE(result) = 0;
      goto LABEL_8;
    }
    Comperanda = *((_DWORD *)this + 6) & 0xFFFFFFFE;
  }
  while ( InterlockedCompareExchange(
            (volatile LONG *)((*((_DWORD *)this + 5) & 0xFFFFFFFE) + 8),
            Comperanda | 1,
            Comperanda) != Comperanda );
  v6 = *((_DWORD *)this + 5) & 0xFFFFFFFE;
  if ( InterlockedCompareExchange(*((volatile LONG **)this + 4), Comperanda, v6) == v6 )
    result = sub_43AB20((int *)this, *((_DWORD *)this + 5) & 0xFFFFFFFE);
  else
    sub_43C220((int *)this, a2, Comperand);
  LOBYTE(result) = 1;
LABEL_8:
  **((_DWORD **)this + 1) = 0;
  **((_DWORD **)this + 2) = 0;
  **((_DWORD **)this + 3) = 0;
  return result;
}
