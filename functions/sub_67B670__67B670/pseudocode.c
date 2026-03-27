void __thiscall sub_67B670(int **this, int a2)
{
  int *v2; // ecx
  int *i; // eax
  _DWORD *v4; // esi

  v2 = *this;
  for ( i = v2; i; i = (int *)i[1] )
  {
    v4 = (_DWORD *)*i;
    if ( !*i )
      break;
    if ( *v4 == a2 )
    {
      BSSimpleList_Remove(v2, *i);
      FormHeapFree((unsigned int)v4);
      return;
    }
  }
}
