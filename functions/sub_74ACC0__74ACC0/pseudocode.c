float *__thiscall sub_74ACC0(float *this)
{
  sub_74EDA0(this); /*0x74acc3*/
  *(_DWORD *)this = &NiPSysMeshEmitter::`vftable'; /*0x74accf*/
  sub_74A820((_WORD *)this + 0x28, 1u, 2); /*0x74acd5*/
  *((_WORD *)this + 0x34) = 0; /*0x74acdc*/
  *((_WORD *)this + 0x35) = 0; /*0x74ace0*/
  *((_WORD *)this + 0x36) = 0; /*0x74ace4*/
  *(this + 0x19) = 0.0; /*0x74ace8*/
  *((_DWORD *)this + 0x18) = &NiTArray<NiPointer<NiPSysMeshEmitter::NiSkinnedEmitterData>>::`vftable'; /*0x74aceb*/
  *((_WORD *)this + 0x37) = 1; /*0x74acf2*/
  *(this + 0x1C) = 0.0; /*0x74acf8*/
  *(this + 0x1D) = 0.0; /*0x74acfb*/
  *(this + 0x1E) = stru_B258D0.x; /*0x74ad03*/
  *(this + 0x1F) = stru_B258D0.y; /*0x74ad0c*/
  *(this + 0x20) = stru_B258D0.z; /*0x74ad15*/
  return this; /*0x74ad1d*/
}
