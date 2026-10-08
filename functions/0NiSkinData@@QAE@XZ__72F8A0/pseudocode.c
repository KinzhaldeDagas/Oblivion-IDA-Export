NiSkinData *__thiscall NiSkinData::NiSkinData(NiSkinData *this, int a2, int a3, const void *a4, int a5)
{
  NiObject_constr((NiObject *)this); /*0x72f8ca*/
  *(_DWORD *)this = &NiSkinData::`vftable'; /*0x72f8d1*/
  *((_DWORD *)this + 2) = 0; /*0x72f8db*/
  qmemcpy((char *)this + 0xC, a4, 0x34u); /*0x72f8f2*/
  *((_DWORD *)this + 0x11) = a3; /*0x72f8f8*/
  *((_DWORD *)this + 0x10) = a2; /*0x72f903*/
  sub_72F2F0(this, a5); /*0x72f906*/
  return this; /*0x72f90d*/
}
