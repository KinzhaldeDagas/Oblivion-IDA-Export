WeaponObject *__thiscall WeaponObject::WeaponObject(WeaponObject *this, float a2, float a3, NiAVObject *a4, int a5)
{
  sub_88EBD0((float *)this, a4);
  *(_DWORD *)this = &WeaponObject::`vftable';
  sub_539E00((float *)this, a2, a3, a5, a4);
  return this;
}
