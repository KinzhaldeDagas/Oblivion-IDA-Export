char __thiscall sub_43C5D0(_DWORD *this, LONG Comperand, int a3, int *a4)
{
  char v5; // bl

  v5 = sub_43C070(this, Comperand, a3); /*0x43c5e5*/
  if ( v5 ) /*0x43c5e9*/
  {
    sub_4348B0(a4, (int *)((*(this + 5) & 0xFFFFFFFE) + 4)); /*0x43c5f9*/
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) != 0 ) /*0x43c609*/
      v5 = 0; /*0x43c60b*/
  }
  *(_DWORD *)*(this + 1) = 0; /*0x43c610*/
  *(_DWORD *)*(this + 2) = 0; /*0x43c619*/
  *(_DWORD *)*(this + 3) = 0; /*0x43c622*/
  return v5; /*0x43c628*/
}
