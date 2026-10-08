void __thiscall LightEffect_Apply(LightEffect_DecodedLayout *self)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // eax

  target = self->base_00.members.target; /*0x694af0*/
  if ( target ) /*0x694af5*/
  {
    ParentActor = MagicTarget_GetParentActor(target); /*0x694af7*/
    if ( ParentActor ) /*0x694afe*/
      MagicTarget_ReconcileStrongestLightEffect(&ParentActor->members.magicTarget);// Apply re-evaluates the parent actor's active LGHT effects and creates/retains only the greatest-magnitude LightEffect light. /*0x694b04*/
  }
}
