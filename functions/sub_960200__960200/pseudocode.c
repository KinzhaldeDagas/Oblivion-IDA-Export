int __thiscall sub_960200(float *this, float *a2, NiTransform *a3)
{
  NiTransform *v5; // eax
  float v6; // eax
  double z; // st7
  NiTransform *v8; // eax
  float v10; // [esp+Ch] [ebp-18h]
  float v11; // [esp+10h] [ebp-14h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+18h] [ebp-Ch] BYREF
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+20h] [ebp-4h]
  float scale; // [esp+28h] [ebp+4h]

  v5 = sub_7101F0(a3, (NiTransform *)&v13, (NiPoint3 *)(a2 + 1)); /*0x96021b*/
  scale = a3->scale; /*0x960223*/
  v10 = v5->rot.data[0][0] * scale; /*0x960233*/
  v11 = v5->rot.data[0][1] * scale; /*0x96023c*/
  v12 = scale * v5->rot.data[0][2]; /*0x960243*/
  v13 = a3->pos.x + v10; /*0x96024e*/
  v14 = a3->pos.y + v11; /*0x96025d*/
  v6 = v14; /*0x960261*/
  z = a3->pos.z; /*0x960265*/
  *(this + 1) = v13; /*0x960268*/
  *(this + 2) = v6; /*0x96026f*/
  v15 = z + v12; /*0x960276*/
  *(this + 3) = v15; /*0x960282*/
  v8 = sub_7101F0(a3, (NiTransform *)&v13, (NiPoint3 *)(a2 + 4)); /*0x960288*/
  *(this + 4) = v8->rot.data[0][0]; /*0x96028f*/
  *(this + 5) = v8->rot.data[0][1]; /*0x960295*/
  *(this + 6) = v8->rot.data[0][2]; /*0x96029b*/
  *(this + 7) = a2[7] * a3->scale; /*0x9602a6*/
  *(this + 0xE) = a2[0xE] * a3->scale; /*0x9602af*/
  return sub_9600B0(this); /*0x9602b7*/
}
