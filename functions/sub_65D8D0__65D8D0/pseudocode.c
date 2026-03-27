double __userpurge sub_65D8D0@<st0>(_DWORD *this@<ecx>, double st7_0@<st0>, _DWORD *a3)
{
  int v5; // eax
  char v6; // al
  TESObjectREFR *v7; // eax
  char v8; // al
  char v9; // [esp+10h] [ebp-24h]
  int v10[5]; // [esp+14h] [ebp-20h] BYREF
  unsigned int v11; // [esp+30h] [ebp-4h]
  char v12; // [esp+38h] [ebp+4h]

  if ( a3 )
  {
    sub_52B440(a3, 1);
    if ( v5 )
    {
      v12 = sub_67F0A0();
      v6 = sub_68CA20(a3);
      sub_67F0B0(v6);
      v9 = sub_67F0C0();
      sub_67F0D0(0);
      sub_68A9F0(v10);
      v11 = 0;
      sub_52B440(a3, 1);
      st7_0 = sub_65D880(this, st7_0, v10, v7);
      if ( v8 )
        sub_68A1B0((char *)v10);
      sub_67F0B0(v12);
      sub_67F0D0(v9);
      v11 = 0xFFFFFFFF;
      sub_68AA10(v10);
    }
  }
  return st7_0;
}
