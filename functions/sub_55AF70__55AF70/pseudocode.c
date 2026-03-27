void __thiscall sub_55AF70(_DWORD **this, _DWORD *a2, int a3, float a4)
{
  if ( *(this + 2) )
  {
    if ( *a2 )
    {
      if ( a3 )
      {
        if ( a4 >= 0.0 )
          (*(void (__thiscall **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(**(this + 2) + 4))(
            *(this + 2),
            a2,
            a3,
            0,
            LODWORD(a4));
      }
    }
  }
}
