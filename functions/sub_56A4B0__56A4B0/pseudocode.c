bool __thiscall sub_56A4B0(_DWORD *this, int a2)
{
  int v2; // edi

  v2 = a2;
  if ( a2 )
  {
    while ( *(_DWORD *)(v2 + 4) || *(_DWORD *)v2 )
    {
      if ( !this || !*(this + 1) && !*this || sub_56ABB0((_DWORD *)*this, *(_DWORD **)v2) )
        return 1;
      v2 = *(_DWORD *)(v2 + 4);
      this = (_DWORD *)*(this + 1);
      if ( !v2 )
        return this && (*(this + 1) || *this);
    }
  }
  return this && (*(this + 1) || *this);
}
