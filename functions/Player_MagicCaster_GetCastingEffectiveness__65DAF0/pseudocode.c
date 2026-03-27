double __userpurge Player_MagicCaster_GetCastingEffectiveness@<st0>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        signed int a9)
{
  if ( g_GodMode )
    return MagicCaster_GeCastingtEffectiveness(a4, COERCE_INT(0.0));
  else
    return Player_MagicCaster_GetCastingEffectiveness_::GetFatigue(a2, a3, a1, 0.0, a4, a5, a6, a7, a8, a9);
}
