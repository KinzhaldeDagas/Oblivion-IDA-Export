unsigned int __usercall sub_4FA580@<eax>(
        int a1@<ebx>,
        char a2@<bpl>,
        double a3@<st0>,
        double a4@<st2>,
        double a5@<st1>)
{
  int *v5; // esi
  unsigned int result; // eax
  int v7; // esi

  v5 = &dword_B361CC;
  do
  {
    if ( !v5[1] && !*v5 )
      break;
    sub_4E4690(*v5, a1, a2, (int)v5, a4, a5, a3);
    v5 = (int *)v5[1];
  }
  while ( v5 );
  result = dword_B361D0;
  if ( dword_B361D0 )
  {
    do
    {
      v7 = *(_DWORD *)(result + 4);
      FormHeapFree(result);
      result = v7;
      dword_B361D0 = v7;
    }
    while ( v7 );
  }
  dword_B361CC = 0;
  return result;
}
