void __thiscall sub_55AC90(_DWORD **this, int a2, int a3, float a4)
{
  if ( *(this + 2) )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        if ( a4 >= 0.0 )
          (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD))(**(this + 2) + 8))(
            *(this + 2),
            a2,
            a3,
            0,
            LODWORD(a4));
      }
    }
  }
}
