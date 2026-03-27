bool __thiscall sub_453450(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = this;
  v2 = (_DWORD *)*this;
  v4 = 0;
  NiTMap_GetAt(v2, a2, &v4);
  return v4 != 0;
}
