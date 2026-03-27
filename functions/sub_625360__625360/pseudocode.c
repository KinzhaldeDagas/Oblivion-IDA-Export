double __thiscall sub_625360(Actor *this)
{
  TESForm *ActorBaseForm; // eax
  double result; // st7

  ActorBaseForm = Actor_GetActorBaseForm(this, 0);
  if ( !ActorBaseForm )
    return flt_B3A4C0;
  result = *(float *)&ActorBaseForm[0xB].member.type;
  if ( result == 0.0 )
    return flt_B3A4C0;
  return result;
}
