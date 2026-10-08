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

  qmemcpy(this + 0xC, a2, 0x24u); /*0x5b687a*/
  v8 = a3->x + *a4; /*0x5b6885*/
  v9 = a3->y + a4[1]; /*0x5b688f*/
  v10 = a3->z + a4[2]; /*0x5b68a0*/
  v5 = sub_7101F0(a2, (NiTransform *)&v14, a3); /*0x5b68a4*/
  v11 = v8 - v5->rot.data[0][0]; /*0x5b68b1*/
  v12 = v9 - v5->rot.data[0][1]; /*0x5b68c0*/
  v6 = v10 - v5->rot.data[0][2]; /*0x5b68cc*/
  *(this + 0x15) = v11; /*0x5b68cf*/
  *(this + 0x16) = v12; /*0x5b68d2*/
  v13 = v6; /*0x5b68d5*/
  *(this + 0x17) = v13; /*0x5b68dd*/
  return LODWORD(v13); /*0x5b68e0*/
}
