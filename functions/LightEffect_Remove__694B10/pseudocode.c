void __thiscall LightEffect_Remove(LightEffect_DecodedLayout *self)
{
  MagicTarget *target; // ecx
  Actor *ParentActor; // eax

  LightEffect_TeardownTransientPointLight(self);// Remove first tears down this LightEffect's transient point light. /*0x694b13*/
  target = self->base_00.members.target; /*0x694b18*/
  if ( target ) /*0x694b1e*/
  {
    ParentActor = MagicTarget_GetParentActor(target); /*0x694b20*/
    if ( ParentActor ) /*0x694b27*/
      MagicTarget_ReconcileStrongestLightEffect(&ParentActor->members.magicTarget);// After removal, re-evaluate the remaining LGHT effects so the next greatest-magnitude effect may own the actor's single transient light. /*0x694b2d*/
  }
}
