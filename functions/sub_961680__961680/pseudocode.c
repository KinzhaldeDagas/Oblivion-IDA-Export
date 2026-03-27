int __thiscall sub_961680(float *this, float *a2, NiTransform *a3)
{
  NiTransform *v5; // eax
  float v6; // eax
  double z; // st7
  NiTransform *v8; // eax
  NiTransform *v9; // eax
  NiTransform *v10; // eax
  int result; // eax
  float v12; // [esp+Ch] [ebp-18h]
  float v13; // [esp+10h] [ebp-14h]
  float v14; // [esp+14h] [ebp-10h]
  float v15; // [esp+18h] [ebp-Ch] BYREF
  float v16; // [esp+1Ch] [ebp-8h]
  float v17; // [esp+20h] [ebp-4h]
  float scale; // [esp+28h] [ebp+4h]

  v5 = sub_7101F0(a3, (NiTransform *)&v15, (NiPoint3 *)(a2 + 1));
  scale = a3->scale;
  v12 = v5->rot.data[0][0] * scale;
  v13 = v5->rot.data[0][1] * scale;
  v14 = scale * v5->rot.data[0][2];
  v15 = a3->pos.x + v12;
  v16 = a3->pos.y + v13;
  v6 = v16;
  z = a3->pos.z;
  *(this + 1) = v15;
  *(this + 2) = v6;
  v17 = z + v14;
  *(this + 3) = v17;
  v8 = sub_7101F0(a3, (NiTransform *)&v15, (NiPoint3 *)(a2 + 4));
  *(this + 4) = v8->rot.data[0][0];
  *(this + 5) = v8->rot.data[0][1];
  *(this + 6) = v8->rot.data[0][2];
  *(this + 0xD) = a2[0xD] * a3->scale;
  v9 = sub_7101F0(a3, (NiTransform *)&v15, (NiPoint3 *)(a2 + 7));
  *(this + 7) = v9->rot.data[0][0];
  *(this + 8) = v9->rot.data[0][1];
  *(this + 9) = v9->rot.data[0][2];
  *(this + 0xE) = a2[0xE] * a3->scale;
  v10 = sub_7101F0(a3, (NiTransform *)&v15, (NiPoint3 *)(a2 + 0xA));
  *(this + 0xA) = v10->rot.data[0][0];
  *(this + 0xB) = v10->rot.data[0][1];
  result = LODWORD(v10->rot.data[0][2]);
  *((_DWORD *)this + 0xC) = result;
  *(this + 0xF) = a2[0xF] * a3->scale;
  return result;
}
