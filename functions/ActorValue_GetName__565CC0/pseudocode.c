// Return the localized actor-value display name through g_actorValueNameSettings. Native skills occupy the contiguous SkillActorValue range 0x0C..0x20.
int __cdecl ActorValue_GetName(unsigned int a1)
{
  if ( a1 > 0x27 ) /*0x565cc7*/
    return ActorValue_GetName_::HighActorVal(a1);// This is the generic ActorValue name API used by gameplay/UI consumers, including effects and requirements. A process-wide Blade->Long Blade substitution changes native Blade semantics outside sidecar-owned rows; scope sidecar labels to their exact UI call sites. /*0x565cc7*/
  else
    return ActorValue_GetName_::LowActorVal(a1); /*0x565cc8*/
}
