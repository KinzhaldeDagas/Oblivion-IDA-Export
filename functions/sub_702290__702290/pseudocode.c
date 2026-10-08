char __thiscall sub_702290(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_700A70(a2); /*0x702299*/
  if ( result ) /*0x7022a0*/
  {
    v4 = *(this + 0xF); /*0x7022a7*/
    if ( v4 ) /*0x7022ac*/
      return (*(char (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x7022b4*/
    else
      return 1; /*0x7022bc*/
  }
  return result; /*0x7022a2*/
}
