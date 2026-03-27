int __thiscall sub_950CA0(_DWORD **this, unsigned __int16 *a2, int a3, int a4)
{
  int result; // eax
  int v6; // esi
  int v7; // [esp+14h] [ebp-21Ch]
  _BYTE v9[524]; // [esp+20h] [ebp-210h] BYREF

  result = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    v7 = a3;
    do
    {
      v6 = *a2;
      *(_OWORD *)a4 = *(_OWORD *)(0x10 * (v6 % 3 + 1)
                                + (*(int (__thiscall **)(_DWORD, _DWORD, _BYTE *))(**(this + 6) + 0x28))(
                                    *(this + 6),
                                    (*(this + 7))[v6 / 3],
                                    v9));
      *(_DWORD *)(a4 + 0xC) = v6 | 0x3F000000;
      a4 += 0x10;
      result = v7 - 1;
      ++a2;
      v7 = result;
    }
    while ( result );
  }
  return result;
}
