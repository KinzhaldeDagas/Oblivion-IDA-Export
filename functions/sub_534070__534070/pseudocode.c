_WORD *__cdecl sub_534070(int a1)
{
  _WORD *result; // eax
  void (__thiscall ***v2)(_DWORD, int); // ecx

  result = (_WORD *)dword_BA7FB4;
  if ( !dword_BA7FB4 )
    goto LABEL_5;
  v2 = (void (__thiscall ***)(_DWORD, int))dword_BA7FB4;
  if ( result[2] )
  {
    --result[3];
    result += 3;
    if ( !*result )
    {
      (**v2)(v2, 1);
LABEL_5:
      dword_BA7FB4 = a1;
      return (_WORD *)a1;
    }
    dword_BA7FB4 = a1;
  }
  else
  {
    dword_BA7FB4 = a1;
  }
  return result;
}
