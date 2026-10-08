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

  v5 = dword_B361CC; /*0x4fa581*/
  do /*0x4fa59d*/
  {
    if ( !v5[1] && !*v5 ) /*0x4fa58c*/
      break; /*0x4fa58f*/
    sub_4E4690(*v5, a1, a2, (int)v5, a4, a5, a3); /*0x4fa593*/
    v5 = (int *)v5[1]; /*0x4fa598*/
  }
  while ( v5 ); /*0x4fa59d*/
  result = dword_B361CC[1]; /*0x4fa59f*/
  if ( dword_B361CC[1] ) /*0x4fa59f*/
  {
    do /*0x4fa5c5*/
    {
      v7 = *(_DWORD *)(result + 4); /*0x4fa5b0*/
      FormHeapFree(result); /*0x4fa5b4*/
      result = v7; /*0x4fa5be*/
      dword_B361CC[1] = v7; /*0x4fa5c0*/
    }
    while ( v7 ); /*0x4fa5c5*/
  }
  dword_B361CC[0] = 0; /*0x4fa5c7*/
  return result; /*0x4fa5d1*/
}
