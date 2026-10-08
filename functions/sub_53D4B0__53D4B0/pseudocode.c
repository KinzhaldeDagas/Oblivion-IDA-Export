// ODismemberment: __thiscall NiTransform point transform helper. Plugin hit capture must pass transform in ECX; cdecl here crashes on actor hits.
float *__thiscall NiTransform_TransformPoint(NiTransform *this, float *a2, NiPoint3 *a3)
{
  NiTransform *v4; // eax
  double v5; // st7
  float scale; // [esp+4h] [ebp-1Ch]
  float v8; // [esp+8h] [ebp-18h]
  float v9; // [esp+Ch] [ebp-14h]
  float v10; // [esp+10h] [ebp-10h]
  char v11; // [esp+14h] [ebp-Ch] BYREF

  scale = this->scale; /*0x53d4c2*/
  v4 = sub_7101F0(this, (NiTransform *)&v11, a3); /*0x53d4c9*/
  v8 = v4->rot.data[0][0] * scale; /*0x53d4da*/
  v9 = v4->rot.data[0][1] * scale; /*0x53d4e3*/
  v5 = scale * v4->rot.data[0][2]; /*0x53d4e7*/
  v10 = v5; /*0x53d4ee*/
  *a2 = this->pos.x + v8; /*0x53d4f9*/
  a2[1] = this->pos.y + v9; /*0x53d502*/
  a2[2] = this->pos.z + v10; /*0x53d50d*/
  return a2; /*0x53d510*/
}
