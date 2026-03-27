MagicBallProjectile *__usercall MagicBallProjectile::MagicBallProjectile@<eax>(
        MagicBallProjectile *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>)
{
  MagicProjectile::MagicProjectile(&a1->super, a2, a3);
  a1->unk088 = 0;
  a1->unk08C = 0;
  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicBallProjectile::`vftable'{for `MagicBallProjectile'};
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicBallProjectile::`vftable'{for `TESChildCell'};
  return a1;
}
