// Verified no-argument target method: walks the EffectNode chain and calls ActiveEffect_Base_Remove(effect, 1) for each nonnull entry. It marks/flushes effect termination but leaves list unlink, PostRemoveEffect, and deleting destruction to the process loop or explicit removal paths.
void __thiscall MagicTarget_RemoveAllEffects(MagicTarget *this)
{
  char v1; // bp
  double v2; // st7
  EffectNode *v3; // esi
  ActiveEffect *data; // ecx
  bool v5; // zf

  v3 = this->vtbl->GetActiveEffectList(this); /*0x6a2168*/
  while ( v3 ) /*0x6a216c*/
  {
    if ( !v3->next && !v3->data ) /*0x6a2177*/
      break; /*0x6a2179*/
    data = v3->data; /*0x6a217b*/
    v5 = v3->data == 0; /*0x6a217d*/
    v3 = v3->next; /*0x6a217f*/
    if ( !v5 ) /*0x6a2181*/
      v2 = ActiveEffect_Base_Remove(data, v1, v2, 1);// Verified RemoveAllEffects walks EffectNode entries and requests termination with immediate effect cleanup. It does not itself unlink entries; the regular MagicTarget_ProcessEffects loop owns node removal and target PostRemoveEffect/destruction. /*0x6a2185*/
  }
}
