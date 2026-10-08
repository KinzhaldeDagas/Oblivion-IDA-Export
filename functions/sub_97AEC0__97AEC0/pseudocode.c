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

  v4 = sub_7101F0(a2, (NiTransform *)&v15, this); /*0x97aed3*/
  scale = a2->scale; /*0x97aedb*/
  v12 = v4->rot.data[0][0] * scale; /*0x97aeeb*/
  v13 = v4->rot.data[0][1] * scale; /*0x97aef4*/
  v14 = scale * v4->rot.data[0][2]; /*0x97aefb*/
  v15 = a2->pos.x + v12; /*0x97af06*/
  v16 = a2->pos.y + v13; /*0x97af15*/
  v5 = v16; /*0x97af19*/
  z = a2->pos.z; /*0x97af1d*/
  *((float *)this + 0xF) = v15; /*0x97af20*/
  *((float *)this + 0x10) = v5; /*0x97af27*/
  v17 = z + v14; /*0x97af2e*/
  *((float *)this + 0x11) = v17; /*0x97af3d*/
  v7 = sub_7101F0(a2, (NiTransform *)&v15, this + 1); /*0x97af40*/
  *((_DWORD *)this + 0x12) = LODWORD(v7->rot.data[0][0]); /*0x97af47*/
  *((_DWORD *)this + 0x13) = LODWORD(v7->rot.data[0][1]); /*0x97af4d*/
  *((_DWORD *)this + 0x14) = LODWORD(v7->rot.data[0][2]); /*0x97af5e*/
  v8 = sub_7101F0(a2, (NiTransform *)&v15, this + 2); /*0x97af61*/
  *((_DWORD *)this + 0x15) = LODWORD(v8->rot.data[0][0]); /*0x97af68*/
  *((_DWORD *)this + 0x16) = LODWORD(v8->rot.data[0][1]); /*0x97af6e*/
  *((_DWORD *)this + 0x17) = LODWORD(v8->rot.data[0][2]); /*0x97af7f*/
  v9 = sub_7101F0(a2, (NiTransform *)&v15, this + 3); /*0x97af82*/
  v10 = *((float *)this + 0xC); /*0x97af87*/
  *((_DWORD *)this + 0x18) = LODWORD(v9->rot.data[0][0]); /*0x97af8c*/
  *((_DWORD *)this + 0x19) = LODWORD(v9->rot.data[0][1]); /*0x97af92*/
  result = LODWORD(v9->rot.data[0][2]); /*0x97af95*/
  *((_DWORD *)this + 0x1A) = result; /*0x97af98*/
  *((float *)this + 0x1B) = v10 * a2->scale; /*0x97af9e*/
  *((float *)this + 0x1C) = *((float *)this + 0xD) * a2->scale; /*0x97afa7*/
  *((float *)this + 0x1D) = *((float *)this + 0xE) * a2->scale; /*0x97afb1*/
  return result; /*0x97afb4*/
}
