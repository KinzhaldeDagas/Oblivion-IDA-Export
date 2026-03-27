void sub_5535D0()
{
  unsigned int v0; // esi

  if ( dword_B39B80 )
  {
    v0 = dword_B39B80;
    sub_553000((_DWORD *)dword_B39B80);
    FormHeapFree(v0);
    dword_B39B80 = 0;
  }
}
