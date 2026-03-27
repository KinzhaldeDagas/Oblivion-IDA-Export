void sub_7603D0()
{
  unsigned int v0; // esi

  v0 = dword_B42044;
  if ( dword_B42044 )
  {
    sub_75E0A0((unsigned int *)dword_B42044);
    FormHeapFree(v0);
  }
  dword_B42044 = 0;
}
