void __userpurge sub_478CA0(char *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>, int a6)
{
  char *v7; // edi

  if ( a6 )
  {
    if ( *(_BYTE *)(a6 + 4) == 0x21 )
    {
      v7 = a1 + 0xDC;
      sub_478780(a1, a2, a3, a4, a5, (int)(a1 + 0xDC), 1, 0);
      *(_DWORD *)v7 = a6;
      *((_DWORD *)a1 + 0x38) = a6 + 0x30;
    }
  }
}
