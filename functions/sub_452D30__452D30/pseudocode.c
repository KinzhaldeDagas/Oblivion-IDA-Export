_DWORD *__thiscall sub_452D30(_DWORD *this, int a2)
{
  int v3; // [esp-8h] [ebp-Ch]
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this;
  v3 = *(_DWORD *)(a2 + 0xC);
  v4 = 0;
  NiTMap_GetAt(this, v3, &v4);
  return v4;
}
