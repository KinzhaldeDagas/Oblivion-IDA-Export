_DWORD *__stdcall sub_913BE0(char a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2; /*0x913be6*/
  if ( a1 ) /*0x913bea*/
  {
    a2[1] = 3; /*0x913bec*/
    *a2 = 0x18; /*0x913bf3*/
  }
  else
  {
    a2[1] = 0; /*0x913bfc*/
    *a2 = 0; /*0x913c03*/
  }
  return result; /*0x913bf9*/
}
