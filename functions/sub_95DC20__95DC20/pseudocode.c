int __thiscall sub_95DC20(float *this, int a2, NiTransform *a3)
{
  int result; // eax
  float v6; // ecx
  double v7; // st6
  float v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h]
  float v10; // [esp+14h] [ebp-4h]
  float v11; // [esp+1Ch] [ebp+4h]
  float v12; // [esp+1Ch] [ebp+4h]

  sub_7101F0(a3, (NiTransform *)&v8, (NiPoint3 *)(a2 + 4));
  result = v9;
  v6 = v10;
  v11 = a3->pos.y * *(float *)&v9 + a3->pos.x * v8 + a3->pos.z * v10;
  v7 = a3->scale * *(float *)(a2 + 0x10);
  *(this + 1) = v8;
  *((_DWORD *)this + 2) = result;
  *(this + 3) = v6;
  v12 = v11 + v7;
  *(this + 4) = v12;
  return result;
}
