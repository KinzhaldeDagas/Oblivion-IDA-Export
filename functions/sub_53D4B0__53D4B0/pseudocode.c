float *__thiscall sub_53D4B0(NiTransform *this, float *a2, NiPoint3 *a3)
{
  NiTransform *v4; // eax
  double v5; // st7
  float scale; // [esp+4h] [ebp-1Ch]
  float v8; // [esp+8h] [ebp-18h]
  float v9; // [esp+Ch] [ebp-14h]
  float v10; // [esp+10h] [ebp-10h]
  char v11; // [esp+14h] [ebp-Ch] BYREF

  scale = this->scale;
  v4 = sub_7101F0(this, (NiTransform *)&v11, a3);
  v8 = v4->rot.data[0][0] * scale;
  v9 = v4->rot.data[0][1] * scale;
  v5 = scale * v4->rot.data[0][2];
  v10 = v5;
  *a2 = this->pos.x + v8;
  a2[1] = this->pos.y + v9;
  a2[2] = this->pos.z + v10;
  return a2;
}
