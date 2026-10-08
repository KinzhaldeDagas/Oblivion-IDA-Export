_DWORD *__stdcall sub_910780(char a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2; /*0x910786*/
  if ( a1 ) /*0x91078a*/
  {
    a2[1] = 6; /*0x91078c*/
    *a2 = 0x30; /*0x910793*/
  }
  else
  {
    a2[1] = 0; /*0x91079c*/
    *a2 = 0; /*0x9107a3*/
  }
  return result; /*0x910799*/
}
