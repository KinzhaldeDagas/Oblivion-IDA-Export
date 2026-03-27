int __thiscall sub_96C4C0(float *this, int a2, NiTransform *a3)
{
  NiTransform *v5; // eax
  int result; // eax
  double z; // st7
  float v8; // [esp+Ch] [ebp-18h]
  float v9; // [esp+10h] [ebp-14h]
  float v10; // [esp+14h] [ebp-10h]
  float v11; // [esp+18h] [ebp-Ch] BYREF
  int v12; // [esp+1Ch] [ebp-8h]
  float v13; // [esp+20h] [ebp-4h]
  float scale; // [esp+28h] [ebp+4h]

  v5 = sub_7101F0(a3, (NiTransform *)&v11, (NiPoint3 *)(a2 + 4));
  scale = a3->scale;
  v8 = scale * v5->rot.data[0][0];
  v9 = v5->rot.data[0][1] * scale;
  v10 = scale * v5->rot.data[0][2];
  v11 = a3->pos.x + v8;
  *(float *)&v12 = a3->pos.y + v9;
  result = v12;
  z = a3->pos.z;
  *(this + 1) = v11;
  *((_DWORD *)this + 2) = result;
  v13 = z + v10;
  *(this + 3) = v13;
  *(this + 4) = *(float *)(a2 + 0x10) * a3->scale;
  return result;
}
