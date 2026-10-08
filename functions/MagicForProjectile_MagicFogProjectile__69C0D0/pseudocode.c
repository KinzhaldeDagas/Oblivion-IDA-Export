MagicProjectile *__thiscall MagicForProjectile::MagicFogProjectile(MagicFogProjectile *a1)
{
  double v1; // st5
  double v2; // st6

  MagicProjectile::MagicProjectile(&a1->super, v1, v2); /*0x69c0d3*/
  a1->unk090 = 0; /*0x69c0da*/
  a1->castingVFX = 0; /*0x69c0e0*/
  a1->unk094 = 0; /*0x69c0e6*/
  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicFogProjectile::`vftable'{for `MagicFogProjectile'}; /*0x69c0ec*/
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicFogProjectile::`vftable'{for `TESChildCell'}; /*0x69c0f2*/
  return &a1->super; /*0x69c0fb*/
}
