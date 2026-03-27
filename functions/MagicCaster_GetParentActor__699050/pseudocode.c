Actor *__thiscall MagicCaster_GetParentActor(MagicCaster *this)
{
  TESObjectREFR *v2; // eax

  v2 = this->vtbl->GetParentRefr(this);
  if ( v2 && v2->vtbl->IsActor(v2) )
    return (Actor *)((char *)this - 0x5C);      // //Return Actor from MagicCaster
  else
    return 0;
}
