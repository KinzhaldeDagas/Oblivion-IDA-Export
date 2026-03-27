char __thiscall sub_433180(_DWORD *this, LONG Comperand, int a3, int a4, int *a5)
{
  char v6; // bl

  v6 = sub_432A60(this, Comperand, a3, a4);
  if ( v6 )
  {
    sub_4348B0(a5, (int *)((*(this + 5) & 0xFFFFFFFE) + 8));
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 0xC) & 1) != 0 )
      v6 = 0;
  }
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return v6;
}
