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

  v5 = sub_7101F0(a3, (NiTransform *)&v15, (NiPoint3 *)(a2 + 1)); /*0x96169b*/
  scale = a3->scale; /*0x9616a3*/
  v12 = v5->rot.data[0][0] * scale; /*0x9616b3*/
  v13 = v5->rot.data[0][1] * scale; /*0x9616bc*/
  v14 = scale * v5->rot.data[0][2]; /*0x9616c3*/
  v15 = a3->pos.x + v12; /*0x9616ce*/
  v16 = a3->pos.y + v13; /*0x9616dd*/
  v6 = v16; /*0x9616e1*/
  z = a3->pos.z; /*0x9616e5*/
  *(this + 1) = v15; /*0x9616e8*/
  *(this + 2) = v6; /*0x9616ef*/
  v17 = z + v14; /*0x9616f6*/
  *(this + 3) = v17; /*0x961702*/
  v8 = sub_7101F0(a3, (NiTransform *)&v15, (NiPoint3 *)(a2 + 4)); /*0x961708*/
  *(this + 4) = v8->rot.data[0][0]; /*0x96170f*/
  *(this + 5) = v8->rot.data[0][1]; /*0x961715*/
  *(this + 6) = v8->rot.data[0][2]; /*0x96171b*/
  *(this + 0xD) = a2[0xD] * a3->scale; /*0x96172d*/
  v9 = sub_7101F0(a3, (NiTransform *)&v15, (NiPoint3 *)(a2 + 7)); /*0x961732*/
  *(this + 7) = v9->rot.data[0][0]; /*0x961739*/
  *(this + 8) = v9->rot.data[0][1]; /*0x96173f*/
  *(this + 9) = v9->rot.data[0][2]; /*0x961745*/
  *(this + 0xE) = a2[0xE] * a3->scale; /*0x961757*/
  v10 = sub_7101F0(a3, (NiTransform *)&v15, (NiPoint3 *)(a2 + 0xA)); /*0x96175c*/
  *(this + 0xA) = v10->rot.data[0][0]; /*0x961763*/
  *(this + 0xB) = v10->rot.data[0][1]; /*0x961769*/
  result = LODWORD(v10->rot.data[0][2]); /*0x96176c*/
  *((_DWORD *)this + 0xC) = result; /*0x96176f*/
  *(this + 0xF) = a2[0xF] * a3->scale; /*0x961779*/
  return result; /*0x96177c*/
}
