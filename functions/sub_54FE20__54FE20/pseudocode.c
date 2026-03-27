int sub_54FE20()
{
  int result; // eax
  int (__thiscall ***v1)(_DWORD, int); // ecx

  result = dword_B39B80;
  if ( dword_B39B80 )
  {
    if ( *(_DWORD *)(result + 0xDAC) )
    {
      sub_54F840(*(_DWORD **)(result + 0xDAC));
      result = dword_B39B80;
      v1 = *(int (__thiscall ****)(_DWORD, int))(dword_B39B80 + 0xDAC);
      if ( v1 )
        result = (**v1)(v1, 1);
      *(_DWORD *)(dword_B39B80 + 0xDAC) = 0;
    }
  }
  return result;
}
