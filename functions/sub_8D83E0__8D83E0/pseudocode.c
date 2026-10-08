int __thiscall sub_8D83E0(_DWORD **this, _DWORD *a2, int a3)
{
  int result; // eax
  int v6; // edi
  int v7; // ecx

  result = a3 - 1; /*0x8d83e4*/
  if ( a3 - 1 >= 0 ) /*0x8d83e8*/
  {
    v6 = a3; /*0x8d83f0*/
    do /*0x8d8410*/
    {
      v7 = (int)*(this + 8 * *(char *)(*a2 + 4) + *(char *)(a2[1] + 4)); /*0x8d8403*/
      result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 0xC))(v7, a2); /*0x8d8409*/
      a2 += 2; /*0x8d840c*/
      --v6; /*0x8d840f*/
    }
    while ( v6 ); /*0x8d8410*/
  }
  return result; /*0x8d8414*/
}
