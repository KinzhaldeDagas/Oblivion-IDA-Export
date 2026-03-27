char __thiscall sub_6CE600(int this, float *a2)
{
  float *v2; // esi
  double v3; // st7
  float v5; // [esp+4h] [ebp-24h]
  _BYTE v6[32]; // [esp+8h] [ebp-20h] BYREF

  v2 = (float *)(this + 0x30);
  v5 = -flt_A7DEB4;
  v3 = v5;
  if ( v5 == *(float *)(this + 0x4C) && v3 == *(float *)(this + 0x40) && *v2 == v3 )
    return 0;
  if ( *(_BYTE *)(this + 0xE) == 1 )
    v2 = sub_6CB640(
           (float *)(this + 0x30),
           (int)v6,
           (NiPoint3 *)(0x68 * *(unsigned __int8 *)(this + 0xF) + *(_DWORD *)(this + 0x50) + 4));
  qmemcpy(a2, v2, 0x20u);
  return 1;
}
