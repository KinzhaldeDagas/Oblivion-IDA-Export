int __thiscall sub_5B6860(float *this, NiTransform *a2, NiPoint3 *a3, float *a4)
{
  NiTransform *v5; // eax
  double v6; // st7
  float v8; // [esp+Ch] [ebp-24h]
  float v9; // [esp+10h] [ebp-20h]
  float v10; // [esp+14h] [ebp-1Ch]
  float v11; // [esp+18h] [ebp-18h]
  float v12; // [esp+1Ch] [ebp-14h]
  float v13; // [esp+20h] [ebp-10h]
  char v14; // [esp+24h] [ebp-Ch] BYREF

  qmemcpy(this + 0xC, a2, 0x24u);
  v8 = a3->x + *a4;
  v9 = a3->y + a4[1];
  v10 = a3->z + a4[2];
  v5 = sub_7101F0(a2, (NiTransform *)&v14, a3);
  v11 = v8 - v5->rot.data[0][0];
  v12 = v9 - v5->rot.data[0][1];
  v6 = v10 - v5->rot.data[0][2];
  *(this + 0x15) = v11;
  *(this + 0x16) = v12;
  v13 = v6;
  *(this + 0x17) = v13;
  return LODWORD(v13);
}
