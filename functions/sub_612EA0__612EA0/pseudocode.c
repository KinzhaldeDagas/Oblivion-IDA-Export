int __thiscall sub_612EA0(_DWORD **this, float a2)
{
  double v2; // st7
  int v4; // edi
  double v5; // st6
  double v6; // st7
  float v8; // [esp+Ch] [ebp+4h]
  float v9; // [esp+Ch] [ebp+4h]

  v2 = a2;
  v4 = Double_To_SInt32(a2);
  v8 = (float)v4;
  v5 = v2 - v8;
  v6 = v8;
  if ( v5 < dbl_A2FC68 )
    v6 = v6 - dbl_A2F928;
  v9 = v6;
  TESPackage_LocationData_SetRadius(*(this + 9), (__int64)v9);
  return TESAIForm_SetServiceFlags(*(this + 0xA), v4);
}
