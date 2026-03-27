int *__thiscall sub_674F70(int **this, int a2)
{
  int **v2; // edi
  int v3; // ebx
  int *v4; // ecx
  int *result; // eax
  unsigned int *v6; // esi

  v2 = this + 0xA;
  v3 = 6;
  do
  {
    v4 = *v2;
    for ( result = *v2; result; result = (int *)result[1] )
    {
      if ( !result[1] && !*result )
        break;
      v6 = (unsigned int *)*result;
      if ( *result )
      {
        if ( v6[2] == a2 )
        {
          BSSimpleList_Remove(v4, *result);
          sub_605E80(v6);
          FormHeapFree((unsigned int)v6);
          v4 = *v2;
          result = *v2;
        }
      }
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  return result;
}
