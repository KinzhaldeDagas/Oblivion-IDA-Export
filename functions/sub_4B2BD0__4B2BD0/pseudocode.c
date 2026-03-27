int __fastcall sub_4B2BD0(int a1)
{
  char v1; // al
  int v3; // [esp-8h] [ebp-Ch]
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = a1;
  v3 = *(_DWORD *)(a1 + 0xC);
  v4 = 0;
  v1 = NiTMap_GetAt(&off_B08310, v3, &v4);
  return v1 != 0 ? v4 : 0;
}
