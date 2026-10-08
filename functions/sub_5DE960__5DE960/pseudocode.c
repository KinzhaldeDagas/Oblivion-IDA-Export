void __cdecl sub_5DE960()
{
  if ( dword_B147F8 >= 0 && ((1 << dword_B147F8) & LOWORD(dword_B3B744[0])) == 0 ) /*0x5de97a*/
  {
    ShowUIMessageBox(stru_B38CE8.value, 0, 0, MEMORY[0xB38CF0].value, 0); /*0x5de98f*/
    LOWORD(dword_B3B744[0]) |= 1 << dword_B147F8; /*0x5de9a4*/
  }
  dword_B147F8 = 0xFFFFFFFF; /*0x5de9ab*/
}
