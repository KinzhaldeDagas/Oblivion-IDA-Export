void __userpurge sub_479740(char *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  char *v6; // esi
  int v7; // ebx

  if ( a5 )
  {
    v6 = this + 0x4C;
    v7 = 0x10;
    do
    {
      if ( *(_DWORD *)v6 == a5 )
        sub_478780(this, a5, st5_0, a3, a4, (int)v6, 1, 0);
      v6 += 0x10;
      --v7;
    }
    while ( v7 );
  }
}
