int __thiscall sub_6C5430(_DWORD *this, int a2)
{
  char v2; // al
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = 0;
  v2 = NiTMap_GetAt(this + 2, a2, &v4);
  return v2 != 0 ? v4 : 0;
}
