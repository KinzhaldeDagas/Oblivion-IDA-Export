int __thiscall sub_7F3610(
        BoltShader *this,
        int a2,
        NiSkinInstance *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        NiTransform *a8,
        int a9)
{
  int v11; // ecx
  float v12; // edx
  float v13; // eax
  double v14; // st7
  float v15; // ecx
  double v16; // st7
  double scale; // st7
  double v18; // st7
  double v19; // st7
  NiPoint3 v21; // [esp+8h] [ebp-5Ch] BYREF
  float v22; // [esp+14h] [ebp-50h]
  UInt32 v23; // [esp+18h] [ebp-4Ch]
  UInt32 v24; // [esp+1Ch] [ebp-48h]
  float v25; // [esp+20h] [ebp-44h]
  NiTransform v26; // [esp+24h] [ebp-40h] BYREF
  float a8a; // [esp+80h] [ebp+1Ch]

  sub_7103C0((float *)a8, &v26.rot.data[2][1]);
  v11 = dword_B46658;
  v21.x = -a8->pos.x;
  v12 = *(float *)&dword_B4665C;
  v13 = *(float *)&dword_B46660;
  v14 = -a8->pos.y;
  *(_QWORD *)&v26.rot.data[1][0] = __PAIR64__(dword_B4665C, v11);
  v21.y = v14;
  v15 = *(float *)&dword_B46664;
  v16 = -a8->pos.z;
  v26.rot.data[1][2] = v13;
  v21.z = v16;
  scale = a8->scale;
  v26.rot.data[2][0] = v15;
  a8a = 1.0 / scale;
  v22 = v21.x + v26.rot.data[1][0];
  *(float *)&v23 = v21.y + v12;
  *(float *)&v24 = v21.z + v13;
  v21.x = v22 * a8a;
  v21.y = *(float *)&v23 * a8a;
  v21.z = a8a * *(float *)&v24;
  sub_7101F0((NiTransform *)&v26.rot.data[2][1], &v26, &v21);
  v22 = v26.rot.data[0][0];
  v18 = v26.rot.data[0][1];
  this->Unk00[0x2B] = LODWORD(v26.rot.data[0][0]);
  *(float *)&v23 = v18;
  v19 = v26.rot.data[0][2];
  this->Unk00[0x2C] = v23;
  *(float *)&v24 = v19;
  v25 = 1.0;
  this->Unk00[0x2D] = v24;
  *(float *)&this->Unk00[0x2E] = 1.0;
  return sub_779710((NiD3DShader *)this, a2, a3, a4, a5, a6, a7, a8, a9);
}
