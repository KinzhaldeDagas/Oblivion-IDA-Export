bool __cdecl sub_546930(_DWORD *a1, float a2, char a3, char a4, char a5)
{
  double v6; // st7
  float v7; // [esp+0h] [ebp-14h]
  float v8; // [esp+4h] [ebp-10h]
  double v9; // [esp+Ch] [ebp-8h]
  float v10; // [esp+28h] [ebp+14h]
  float v11; // [esp+28h] [ebp+14h]

  if ( a5 )
    return 0;
  v8 = (float)(*(char (__thiscall **)(_DWORD *))(*a1 + 0x11C))(a1);
  v6 = 0.0;
  if ( v8 == 0.0 )
    return 0;
  if ( v8 >= fCostant_100 )
    return 1;
  if ( a3 )
  {
    v7 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a1 + 0x120))(a1);
    v6 = 0.0;
  }
  else
  {
    v7 = 0.0;
  }
  if ( a4 )
    v6 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a1 + 0x124))(a1);
  v10 = v6;
  v9 = sub_4AA1B0(a1) * (1.0 - a2);
  *(float *)&v9 = sub_4AA170(a1) + v9;
  v11 = v10 + v7 + *(float *)&v9 + v8;
  return v11 >= (double)(GetRandomLargeInteger_(0) % 0x64);
}
