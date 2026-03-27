int __thiscall sub_6CBD40(char *this, int a2)
{
  int result; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  _DWORD v10[8]; // [esp+4h] [ebp-20h] BYREF

  result = sub_6CD720(this, a2);
  if ( *(_DWORD *)(a2 + 0xD8) < 0xA01006Eu )
  {
    v3 = dword_B24260;
    v4 = dword_B24264;
    *(float *)&v10[7] = flt_A79E10;
    v5 = dword_B24268;
    v10[0] = v3;
    v6 = dword_B3CBA4;
    v10[1] = v4;
    v7 = dword_B3CBA8;
    v10[2] = v5;
    v8 = dword_B3CBAC;
    v10[3] = v6;
    v9 = dword_B3CBB0;
    v10[4] = v7;
    v10[5] = v8;
    v10[6] = v9;
    return sub_6CB990((char *)v10, a2);
  }
  return result;
}
