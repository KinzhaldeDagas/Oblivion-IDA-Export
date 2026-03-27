bool __thiscall sub_568FD0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = a2;
  if ( *(this + 1) || *this )
  {
    while ( *this && v2 && *v2 && *this == *v2 )
    {
      this = (_DWORD *)*(this + 1);
      v2 = (_DWORD *)v2[1];
      if ( !this )
        return v2 != 0;
    }
    return 1;
  }
  else
  {
    return a2[1] || *a2;
  }
}
