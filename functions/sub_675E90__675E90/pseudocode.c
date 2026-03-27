unsigned int **__thiscall sub_675E90(int **this, int a2)
{
  int **v2; // ebx
  int v3; // ebp
  int *v4; // edi
  unsigned int **result; // eax
  unsigned int *v6; // esi

  v2 = this + 0xA;
  v3 = 6;
  do
  {
    v4 = *v2;
    result = (unsigned int **)*v2;
    if ( *v2 )
    {
      do
      {
        v6 = *result;
        if ( !*result )
          break;
        if ( v6[3] == a2 )
        {
          sub_607120((int *)*result);
          sub_605E80(v6);
          FormHeapFree((unsigned int)v6);
          BSSimpleList_Remove(v4, (int)v6);
          result = (unsigned int **)v4;
        }
        else
        {
          result = (unsigned int **)result[1];
        }
      }
      while ( result );
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
