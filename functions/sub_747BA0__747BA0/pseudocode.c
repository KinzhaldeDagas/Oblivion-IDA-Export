int (*sub_747BA0())(void)
{
  int (*result)(void); // eax
  unsigned int i; // esi

  sub_7489F0();
  result = dword_B403BC;
  if ( dword_B403BC )
    result = (int (*)(void))result();
  for ( i = 0; i < dword_B403B8; ++i )
    result = (int (*)(void))(*(int (**)(void))(4 * i + 0xB40378))();
  return result;
}
