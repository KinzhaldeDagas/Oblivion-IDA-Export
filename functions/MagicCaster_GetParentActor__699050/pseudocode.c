Actor *__thiscall MagicCaster_GetParentActor(MagicCaster *this)
{
  TESObjectREFR *v2; // eax

  v2 = this->vtbl->GetParentRefr(this); /*0x699058*/
  if ( v2 && v2->vtbl->IsActor(v2) ) /*0x699068*/
    return (Actor *)((char *)this - 0x5C);      // //Return Actor from MagicCaster /*0x69906e*/
  else
    return 0; /*0x699073*/
}
