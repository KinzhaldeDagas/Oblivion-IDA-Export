_DWORD *__cdecl sub_77BE60(int a1)
{
  _DWORD *result; // eax
  bool v2; // zf
  _DWORD *v3; // edx

  result = (_DWORD *)dword_B28E04; /*0x77be60*/
  if ( !dword_B28E04 ) /*0x77be60*/
    goto LABEL_6; /*0x77be60*/
  while ( 1 ) /*0x77be70*/
  {
    v2 = a1 == result[2]; /*0x77be70*/
    v3 = result; /*0x77be76*/
    result = (_DWORD *)*result; /*0x77be78*/
    if ( v2 ) /*0x77be7a*/
      break; /*0x77be7a*/
    if ( !result ) /*0x77be7e*/
      goto LABEL_6; /*0x77be7e*/
  }
  if ( !v3 ) /*0x77be84*/
  {
LABEL_6:
    result = (_DWORD *)((int (__thiscall *)(void ***))off_B28E00[1])(&off_B28E00); /*0x77be86*/
    result[2] = a1; /*0x77be95*/
    *result = 0; /*0x77be98*/
    result[1] = dword_B28E08; /*0x77bea4*/
    if ( dword_B28E08 ) /*0x77bea7*/
    {
      *(_DWORD *)dword_B28E08 = result; /*0x77beb1*/
      ++dword_B28E0C; /*0x77beb3*/
    }
    else
    {
      ++dword_B28E0C; /*0x77bec1*/
      dword_B28E04 = (int)result; /*0x77bec8*/
    }
    dword_B28E08 = (int)result; /*0x77beba*/
  }
  return result; /*0x77bebf*/
}
