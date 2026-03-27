int *__stdcall sub_614D60(int a1, int **a2)
{
  int **v2; // esi
  int *i; // edi
  void **v4; // eax

  v2 = a2;
  for ( i = 0; v2; v2 = (int **)v2[1] )
  {
    if ( !v2[1] && !*v2 )
      break;
    if ( i )
      break;
    v4 = (void **)*v2;
    if ( *v2 )
    {
      if ( *v4 )
      {
        if ( MagicItem_GetFormID(*v4) == a1 )
          i = *v2;
      }
    }
  }
  return i;
}
