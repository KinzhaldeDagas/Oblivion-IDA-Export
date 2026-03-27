int __usercall sub_4796F0@<eax>(char *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  char *v6; // esi
  int v7; // ebx

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B33E00, (int)&unk_A2F830);
  v6 = a1 + 0x4C;
  v7 = 0x10;
  do
  {
    sub_478780(a1, a2, a3, a4, a5, (int)v6, 1, 0);
    v6 += 0x10;
    --v7;
  }
  while ( v7 );
  return NiLeaveCriticalSection_0(&stru_B33E00);
}
