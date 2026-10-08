int __thiscall sub_612EA0(_DWORD **this, float a2)
{
  double v2; // st7
  int v4; // edi
  double v5; // st6
  double v6; // st7
  float v8; // [esp+Ch] [ebp+4h]
  float v9; // [esp+Ch] [ebp+4h]

  v2 = a2; /*0x612ea3*/
  v4 = Double_To_SInt32(a2); /*0x612eb2*/
  v8 = (float)v4; /*0x612ebc*/
  v5 = v2 - v8; /*0x612ec8*/
  v6 = v8; /*0x612ec8*/
  if ( v5 < dbl_A2FC68 ) /*0x612ed5*/
    v6 = v6 - dbl_A2F928; /*0x612ed7*/
  v9 = v6; /*0x612ee0*/
  TESPackage_LocationData_SetRadius(*(this + 9), (__int64)v9); /*0x612f0b*/
  return TESAIForm_SetServiceFlags(*(this + 0xA), v4); /*0x612f1b*/
}
