int __thiscall sub_7DB1B0(WaterShader *this, int a2, int a3, int a4, int a5, int a6, int a7, float *a8, int a9)
{
  int v10; // [esp+0h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+8h] [ebp-14h]

  sub_765480(this->super.member.super.super.D3DRenderer, a8, 0);
  *(float *)&v10 = *(float *)&dword_B46658 - CameraWorldTranslate;
  *(float *)&v11 = *(float *)&dword_B4665C - flt_B3F930;
  *(float *)&v12 = *(float *)&dword_B46660 - flt_B3F934;
  dword_B45DD4 = v10;
  dword_B45DD8 = v11;
  dword_B45DDC = v12;
  *(float *)&dword_B45DE0 = 0.0;
  return 0;
}
