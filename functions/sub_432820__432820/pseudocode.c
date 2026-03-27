char __thiscall sub_432820(_DWORD *this, int *a2, int a3)
{
  return sub_432220(
           this,
           a2,
           (a3 << 0x10) + (a2[4] & 0xFF00FFFF),
           (((__int64)a3 << 0x10) + __PAIR64__(a2[5], a2[4] & 0xFF00FFFF)) >> 0x20);
}
