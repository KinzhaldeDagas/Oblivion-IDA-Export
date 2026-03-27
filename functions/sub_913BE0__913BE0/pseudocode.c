_DWORD *__stdcall sub_913BE0(char a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  if ( a1 )
  {
    a2[1] = 3;
    *a2 = 0x18;
  }
  else
  {
    a2[1] = 0;
    *a2 = 0;
  }
  return result;
}
