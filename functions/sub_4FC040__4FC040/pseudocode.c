void __cdecl sub_4FC040(int *a1, _DWORD *a2)
{
  int *i; // esi
  int v3; // eax
  int v4; // eax

  if ( a2 )
  {
    for ( i = a1; i; i = (int *)i[1] )
    {
      if ( !i[1] && !*i )
        break;
      v3 = FormHeapAlloc(0x10u);
      v4 = v3 ? sub_4FBFD0(v3, *i) : 0;
      BSSimpleList_PushBack(a2, v4);
    }
  }
}
