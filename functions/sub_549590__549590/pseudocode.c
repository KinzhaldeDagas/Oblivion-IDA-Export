int __thiscall sub_549590(_BYTE *this, char a2, float a3)
{
  double v4; // st7
  int result; // eax
  double v6; // st7
  float v7; // [esp+28h] [ebp+8h]
  float v8; // [esp+28h] [ebp+8h]

  if ( a2 )
  {
    if ( !*(this + 0x1DA) )
    {
      if ( LOBYTE(a3) )
        v4 = 0.0;
      else
        v4 = 1.0;
      v7 = v4;
      result = (*(int (__stdcall **)(_DWORD, int, int, int, int, int))(*(_DWORD *)this + 0x78))(
                 LODWORD(v7),
                 1,
                 1,
                 1,
                 1,
                 1);
      *(this + 0x1DA) = a2;
      *(this + 0x1D7) = 1;
    }
  }
  else if ( *(this + 0x1DA) )
  {
    *(this + 0x1DA) = 0;
    if ( LOBYTE(a3) )
      v6 = 0.0;
    else
      v6 = 1.0;
    v8 = v6;
    result = (*(int (__stdcall **)(_DWORD, int, int, int, int, _DWORD))(*(_DWORD *)this + 0x78))(
               LODWORD(v8),
               1,
               1,
               1,
               1,
               0);
    *(this + 0x1D5) = 1;
    *(this + 0x1D7) = 1;
  }
  return result;
}
