int __cdecl sub_8F9250(int a1)
{
  _DWORD v2[11]; // [esp+0h] [ebp-30h] BYREF
  char v3; // [esp+2Ch] [ebp-4h]
  char v4; // [esp+2Dh] [ebp-3h]

  v4 = 0;
  memset(&v2[6], 0, 0xC);
  v3 = 0;
  v2[0] = sub_8F8D70;
  v2[0xA] = sub_8F8F50;
  v2[9] = sub_8F8E00;
  v2[2] = sub_8F8DB0;
  v2[3] = sub_8F8D20;
  v2[4] = sub_8F8D50;
  v2[5] = TESTexture::ClearComponentReferences;
  v2[1] = sub_8F8DF0;
  return sub_8DAEB0(a1, v2, 8, 6);
}
