signed int __cdecl sub_5480A0(signed int a1)
{
  signed int v1; // ecx
  signed int result; // eax
  int *v3; // ecx
  _DWORD v4[11]; // [esp+0h] [ebp-2Ch]

  v1 = a1;
  result = 1;
  v4[1] = &iLevelUp01Mult;
  v4[2] = &iLevelUp02Mult;
  v4[3] = &unk_B37630;
  v4[4] = &unk_B37638;
  v4[5] = &unk_B37640;
  v4[6] = &unk_B37648;
  v4[7] = &unk_B37650;
  v4[8] = &iLevelUp08Mult;
  v4[9] = &unk_B37660;
  v4[0xA] = &iLevelUp10Mult;
  if ( a1 < 0xA )
  {
    if ( a1 <= 0 )
      return result;
  }
  else
  {
    v1 = 0xA;
  }
  v3 = (int *)v4[v1];
  if ( !v3 )
  {
    dword_B35464 = 0;
    v3 = &dword_B35464;
  }
  return *v3;
}
