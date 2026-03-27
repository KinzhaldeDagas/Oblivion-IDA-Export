void __cdecl sub_4FA780(int *a1, _DWORD *a2)
{
  int *i; // esi
  double *v3; // eax
  double *v4; // eax

  if ( a2 )
  {
    for ( i = a1; i; i = (int *)i[1] )
    {
      if ( !i[1] && !*i )
        break;
      v3 = (double *)FormHeapAlloc(0x20u);
      v4 = v3 ? sub_517AA0(v3, *i) : 0;
      BSSimpleList_PushBack(a2, (int)v4);
    }
  }
}
