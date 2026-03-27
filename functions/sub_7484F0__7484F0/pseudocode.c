void sub_7484F0()
{
  unsigned int i; // esi
  unsigned int v1; // edi

  for ( i = 0; i < 0x10; ++i )
  {
    v1 = dword_B403C8[i];
    if ( v1 )
    {
      sub_748C00(dword_B403C8[i]);
      FormHeapFree(v1);
    }
    dword_B403C8[i] = 0;
  }
  dword_B4060C = 0;
}
