void __cdecl sub_7A0CD0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *i; // edi
  unsigned int *v3; // esi
  unsigned int *j; // ebp

  for ( i = a1; i != a2; i += 4 )
  {
    v3 = (unsigned int *)i[1];
    if ( v3 )
    {
      for ( j = (unsigned int *)i[2]; v3 != j; v3 += 0xC )
      {
        if ( v3[1] )
          FormHeapFree(v3[1]);
        v3[1] = 0;
        v3[2] = 0;
        v3[3] = 0;
      }
      FormHeapFree(i[1]);
    }
    i[1] = 0;
    i[2] = 0;
    i[3] = 0;
  }
}
