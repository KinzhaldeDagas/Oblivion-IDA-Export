char __thiscall sub_43C5D0(_DWORD *this, LONG Comperand, int a3, int *a4)
{
  char v5; // bl

  v5 = sub_43C070(this, Comperand, a3);
  if ( v5 )
  {
    sub_4348B0(a4, (int *)((*(this + 5) & 0xFFFFFFFE) + 4));
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) != 0 )
      v5 = 0;
  }
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return v5;
}
