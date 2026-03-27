_BYTE *__usercall sub_8BC660@<eax>(int a1@<ebx>, _BYTE *a2, int a3, int a4, int a5, signed int a6)
{
  int v7; // [esp+0h] [ebp-18h]
  _DWORD v8[2]; // [esp+4h] [ebp-14h] BYREF
  _DWORD v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  v9[1] = a3;
  v9[0] = "SnapshotSave";
  v9[2] = &unk_BA82D8;
  v8[1] = 1;
  sub_8BC540(a1, (int)a2, a2, (int)v8, (int)&unk_BA8320, a4, a5, a6, v7, v9);
  return a2;
}
