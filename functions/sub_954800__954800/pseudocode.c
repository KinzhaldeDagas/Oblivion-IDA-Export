int *__stdcall sub_954800(int *a1)
{
  int *result; // eax

  for ( result = a1; result; result = (int *)*result )
  {
    if ( *((_BYTE *)result + 0x39) )
      break;
    *((_BYTE *)result + 0x39) = 1;
  }
  return result;
}
