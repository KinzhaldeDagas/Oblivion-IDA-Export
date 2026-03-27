void __usercall sub_572D90(double a1@<st2>, double a2@<st1>, double a3@<st0>)
{
  unsigned int v3; // esi

  if ( dword_B3A6A4 )
  {
    v3 = dword_B3A6A4;
    sub_572010((char *)dword_B3A6A4, a1, a2, a3);
    FormHeapFree(v3);
    dword_B3A6A4 = 0;
  }
}
