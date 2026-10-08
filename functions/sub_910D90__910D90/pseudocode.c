_DWORD *__stdcall sub_910D90(char a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2; /*0x910d96*/
  if ( a1 ) /*0x910d9a*/
  {
    a2[1] = 1; /*0x910d9c*/
    *a2 = 8; /*0x910da3*/
  }
  else
  {
    a2[1] = 0; /*0x910dac*/
    *a2 = 0; /*0x910db3*/
  }
  return result; /*0x910da9*/
}
