void sub_4BDD40()
{
  unsigned int v0; // esi

  if ( dword_B35B8C )
  {
    v0 = dword_B35B8C;
    sub_4BDC50((unsigned int **)dword_B35B8C);
    FormHeapFree(v0);
    dword_B35B8C = 0;
  }
}
