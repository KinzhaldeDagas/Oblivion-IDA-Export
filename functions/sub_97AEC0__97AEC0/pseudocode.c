int __thiscall sub_97AEC0(NiPoint3 *this, NiTransform *a2)
{
  NiTransform *v4; // eax
  float v5; // edx
  double z; // st7
  NiTransform *v7; // eax
  NiTransform *v8; // eax
  NiTransform *v9; // eax
  double v10; // st7
  int result; // eax
  float v12; // [esp+8h] [ebp-18h]
  float v13; // [esp+Ch] [ebp-14h]
  float v14; // [esp+10h] [ebp-10h]
  float v15; // [esp+14h] [ebp-Ch] BYREF
  float v16; // [esp+18h] [ebp-8h]
  float v17; // [esp+1Ch] [ebp-4h]
  float scale; // [esp+24h] [ebp+4h]

  v4 = sub_7101F0(a2, (NiTransform *)&v15, this);
  scale = a2->scale;
  v12 = v4->rot.data[0][0] * scale;
  v13 = v4->rot.data[0][1] * scale;
  v14 = scale * v4->rot.data[0][2];
  v15 = a2->pos.x + v12;
  v16 = a2->pos.y + v13;
  v5 = v16;
  z = a2->pos.z;
  *((float *)this + 0xF) = v15;
  *((float *)this + 0x10) = v5;
  v17 = z + v14;
  *((float *)this + 0x11) = v17;
  v7 = sub_7101F0(a2, (NiTransform *)&v15, this + 1);
  *((_DWORD *)this + 0x12) = LODWORD(v7->rot.data[0][0]);
  *((_DWORD *)this + 0x13) = LODWORD(v7->rot.data[0][1]);
  *((_DWORD *)this + 0x14) = LODWORD(v7->rot.data[0][2]);
  v8 = sub_7101F0(a2, (NiTransform *)&v15, this + 2);
  *((_DWORD *)this + 0x15) = LODWORD(v8->rot.data[0][0]);
  *((_DWORD *)this + 0x16) = LODWORD(v8->rot.data[0][1]);
  *((_DWORD *)this + 0x17) = LODWORD(v8->rot.data[0][2]);
  v9 = sub_7101F0(a2, (NiTransform *)&v15, this + 3);
  v10 = *((float *)this + 0xC);
  *((_DWORD *)this + 0x18) = LODWORD(v9->rot.data[0][0]);
  *((_DWORD *)this + 0x19) = LODWORD(v9->rot.data[0][1]);
  result = LODWORD(v9->rot.data[0][2]);
  *((_DWORD *)this + 0x1A) = result;
  *((float *)this + 0x1B) = v10 * a2->scale;
  *((float *)this + 0x1C) = *((float *)this + 0xD) * a2->scale;
  *((float *)this + 0x1D) = *((float *)this + 0xE) * a2->scale;
  return result;
}
