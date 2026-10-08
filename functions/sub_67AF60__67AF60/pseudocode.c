_DWORD *__thiscall sub_67AF60(_DWORD *this)
{
  _DWORD v3[5]; // [esp-4h] [ebp-24h] BYREF
  _DWORD *v4; // [esp+10h] [ebp-10h]
  int v5; // [esp+1Ch] [ebp-4h]

  v3[4] = this; /*0x67af87*/
  sub_67B240(this); /*0x67af8b*/
  v5 = 2; /*0x67af95*/
  sub_67B240(this + 3); /*0x67af99*/
  sub_67B240(this + 6); /*0x67afa6*/
  v4 = v3; /*0x67afb6*/
  sub_532DF0(this + 0x10, 0); /*0x67afbc*/
  LOBYTE(v5) = 3; /*0x67afc7*/
  v4 = v3; /*0x67afcc*/
  sub_532DF0(this + 0x12, 0); /*0x67afd2*/
  *(this + 0x14) = 0; /*0x67afd7*/
  *(this + 0x15) = 0; /*0x67afda*/
  *(this + 0x16) = 0; /*0x67afdd*/
  *(this + 0x17) = 0; /*0x67afe0*/
  LOBYTE(v5) = 4; /*0x67afe6*/
  *(this + 0x18) = 0; /*0x67afeb*/
  *(this + 0x19) = 0; /*0x67afee*/
  sub_67B240(this + 0x1A); /*0x67aff1*/
  LOBYTE(v5) = 5; /*0x67afff*/
  sub_677DD0(this + 0x1F, 2u, 0x25, 0xC); /*0x67b004*/
  *((_BYTE *)this + 0x99) = 1; /*0x67b009*/
  *((_BYTE *)this + 0x98) = 1; /*0x67b010*/
  *((_BYTE *)this + 0xA0) = 1; /*0x67b017*/
  *((_BYTE *)this + 0xA1) = 1; /*0x67b01e*/
  *((_BYTE *)this + 0xA2) = 1; /*0x67b025*/
  *((_BYTE *)this + 0xA3) = 1; /*0x67b02c*/
  *((_BYTE *)this + 0xA4) = 1; /*0x67b033*/
  *((_BYTE *)this + 0x9A) = 0; /*0x67b03a*/
  *(this + 0x27) = 0; /*0x67b040*/
  *(this + 0x1D) = 0; /*0x67b046*/
  *(this + 0xA) = 0; /*0x67b049*/
  *((_BYTE *)this + 0xA5) = 0; /*0x67b04c*/
  *((_BYTE *)this + 0xA6) = 0; /*0x67b052*/
  *((float *)this + 0x2B) = unk_B37D58; /*0x67b05e*/
  *(this + 0x2A) = 0; /*0x67b064*/
  return this; /*0x67b06c*/
}
