int __thiscall sub_43A780(_DWORD *this, LONG Comperand, int a3, _DWORD *a4)
{
  int result; // eax

  LOBYTE(result) = sub_43A260(this, Comperand, a3);
  if ( (_BYTE)result )
  {
    *a4 = *(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 4);
    if ( (*(_DWORD *)((*(this + 5) & 0xFFFFFFFE) + 8) & 1) != 0 )
      LOBYTE(result) = 0;
  }
  *(_DWORD *)*(this + 1) = 0;
  *(_DWORD *)*(this + 2) = 0;
  *(_DWORD *)*(this + 3) = 0;
  return result;
}
