void sub_747BE0()
{
  unsigned int i; // esi

  for ( i = 0; i < dword_B403B8; ++i )
    (*(void (**)(void))(4 * i + 0xB40338))();
  if ( dword_B403C0 )
    dword_B403C0();
  if ( byte_B407BD )
  {
    byte_B407BD = 0;
    sub_7485C0();
    FormHeapFree(dword_B407B8);
  }
}
