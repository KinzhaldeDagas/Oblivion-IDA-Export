char __thiscall sub_432220(_DWORD *this, int *a2, int a3, int a4)
{
  int v4; // ebx

  v4 = a2[3]; /*0x432227*/
  if ( v4 ) /*0x432232*/
  {
    if ( v4 < 3 && InterlockedCompareExchange(a2 + 3, 2, a2[3]) == v4 ) /*0x43225c*/
    {
      sub_431D10(this, (int)a2); /*0x432261*/
      a2[4] = a3; /*0x432273*/
      a2[5] = a4; /*0x432276*/
      if ( InterlockedCompareExchange(a2 + 3, 0, 2) == 2 ) /*0x432282*/
        (*(void (__thiscall **)(_DWORD *, int *))(*this + 0x3C))(this, a2); /*0x43228d*/
      return 1; /*0x432292*/
    }
    else
    {
      return 0; /*0x43229b*/
    }
  }
  else
  {
    a2[4] = a3; /*0x43223d*/
    a2[5] = a4; /*0x432240*/
    return 1; /*0x432245*/
  }
}
