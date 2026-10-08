int __thiscall sub_43A780(_DWORD *this, LONG Comperand, int a3, _DWORD *a4)
{
  int result; // eax

  LOBYTE(result) = sub_43A260(this, Comperand, a3); /*0x43a78f*/
  if ( (_BYTE)result ) /*0x43a796*/
  {
    *a4 = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4); /*0x43a7a5*/
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) != 0 ) /*0x43a7b3*/
      LOBYTE(result) = 0; /*0x43a7b5*/
  }
  *(_DWORD *)*(this + 1) = 0; /*0x43a7ba*/
  *(_DWORD *)*(this + 2) = 0; /*0x43a7c3*/
  *(_DWORD *)*(this + 3) = 0; /*0x43a7cc*/
  return result; /*0x43a7d2*/
}
