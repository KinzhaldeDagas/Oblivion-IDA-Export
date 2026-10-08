//
// DX11 GPU-world inverse input (2026-09-27):718A80 transposes the original unscaled3x3 via710400, stores reciprocal scale, computes transposed-rotation*(-world position) via7101F0 with a float store per component, then applies reciprocal scale. 7FB6F0 constructs the row-vector inverse matrix from this result without renderer-origin subtraction. The live frontend must read raw geometry+64 NiTransform; inverting the rounded/scaled renderer matrix loses this native operation sequence. CPU reproduction is compared to captured copies of all three helpers in isolated tests; no native helper is invoked by production capture.
int __thiscall sub_718A80(float *this, NiTransform *a2)
{
  NiTransform *v4; // eax
  NiPoint3 v6; // [esp+1Ch] [ebp-3Ch] BYREF
  _BYTE v7[48]; // [esp+28h] [ebp-30h] BYREF
  float scale; // [esp+5Ch] [ebp+4h]
  NiPoint3 v9; // 0:^18.12

  qmemcpy(a2, sub_710400(this, (float *)&v7[0xC]), 0x24u); /*0x718aa0*/
  a2->scale = 1.0 / *(this + 0xC); /*0x718ab5*/
  v6.x = -*(this + 9); /*0x718abd*/
  v6.y = -*(this + 0xA); /*0x718ac6*/
  v6.z = -*(this + 0xB); /*0x718acf*/
  v4 = sub_7101F0(a2, (NiTransform *)v7, &v6); /*0x718ad3*/
  scale = a2->scale; /*0x718adb*/
  v9.x = scale * v4->rot.data[0][0]; /*0x718aea*/
  v9.y = v4->rot.data[0][1] * scale; /*0x718af3*/
  v9.z = scale * v4->rot.data[0][2]; /*0x718b08*/
  a2->pos = v9; /*0x718b10*/
  return LODWORD(v9.x); /*0x718b13*/
}
