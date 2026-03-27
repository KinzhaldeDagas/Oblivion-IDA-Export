NiSkinData *__thiscall NiSkinData::NiSkinData(NiSkinData *this, int a2, int a3, const void *a4, int a5)
{
  NiObject_constr((NiObject *)this);
  *(_DWORD *)this = &NiSkinData::`vftable';
  *((_DWORD *)this + 2) = 0;
  qmemcpy((char *)this + 0xC, a4, 0x34u);
  *((_DWORD *)this + 0x11) = a3;
  *((_DWORD *)this + 0x10) = a2;
  sub_72F2F0(this, a5);
  return this;
}
