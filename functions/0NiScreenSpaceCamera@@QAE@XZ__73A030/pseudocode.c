NiScreenSpaceCamera *__thiscall NiScreenSpaceCamera::NiScreenSpaceCamera(NiScreenSpaceCamera *this)
{
  sub_70D590((NiCamera *)this);
  *(_DWORD *)this = &NiScreenSpaceCamera::`vftable';
  sub_739710((_WORD *)this + 0x92, 5u, 5);
  sub_7394A0((_WORD *)this + 0x9A, 5u, 5);
  *((_BYTE *)this + 0x104) = 1;
  unknown_libname_9_0((NiCamera *)this);
  sub_70CC70(this);
  return this;
}
