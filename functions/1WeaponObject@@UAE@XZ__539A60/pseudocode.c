void __thiscall WeaponObject::~WeaponObject(Atmosphere *this)
{
  NiAVObject *PointerAtOffset08; // eax
  Ni2DBuffer **v3; // esi
  Ni2DBuffer *v4; // eax

  this->__vftbl = (SkyObjectVtbl *)&WeaponObject::`vftable'; /*0x539a89*/
  PointerAtOffset08 = Shared_GetPointerAtOffset08(this); /*0x539a97*/
  v3 = (Ni2DBuffer **)PointerAtOffset08; /*0x539a9c*/
  if ( PointerAtOffset08 ) /*0x539aa0*/
  {
    v4 = (Ni2DBuffer *)sub_700010(PointerAtOffset08, (int)&MEMORY[0xBA7F3C]); /*0x539aa9*/
    if ( v4 ) /*0x539ab0*/
      NiObjectNET_RemoveController(v3, v4); /*0x539ab5*/
  }
  sub_88EA60((bhkNiCollisionObject *)this); /*0x539ac4*/
}
