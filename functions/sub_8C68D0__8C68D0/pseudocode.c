int *__thiscall sub_8C68D0(_DWORD *this, unsigned int a2, int *a3)
{
  bool v5; // al
  bool v6; // zf
  _DWORD *v7; // eax

  if ( a2 < *(this + 3) )
  {
    v5 = !*a3 && !a3[1];
    v6 = v5;
    v7 = (_DWORD *)(*(this + 1) + 8 * a2);
    if ( v6 )
    {
      if ( *v7 || v7[1] )
        --*(this + 4);
    }
    else if ( !*v7 && !v7[1] )
    {
      goto LABEL_7;
    }
  }
  else
  {
    *(this + 3) = a2 + 1;
    if ( *a3 || a3[1] )
    {
LABEL_7:
      ++*(this + 4);
      return sub_8C6880((int *)(*(this + 1) + 8 * a2), a3);
    }
  }
  return sub_8C6880((int *)(*(this + 1) + 8 * a2), a3);
}
