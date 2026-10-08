TESRace *__thiscall Actor::GetRaceIfNPC(Actor *this)
{
  TESNPC *v2; // eax

  if ( Actor_IsNPC(this) && (v2 = (TESNPC *)this->vtbl->super.super.GetBaseForm(this)) != 0 ) /*0x5e330a*/
    return v2->member.form.race; /*0x5e330c*/
  else
    return 0; /*0x5e3314*/
}
