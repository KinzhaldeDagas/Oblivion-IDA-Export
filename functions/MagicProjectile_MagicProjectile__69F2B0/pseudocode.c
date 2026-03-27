MagicProjectile *__usercall MagicProjectile::MagicProjectile@<eax>(
        MagicProjectile *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>)
{
  HighProcess *v4; // eax
  HighProcess *v5; // eax
  int v6; // eax

  MobilObject_constr((TESObjectREFR *)a1);
  a1->super.super.super.flags |= 0x200000u;
  a1->elapsedTime = 0.0;
  a1->speed = 0.0;
  a1->distanceTraveled = 0.0;
  a1->super.vtbl = (MobileObjectVtbl *)&MagicProjectile::`vftable'{for `MagicProjectile'};
  a1->super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicProjectile::`vftable'{for `TESChildCell'};
  a1->caster = 0;
  a1->magicItem = 0;
  a1->effectCode = 0;
  a1->effectSetting = 0;
  v4 = (HighProcess *)FormHeapAlloc(0x2ECu);
  if ( v4 )
    v5 = HighProcess::HighProcess(v4);
  else
    v5 = 0;
  a1->super.process = v5;
  v6 = sub_69F100(a2, a3);
  TESObjectREFR_SetBaseForm((TESObjectREFR *)a1, v6);
  return a1;
}
