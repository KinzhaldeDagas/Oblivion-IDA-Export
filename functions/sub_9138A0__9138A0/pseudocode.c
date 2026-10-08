_DWORD *__stdcall sub_9138A0(char a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2; /*0x9138a6*/
  if ( a1 ) /*0x9138aa*/
  {
    a2[1] = 5; /*0x9138ac*/
    *a2 = 0x28; /*0x9138b3*/
  }
  else
  {
    a2[1] = 0; /*0x9138bc*/
    *a2 = 0; /*0x9138c3*/
  }
  return result; /*0x9138b9*/
}
