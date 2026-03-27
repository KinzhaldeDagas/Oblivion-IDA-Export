int sub_701A80()
{
  int result; // eax

  if ( dword_B3F940 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_B3F940 + 0x5C))(dword_B3F940);
    if ( dword_B3F940 )
      result = (**(int (__thiscall ***)(int, int))dword_B3F940)(dword_B3F940, 1);
    dword_B3F940 = 0;
  }
  return result;
}
