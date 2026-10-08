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

  sub_7101F0((NiTransform *)(this + 0x19), (NiTransform *)&v9, (NiPoint3 *)(this + 0x37)); /*0x741645*/
  result = v10; /*0x74165e*/
  v3 = v11; /*0x741666*/
  v4 = *(this + 0x23) * *(float *)&v10 + *(this + 0x22) * v9; /*0x74166a*/
  v5 = *(this + 0x24); /*0x74166c*/
  *(this + 0x3B) = v9; /*0x741672*/
  v6 = v5 * v11; /*0x741678*/
  *((_DWORD *)this + 0x3C) = result; /*0x74167c*/
  *(this + 0x3D) = v3; /*0x741682*/
  v7 = v4 + v6; /*0x74168a*/
  v8 = v7 + *(this + 0x3A) * *(this + 0x25); /*0x7416a0*/
  *(this + 0x3E) = v8; /*0x7416a8*/
  return result; /*0x7416ae*/
}
