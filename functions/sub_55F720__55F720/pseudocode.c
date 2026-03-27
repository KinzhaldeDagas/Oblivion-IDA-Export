void sub_55F720()
{
  unsigned int v0; // esi

  if ( dword_B39E04 )
  {
    v0 = dword_B39E04;
    sub_55F550((unsigned int *)dword_B39E04);
    FormHeapFree(v0);
    dword_B39E04 = 0;
  }
}
