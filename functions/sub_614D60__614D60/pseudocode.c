int *__stdcall sub_614D60(int a1, int **a2)
{
  int **v2; // esi
  int *i; // edi
  void **v4; // eax

  v2 = a2; /*0x614d61*/
  for ( i = 0; v2; v2 = (int **)v2[1] ) /*0x614d6a*/
  {
    if ( !v2[1] && !*v2 ) /*0x614d77*/
      break; /*0x614d7a*/
    if ( i ) /*0x614d7e*/
      break; /*0x614d7e*/
    v4 = (void **)*v2; /*0x614d80*/
    if ( *v2 ) /*0x614d80*/
    {
      if ( *v4 ) /*0x614d86*/
      {
        if ( MagicItem_GetFormID(*v4) == a1 ) /*0x614d93*/
          i = *v2; /*0x614d95*/
      }
    }
  }
  return i; /*0x614da1*/
}
