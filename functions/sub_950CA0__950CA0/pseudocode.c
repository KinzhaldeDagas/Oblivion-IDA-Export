int __thiscall sub_950CA0(_DWORD **this, unsigned __int16 *a2, int a3, int a4)
{
  int result; // eax
  int v6; // esi
  int v7; // [esp+14h] [ebp-21Ch]
  _BYTE v9[524]; // [esp+20h] [ebp-210h] BYREF

  result = a3 - 1; /*0x950cbb*/
  if ( a3 - 1 >= 0 ) /*0x950cc3*/
  {
    v7 = a3; /*0x950cc9*/
    do /*0x950d2d*/
    {
      v6 = *a2; /*0x950cd3*/
      *(_OWORD *)a4 = *(_OWORD *)(0x10 * (v6 % 3 + 1) /*0x950d19*/
                                + (*(int (__thiscall **)(_DWORD, _DWORD, _BYTE *))(**(this + 6) + 0x28))(
                                    *(this + 6),
                                    (*(this + 7))[v6 / 3],
                                    v9));
      *(_DWORD *)(a4 + 0xC) = v6 | 0x3F000000; /*0x950d1c*/
      a4 += 0x10; /*0x950d22*/
      result = v7 - 1; /*0x950d25*/
      ++a2; /*0x950d26*/
      v7 = result; /*0x950d29*/
    }
    while ( result ); /*0x950d2d*/
  }
  return result; /*0x950d2f*/
}
