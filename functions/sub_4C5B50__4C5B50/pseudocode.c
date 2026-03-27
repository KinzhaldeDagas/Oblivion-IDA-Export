char __thiscall sub_4C5B50(TESObjectLAND *this, float *a2, float *a3)
{
  char result; // al
  _BYTE v5[80]; // [esp+4h] [ebp-50h] BYREF

  result = sub_4C3030((TESObjectCELL **)this, (int)v5, a2, 0);
  if ( result )
    return sub_4C44C0(this, (int)v5, a3);
  *a3 = flt_A37448;
  return result;
}
