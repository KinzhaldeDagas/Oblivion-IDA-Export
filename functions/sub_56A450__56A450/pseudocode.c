void *__thiscall sub_56A450(int **this)
{
  int **i; // esi
  void *result; // eax

  for ( i = this; i; i = (int **)i[1] ) /*0x56a455*/
  {
    if ( !i[1] && !*i ) /*0x56a45d*/
      break; /*0x56a460*/
    result = sub_56AD60(*i); /*0x56a464*/
  }
  return result; /*0x56a470*/
}
