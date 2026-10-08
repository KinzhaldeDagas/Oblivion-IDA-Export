int __thiscall sub_8E0420(_DWORD *this, float *a2, int a3)
{
  double v5; // st7
  double v6; // st6
  float v7[2]; // [esp+4h] [ebp-10h] BYREF
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]

  if ( a3 == 1 ) /*0x8e042d*/
    return (*(int (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 8))(this, a2, 0, *(this + 2)); /*0x8e043e*/
  v5 = a2[6]; /*0x8e044d*/
  v6 = a2[5]; /*0x8e0450*/
  v7[0] = a2[5]; /*0x8e0453*/
  v7[1] = v5; /*0x8e0459*/
  v8 = v5 - v6; /*0x8e0461*/
  if ( v8 == *(float *)&SrcStr ) /*0x8e0478*/
    v9 = 0.0; /*0x8e047a*/
  else
    v9 = fConstant_1 / v8; /*0x8e048e*/
  sub_89BF50((int)a2, 0, 1); /*0x8e0498*/
  if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8e04a6*/
    return 2; /*0x8e04a6*/
  sub_8D7920((int)a2, v7); /*0x8e04bd*/
  if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8e04cc*/
    return 2; /*0x8e04a9*/
  *(this + 3) = 0; /*0x8e04ce*/
  a2[3] = (a2[6] + a2[5]) * kHeadBodyNormalMatchRadius; /*0x8e04e1*/
  return (*(int (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 8))(this, a2, 0, *(this + 2)); /*0x8e0441*/
}
