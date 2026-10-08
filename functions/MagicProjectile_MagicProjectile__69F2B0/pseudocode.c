MagicProjectile *__usercall MagicProjectile::MagicProjectile@<eax>(
        MagicProjectile *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>)
{
  HighProcess *v4; // eax
  HighProcess *v5; // eax
  TESForm *v6; // eax

  MobilObject_constr((TESObjectREFR *)a1); /*0x69f2db*/
  a1->super.super.super.flags |= 0x200000u; /*0x69f2e2*/
  a1->elapsedTime = 0.0; /*0x69f2e9*/
  a1->speed = 0.0; /*0x69f2ee*/
  a1->distanceTraveled = 0.0; /*0x69f2f6*/
  a1->super.vtbl = (MobileObjectVtbl *)&MagicProjectile::`vftable'{for `MagicProjectile'}; /*0x69f2fd*/
  a1->super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicProjectile::`vftable'{for `TESChildCell'}; /*0x69f303*/
  a1->caster = 0; /*0x69f30a*/
  a1->magicItem = 0; /*0x69f30d*/
  a1->effectCode = 0; /*0x69f310*/
  a1->effectSetting = 0; /*0x69f313*/
  v4 = (HighProcess *)FormHeapAlloc(0x2ECu); /*0x69f316*/
  if ( v4 ) /*0x69f329*/
    v5 = HighProcess::HighProcess(v4); /*0x69f32d*/
  else
    v5 = 0; /*0x69f334*/
  a1->super.process = v5; /*0x69f33c*/
  v6 = (TESForm *)sub_69F100(a2, a3); /*0x69f33f*/
  TESObjectREFR_SetBaseForm((TESObjectREFR *)a1, v6); /*0x69f347*/
  return a1; /*0x69f34e*/
}
