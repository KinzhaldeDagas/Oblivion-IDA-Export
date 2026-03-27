int __stdcall sub_6D2250(unsigned int *a1)
{
  int result; // eax

  result = sub_6ECB70(a1);
  if ( a1[0x36] < 0xA010068 )
    return sub_712A20(a1);
  return result;
}
