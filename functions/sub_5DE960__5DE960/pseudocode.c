char __usercall sub_5DE960@<al>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v4; // eax
  char *v5; // ecx

  if ( dword_B147F8 >= 0 )
  {
    v4 = 1 << dword_B147F8;
    v5 = (char *)LOWORD(dword_B3B744);
    if ( (v4 & (unsigned int)v5) == 0 )
    {
      LOBYTE(v4) = ShowUIMessageBox(v5, a1, a2, a3, a4, (const char *)dword_B38CE8, 0, 0, (const char *)sOk, 0);
      LOWORD(dword_B3B744) |= 1 << dword_B147F8;
    }
  }
  dword_B147F8 = 0xFFFFFFFF;
  return v4;
}
