double __thiscall sub_625360(Actor *this)
{
  TESForm *ActorBaseForm; // eax
  double result; // st7

  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x625363*/
  if ( !ActorBaseForm ) /*0x62536a*/
    return unk_B3A4C0; /*0x62536a*/
  result = *(float *)&ActorBaseForm[0xB].member.type; /*0x62537e*/
  if ( result == 0.0 ) /*0x625383*/
    return unk_B3A4C0; /*0x625390*/
  return result; /*0x625394*/
}
