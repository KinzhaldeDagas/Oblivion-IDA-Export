_DWORD *__cdecl sub_77BE60(int a1)
{
  _DWORD *result; // eax
  bool v2; // zf
  _DWORD *v3; // edx

  result = (_DWORD *)dword_B28E04;
  if ( !dword_B28E04 )
    goto LABEL_6;
  while ( 1 )
  {
    v2 = a1 == result[2];
    v3 = result;
    result = (_DWORD *)*result;
    if ( v2 )
      break;
    if ( !result )
      goto LABEL_6;
  }
  if ( !v3 )
  {
LABEL_6:
    result = (_DWORD *)((int (__thiscall *)(void ***))off_B28E00[1])(&off_B28E00);
    result[2] = a1;
    *result = 0;
    result[1] = dword_B28E08;
    if ( dword_B28E08 )
    {
      *(_DWORD *)dword_B28E08 = result;
      ++dword_B28E0C;
    }
    else
    {
      ++dword_B28E0C;
      dword_B28E04 = (int)result;
    }
    dword_B28E08 = (int)result;
  }
  return result;
}
