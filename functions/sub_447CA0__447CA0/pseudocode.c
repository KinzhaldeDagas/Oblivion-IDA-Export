void __usercall sub_447CA0(int a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  int v4; // ebx
  int i; // esi
  void *v6; // ecx
  int v7; // esi
  void *v8; // eax

  v4 = *(_DWORD *)(a1 + 0xCC);
  for ( i = 0; i < v4; ++i )
  {
    v6 = *(void **)(*(_DWORD *)(a1 + 0xC4) + 4 * i);
    if ( v6 )
      sub_4CB8C0(v6, a2, a3, 1, 1);
  }
  v7 = a1 + 0xC;
  if ( a1 != 0xFFFFFFF4 )
  {
    do
    {
      if ( *(_DWORD *)v7 )
      {
        v8 = (void *)sub_4EF1E0(*(_DWORD **)v7);
        if ( v8 )
          sub_4CB8C0(v8, a2, a3, 1, 1);
      }
      v7 = *(_DWORD *)(v7 + 4);
    }
    while ( v7 );
  }
}
