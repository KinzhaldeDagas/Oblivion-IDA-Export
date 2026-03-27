void sub_4BE910()
{
  unsigned int v0; // esi

  if ( dword_B35B90 )
  {
    v0 = dword_B35B90;
    sub_4BE820((unsigned int **)dword_B35B90);
    FormHeapFree(v0);
    dword_B35B90 = 0;
  }
}
