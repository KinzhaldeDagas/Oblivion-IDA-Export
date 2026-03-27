TESRace *__thiscall Actor::GetRaceIfNPC(Actor *this)
{
  TESNPC *v2; // eax

  if ( Actor_IsNPC(this) && (v2 = (TESNPC *)this->vtbl->super.super.GetBaseForm(this)) != 0 )
    return v2->member.form.race;
  else
    return 0;
}
