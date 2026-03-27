float *__thiscall sub_7572B0(float *this)
{
  double v2; // st7
  float v4; // [esp+8h] [ebp-Ch]
  float v5; // [esp+Ch] [ebp-8h]
  float v6; // [esp+10h] [ebp-4h]

  sub_75E800(this);
  *(_DWORD *)this = &NiPSysGravityFieldModifier::`vftable';
  v4 = -*(float *)&dword_B258DC;
  v5 = -*(float *)&qword_B258E0;
  v2 = *((float *)&qword_B258E0 + 1);
  *(this + 0xC) = v4;
  *(this + 0xF) = v4;
  v6 = -v2;
  *(this + 0xD) = v5;
  *(this + 0x10) = v5;
  *(this + 0xE) = v6;
  *(this + 0x11) = v6;
  sub_43F350(this + 0xF);
  return this;
}
