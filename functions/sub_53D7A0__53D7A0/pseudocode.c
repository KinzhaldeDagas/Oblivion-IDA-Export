NiTransform *__thiscall sub_53D7A0(NiTransform *this, NiTransform *a2, NiTransform *a3)
{
  NiTransform *v4; // eax
  double scale; // st5
  float v6; // ecx
  double z; // st7
  float v9; // [esp+10h] [ebp-3Ch]
  float v10; // [esp+14h] [ebp-38h]
  float v11; // [esp+18h] [ebp-34h]
  _BYTE v12[48]; // [esp+1Ch] [ebp-30h] BYREF

  a2->scale = a3->scale * this->scale;
  qmemcpy(a2, NiMAtrix33_Multiply((float *)this, (float *)&v12[0xC], (float *)a3), 0x24u);
  v4 = sub_7101F0(this, (NiTransform *)v12, &a3->pos);
  scale = this->scale;
  v9 = v4->rot.data[0][0] * scale;
  v10 = v4->rot.data[0][1] * scale;
  v11 = scale * v4->rot.data[0][2];
  *(float *)v12 = v9 + this->pos.x;
  *(float *)&v12[4] = this->pos.y + v10;
  v6 = *(float *)&v12[4];
  z = this->pos.z;
  a2->pos.x = *(float *)v12;
  a2->pos.y = v6;
  *(float *)&v12[8] = z + v11;
  a2->pos.z = *(float *)&v12[8];
  return a2;
}
