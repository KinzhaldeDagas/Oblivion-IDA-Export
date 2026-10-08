int __thiscall sub_96C4C0(float *this, int a2, NiTransform *a3)
{
  NiTransform *v5; // eax
  int result; // eax
  double z; // st7
  float v8; // [esp+Ch] [ebp-18h]
  float v9; // [esp+10h] [ebp-14h]
  float v10; // [esp+14h] [ebp-10h]
  float v11; // [esp+18h] [ebp-Ch] BYREF
  int v12; // [esp+1Ch] [ebp-8h]
  float v13; // [esp+20h] [ebp-4h]
  float scale; // [esp+28h] [ebp+4h]

  v5 = sub_7101F0(a3, (NiTransform *)&v11, (NiPoint3 *)(a2 + 4)); /*0x96c4db*/
  scale = a3->scale; /*0x96c4e3*/
  v8 = scale * v5->rot.data[0][0]; /*0x96c4ef*/
  v9 = v5->rot.data[0][1] * scale; /*0x96c4f8*/
  v10 = scale * v5->rot.data[0][2]; /*0x96c4ff*/
  v11 = a3->pos.x + v8; /*0x96c50a*/
  *(float *)&v12 = a3->pos.y + v9; /*0x96c519*/
  result = v12; /*0x96c51d*/
  z = a3->pos.z; /*0x96c521*/
  *(this + 1) = v11; /*0x96c524*/
  *((_DWORD *)this + 2) = result; /*0x96c52b*/
  v13 = z + v10; /*0x96c52e*/
  *(this + 3) = v13; /*0x96c536*/
  *(this + 4) = *(float *)(a2 + 0x10) * a3->scale; /*0x96c53f*/
  return result; /*0x96c542*/
}
