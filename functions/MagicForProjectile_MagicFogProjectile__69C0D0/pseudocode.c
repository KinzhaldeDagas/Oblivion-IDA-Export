MagicProjectile *__thiscall MagicForProjectile::MagicFogProjectile(MagicFogProjectile *a1)
{
  double v1; // st5
  double v2; // st6

  MagicProjectile::MagicProjectile(&a1->super, v1, v2);
  a1->unk090 = 0;
  a1->castingVFX = 0;
  a1->unk094 = 0;
  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicFogProjectile::`vftable'{for `MagicFogProjectile'};
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicFogProjectile::`vftable'{for `TESChildCell'};
  return &a1->super;
}
