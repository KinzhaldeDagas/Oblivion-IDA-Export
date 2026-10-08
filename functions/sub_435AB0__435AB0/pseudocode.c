_DWORD *__thiscall sub_435AB0(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = *this; /*0x435ab3*/
  if ( *this != a2 ) /*0x435abc*/
  {
    if ( v3 ) /*0x435ac0*/
      InterlockedDecrement((volatile LONG *)(v3 + 4)); /*0x435ac6*/
    *this = a2; /*0x435ace*/
    if ( a2 ) /*0x435ad0*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x435ad6*/
  }
  return this; /*0x435adc*/
}
