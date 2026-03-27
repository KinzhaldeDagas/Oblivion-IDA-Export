_WORD *sub_8905B0()
{
  _WORD *result; // eax
  _WORD *(__thiscall ***v1)(_DWORD, int); // ecx

  result = (_WORD *)dword_BA7A54;
  if ( dword_BA7A54 )
  {
    v1 = (_WORD *(__thiscall ***)(_DWORD, int))dword_BA7A54;
    if ( result[2] )
    {
      --result[3];
      result += 3;
      if ( !*result )
        return (**v1)(v1, 1);
    }
  }
  return result;
}
