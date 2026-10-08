int sub_774250()
{
  int i; // esi
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax

  for ( i = unk_B3F700; i; i = *(_DWORD *)(i + 0x2C) ) /*0x774251*/
  {
    v1 = *(int (__thiscall ****)(_DWORD, int))(i + 0x24); /*0x774260*/
    if ( v1 ) /*0x774265*/
    {
      *(_DWORD *)(i + 0x24) = 0; /*0x774267*/
      result = (**v1)(v1, 1); /*0x774274*/
    }
  }
  return result; /*0x77427d*/
}
