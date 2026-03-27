int __thiscall sub_718A80(float *this, NiTransform *a2)
{
  NiTransform *v4; // eax
  double v5; // st7
  float v7; // [esp+10h] [ebp-48h]
  float v8; // [esp+14h] [ebp-44h]
  float v9; // [esp+18h] [ebp-40h]
  NiPoint3 v10; // [esp+1Ch] [ebp-3Ch] BYREF
  _BYTE v11[48]; // [esp+28h] [ebp-30h] BYREF
  float scale; // [esp+5Ch] [ebp+4h]

  qmemcpy(a2, sub_710400(this, (float *)&v11[0xC]), 0x24u);
  a2->scale = 1.0 / *(this + 0xC);
  v10.x = -*(this + 9);
  v10.y = -*(this + 0xA);
  v10.z = -*(this + 0xB);
  v4 = sub_7101F0(a2, (NiTransform *)v11, &v10);
  scale = a2->scale;
  v7 = scale * v4->rot.data[0][0];
  v8 = v4->rot.data[0][1] * scale;
  v5 = scale * v4->rot.data[0][2];
  a2->pos.x = v7;
  a2->pos.y = v8;
  v9 = v5;
  a2->pos.z = v9;
  return LODWORD(v7);
}
