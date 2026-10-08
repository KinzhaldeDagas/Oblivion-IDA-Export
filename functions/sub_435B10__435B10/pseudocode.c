_DWORD *__thiscall sub_435B10(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = *this; /*0x435b13*/
  if ( *this != a2 ) /*0x435b1c*/
  {
    if ( v3 ) /*0x435b20*/
      InterlockedDecrement((volatile LONG *)(v3 + 0xC)); /*0x435b26*/
    *this = a2; /*0x435b2e*/
    if ( a2 ) /*0x435b30*/
      InterlockedIncrement((volatile LONG *)(a2 + 0xC)); /*0x435b36*/
  }
  return this; /*0x435b3c*/
}
