// Pass227: NiScreenSpaceCamera constructor initializes +0x134 screen-texture array with capacity/grow size 5.
NiScreenSpaceCamera *__thiscall NiScreenSpaceCamera::NiScreenSpaceCamera(NiScreenSpaceCamera *this)
{
  sub_70D590((NiCamera *)this); /*0x73a058*/
  *(_DWORD *)this = &NiScreenSpaceCamera::`vftable'; /*0x73a06f*/
  sub_739710((_WORD *)this + 0x92, 5u, 5); /*0x73a075*/
  sub_7394A0((_WORD *)this + 0x9A, 5u, 5); /*0x73a089*/
  *((_BYTE *)this + 0x104) = 1; /*0x73a095*/
  unknown_libname_9_0((NiCamera *)this); /*0x73a09c*/
  sub_70CC70(this); /*0x73a0a3*/
  return this; /*0x73a0aa*/
}
