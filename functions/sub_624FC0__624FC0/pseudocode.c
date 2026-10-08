double __thiscall sub_624FC0(Actor *this)
{
  TESForm *ActorBaseForm; // eax

  ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x624fd4*/
  if ( OblivionDynamicCast( /*0x624fda*/
         ActorBaseForm,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
         &TESCreature `RTTI Type Descriptor',
         0) )
  {
    return (double)this->vtbl->GetActorValue(this, kActorVal_Armorer); /*0x624ff8*/
  }
  else
  {
    return (double)0; /*0x625007*/
  }
}
