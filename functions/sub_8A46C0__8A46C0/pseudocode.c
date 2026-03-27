void __thiscall sub_8A46C0(int *this, volatile LONG *a2)
{
  int v3; // eax
  int v4; // eax

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(volatile LONG *))(*a2 + 4))(a2);
    if ( v3 )
    {
      while ( (BSStringT *)v3 != &stru_BA7D50 )
      {
        v3 = *(_DWORD *)(v3 + 4);
        if ( !v3 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      v4 = (*(int (__thiscall **)(volatile LONG *))(*a2 + 4))(a2);
      if ( !v4 )
        return;
      while ( (char *)v4 != dword_BA7D04 )
      {
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          return;
      }
    }
    InterlockedIncrement(a2 + 1);
    sub_8A4070(this + 4, (int)a2);
  }
}
