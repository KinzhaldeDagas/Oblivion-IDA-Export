float *__thiscall sub_7572B0(float *this)
{
  double z; // st7
  float v4; // [esp+8h] [ebp-Ch]
  float v5; // [esp+Ch] [ebp-8h]
  float v6; // [esp+10h] [ebp-4h]

  sub_75E800((NiObject *)this); /*0x7572b7*/
  *(_DWORD *)this = &NiPSysGravityFieldModifier::`vftable'; /*0x7572bc*/
  v4 = -stru_B258DC.x; /*0x7572cd*/
  v5 = -stru_B258DC.y; /*0x7572dd*/
  z = stru_B258DC.z; /*0x7572e5*/
  *(this + 0xC) = v4; /*0x7572eb*/
  *(this + 0xF) = v4; /*0x7572f0*/
  v6 = -z; /*0x7572f2*/
  *(this + 0xD) = v5; /*0x7572fa*/
  *(this + 0x10) = v5; /*0x7572fd*/
  *(this + 0xE) = v6; /*0x757300*/
  *(this + 0x11) = v6; /*0x757303*/
  Vector3_NormalizeInPlace(this + 0xF); /*0x757306*/
  return this; /*0x75730d*/
}
