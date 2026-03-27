void __thiscall WeaponObject::~WeaponObject(Atmosphere *this)
{
  NiAVObject *v2; // eax
  Ni2DBuffer **v3; // esi
  Ni2DBuffer *v4; // eax

  this->__vftbl = (SkyObjectVtbl *)&WeaponObject::`vftable';
  v2 = sub_452A60(this);
  v3 = (Ni2DBuffer **)v2;
  if ( v2 )
  {
    v4 = (Ni2DBuffer *)sub_700010(v2, (int)dword_BA7F3C);
    if ( v4 )
      sub_6FFE90(v3, v4);
  }
  sub_88EA60((bhkNiCollisionObject *)this);
}
