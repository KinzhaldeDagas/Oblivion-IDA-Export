int __thiscall sub_6F89A0(_DWORD *this, char a2, char a3)
{
  int result; // eax
  int v4; // ecx
  _DWORD v5[10]; // [esp+4h] [ebp-94h] BYREF
  _DWORD v6[7]; // [esp+2Ch] [ebp-6Ch] BYREF
  _DWORD v7[10]; // [esp+48h] [ebp-50h] BYREF
  _DWORD v8[7]; // [esp+70h] [ebp-28h] BYREF
  int v9; // [esp+94h] [ebp-4h]

  result = a2 & 0x17;
  *(this + 2) = result;
  v4 = result & *(this + 3);
  if ( v4 )
  {
    if ( a3 )
      ThrowException__(0, 0);
    if ( (v4 & 4) != 0 )
    {
      sub_414750((int)v6, "ios_base::badbit set");
      v9 = 0;
      sub_6F7DD0((std::exception *)v5, v6);
      v5[0] = &std::ios_base::failure::`vftable';
      ThrowException__((int)v5, &_TI3_AVfailure_ios_base_std__);
    }
    if ( (v4 & 2) != 0 )
    {
      sub_414750((int)v6, "ios_base::failbit set");
      v9 = 1;
      sub_6F7DD0((std::exception *)v5, v6);
      v5[0] = &std::ios_base::failure::`vftable';
      ThrowException__((int)v5, &_TI3_AVfailure_ios_base_std__);
    }
    sub_414750((int)v8, "ios_base::eofbit set");
    v9 = 2;
    sub_6F7DD0((std::exception *)v7, v8);
    v7[0] = &std::ios_base::failure::`vftable';
    ThrowException__((int)v7, &_TI3_AVfailure_ios_base_std__);
  }
  return result;
}
