int __thiscall sub_72A820(float *this, NiPoint3 *a2, NiTransform *a3)
{
  NiTransform *v4; // eax
  double scale; // st5
  float v6; // edx
  double z; // st7
  int result; // eax
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+10h] [ebp-14h]
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+18h] [ebp-Ch] BYREF
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+20h] [ebp-4h]

  v4 = sub_7101F0(a3, (NiTransform *)&v12, a2);
  scale = a3->scale;
  v9 = v4->rot.data[0][0] * scale;
  v10 = v4->rot.data[0][1] * scale;
  v11 = scale * v4->rot.data[0][2];
  v12 = a3->pos.x + v9;
  v13 = a3->pos.y + v10;
  v6 = v13;
  z = a3->pos.z;
  *this = v12;
  *(this + 1) = v6;
  v14 = z + v11;
  result = LODWORD(v14);
  *(this + 2) = v14;
  *(this + 3) = a2[1].x * a3->scale;
  return result;
}
