_DWORD *__stdcall sub_910780(char a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  if ( a1 )
  {
    a2[1] = 6;
    *a2 = 0x30;
  }
  else
  {
    a2[1] = 0;
    *a2 = 0;
  }
  return result;
}
