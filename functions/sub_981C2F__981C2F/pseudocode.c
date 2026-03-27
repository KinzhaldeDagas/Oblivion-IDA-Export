signed int __cdecl sub_981C2F(_DWORD *a1)
{
  if ( a1 && dword_BA9D94 )
  {
    *a1 = dword_BA9DA0;
    return 0;
  }
  else
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 0x16;
  }
}
