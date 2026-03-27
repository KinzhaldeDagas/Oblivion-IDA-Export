char __thiscall sub_4C3C00(TESObjectCELL **this, float *a2, int a3, _DWORD *a4)
{
  char result; // al
  _BYTE v6[80]; // [esp+4h] [ebp-50h] BYREF

  result = sub_4C3030(this, (int)v6, a2, 0);
  if ( result )
    return sub_4C3540(this, (int)v6, a3, a4);
  return result;
}
