char __thiscall sub_432220(_DWORD *this, int *a2, int a3, int a4)
{
  int v4; // ebx

  v4 = a2[3];
  if ( v4 )
  {
    if ( v4 < 3 && InterlockedCompareExchange(a2 + 3, 2, a2[3]) == v4 )
    {
      sub_431D10(this, (int)a2);
      a2[4] = a3;
      a2[5] = a4;
      if ( InterlockedCompareExchange(a2 + 3, 0, 2) == 2 )
        (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x3C))(this, a2);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    a2[4] = a3;
    a2[5] = a4;
    return 1;
  }
}
