void __userpurge sub_52B080(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  int *v5; // esi
  int v6; // ecx
  bool v7; // zf

  if ( !*(_BYTE *)(a1 + 1) || a5 && (*(_BYTE *)(a5 + 0x3C) & 8) != 0 )
  {
    v5 = (int *)(a1 + 4);
    *(_BYTE *)(a1 + 1) = 1;
    if ( a1 != 0xFFFFFFFC )
    {
      do
      {
        v6 = *v5;
        v7 = *v5 == 0;
        v5 = (int *)v5[1];
        if ( !v7 )
          sub_52ADF0(v6, a2, a3, a4);
      }
      while ( v5 );
    }
  }
}
