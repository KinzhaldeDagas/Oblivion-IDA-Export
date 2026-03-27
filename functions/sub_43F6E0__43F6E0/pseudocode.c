void __usercall sub_43F6E0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  unsigned int v5; // edi
  unsigned int v6; // edi

  v5 = *(_DWORD *)(a1 + 0x54);
  if ( v5 )
  {
    sub_49CFB0(*(int **)(a1 + 0x54), a2, a3, a4);
    FormHeapFree(v5);
  }
  v6 = *(_DWORD *)(a1 + 0x58);
  if ( v6 )
  {
    sub_49E500(*(_DWORD **)(a1 + 0x58));
    FormHeapFree(v6);
  }
  *(_DWORD *)(a1 + 0x58) = 0;
}
