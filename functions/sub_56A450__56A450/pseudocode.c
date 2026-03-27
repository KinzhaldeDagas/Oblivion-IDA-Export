void *__thiscall sub_56A450(int **this)
{
  int **i; // esi
  void *result; // eax

  for ( i = this; i; i = (int **)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    result = sub_56AD60(*i);
  }
  return result;
}
