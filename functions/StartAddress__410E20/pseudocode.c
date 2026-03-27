DWORD __userpurge StartAddress@<eax>(char a1@<bpl>, const char *lpThreadParameter)
{
  DWORD result; // eax

  sub_410D10(a1, lpThreadParameter);
  result = 0;
  if ( !byte_B33425 )
    hHandle = 0;
  return result;
}
