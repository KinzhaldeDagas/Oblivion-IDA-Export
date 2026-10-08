WeaponObject *__thiscall WeaponObject::WeaponObject(WeaponObject *this, float a2, float a3, NiAVObject *a4, int a5)
{
  sub_88EBD0((NiObject *)this, a4); /*0x53a15e*/
  *(_DWORD *)this = &WeaponObject::`vftable'; /*0x53a185*/
  sub_539E00((float *)this, a2, a3, a5, a4); /*0x53a18b*/
  return this; /*0x53a192*/
}
