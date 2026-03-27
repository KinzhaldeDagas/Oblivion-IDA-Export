int sub_5ACB40()
{
  int result; // eax
  int (__thiscall ***v1)(_DWORD, int); // ecx

  if ( (unsigned __int16)word_B1397A > 0x1Au )
  {
    result = dword_B13974;
    v1 = *(int (__thiscall ****)(_DWORD, int))(dword_B13974 + 0x68);
    if ( v1 )
      return (**v1)(v1, 1);
  }
  return result;
}
