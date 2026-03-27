int __cdecl sub_8FD9C0(int a1)
{
  _DWORD v2[11]; // [esp+0h] [ebp-30h] BYREF
  char v3; // [esp+2Ch] [ebp-4h]
  char v4; // [esp+2Dh] [ebp-3h]

  v4 = 0;
  memset(&v2[6], 0, 0x10);
  v3 = 0;
  v2[0] = sub_8FD740;
  v2[0xA] = sub_8FD7D0;
  v2[2] = sub_8FD760;
  v2[3] = sub_8FD6D0;
  v2[4] = sub_8FD710;
  v2[5] = TESTexture::ClearComponentReferences;
  v2[1] = sub_8FD7C0;
  return sub_8DAEB0(a1, v2, 7, 7);
}
