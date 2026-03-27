int __thiscall sub_741630(float *this)
{
  int result; // eax
  float v3; // ecx
  double v4; // st7
  double v5; // st6
  double v6; // st6
  float v7; // [esp+4h] [ebp-10h]
  float v8; // [esp+4h] [ebp-10h]
  float v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]

  sub_7101F0((NiTransform *)(this + 0x19), (NiTransform *)&v9, (NiPoint3 *)(this + 0x37));
  result = v10;
  v3 = v11;
  v4 = *(this + 0x23) * *(float *)&v10 + *(this + 0x22) * v9;
  v5 = *(this + 0x24);
  *(this + 0x3B) = v9;
  v6 = v5 * v11;
  *((_DWORD *)this + 0x3C) = result;
  *(this + 0x3D) = v3;
  v7 = v4 + v6;
  v8 = v7 + *(this + 0x3A) * *(this + 0x25);
  *(this + 0x3E) = v8;
  return result;
}
