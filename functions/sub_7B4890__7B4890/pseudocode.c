void __cdecl sub_7B4890(unsigned __int16 a1)
{
  if ( dword_B42EAC == 4 )
  {
    if ( a1 == 4 )
    {
      dword_B42EAC = 4;
    }
    else
    {
      sub_7AB1D0(0);
      dword_B42EAC = a1;
    }
  }
  else
  {
    if ( a1 == 4 )
      sub_7AB1D0(1);
    dword_B42EAC = a1;
  }
}
