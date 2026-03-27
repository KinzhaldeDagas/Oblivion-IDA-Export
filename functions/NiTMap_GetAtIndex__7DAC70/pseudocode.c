int __thiscall NiTMap_GetAtIndex(_DWORD *this, int a2)
{
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = 0;
  NiTMap_GetAt(this + 2, a2, &v3);
  return v3;
}
