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
  float v11; // ecx
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

  sub_7103C0((float *)a8, &v26.rot.data[2][1]); /*0x7f3625*/
  v11 = flt_B46638[8]; /*0x7f362f*/
  v21.x = -a8->pos.x; /*0x7f3635*/
  v12 = flt_B46638[9]; /*0x7f3639*/
  v13 = flt_B46638[0xA]; /*0x7f3642*/
  v14 = -a8->pos.y; /*0x7f3647*/
  *(_QWORD *)&v26.rot.data[1][0] = __PAIR64__(LODWORD(flt_B46638[9]), LODWORD(v11)); /*0x7f3649*/
  v21.y = v14; /*0x7f364d*/
  v15 = flt_B46638[0xB]; /*0x7f3658*/
  v16 = -a8->pos.z; /*0x7f365e*/
  v26.rot.data[1][2] = v13; /*0x7f3660*/
  v21.z = v16; /*0x7f3664*/
  scale = a8->scale; /*0x7f366c*/
  v26.rot.data[2][0] = v15; /*0x7f3678*/
  a8a = 1.0 / scale; /*0x7f3681*/
  v22 = v21.x + v26.rot.data[1][0]; /*0x7f3690*/
  *(float *)&v23 = v21.y + v12; /*0x7f369c*/
  *(float *)&v24 = v21.z + v13; /*0x7f36a8*/
  v21.x = v22 * a8a; /*0x7f36bd*/
  v21.y = *(float *)&v23 * a8a; /*0x7f36c7*/
  v21.z = a8a * *(float *)&v24; /*0x7f36cf*/
  sub_7101F0((NiTransform *)&v26.rot.data[2][1], &v26, &v21); /*0x7f36d3*/
  v22 = v26.rot.data[0][0]; /*0x7f36dc*/
  v18 = v26.rot.data[0][1]; /*0x7f36e4*/
  this->Unk00[0x2B] = LODWORD(v26.rot.data[0][0]); /*0x7f36e8*/
  *(float *)&v23 = v18; /*0x7f36ee*/
  v19 = v26.rot.data[0][2]; /*0x7f36f6*/
  this->Unk00[0x2C] = v23; /*0x7f36fa*/
  *(float *)&v24 = v19; /*0x7f3707*/
  v25 = 1.0; /*0x7f3712*/
  this->Unk00[0x2D] = v24; /*0x7f371e*/
  *(float *)&this->Unk00[0x2E] = 1.0; /*0x7f3731*/
  return sub_779710((NiD3DShader *)this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x7f3755*/
}
