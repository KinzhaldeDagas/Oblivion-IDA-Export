int __cdecl sub_4EA010(char a1)
{
  int v1; // ecx
  int v2; // edx
  double v3; // st7
  float v5; // [esp+0h] [ebp-10h]
  int v6; // [esp+4h] [ebp-Ch]

  v1 = dword_B2C720;
  v2 = dword_B2C724;
  byte_B09AE5 = a1;
  if ( a1 )
  {
    v5 = 0.0;
    v3 = 1.0;
  }
  else
  {
    v5 = 1.0;
    v3 = 0.0;
  }
  *(float *)&v6 = v3;
  *(float *)&dword_B2C718 = v5;
  dword_B2C71C = v6;
  dword_B2C720 = v1;
  dword_B2C724 = v2;
  return v6;
}
