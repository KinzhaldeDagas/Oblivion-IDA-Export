int __usercall MagicTarget_ProcessEffects_::ActvEffLoop_CheckEffect@<eax>(
        int a1@<eax>,
        ActiveEffect **a2@<ebp>,
        int a3@<edi>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10)
{
  ActiveEffect *v10; // esi

  v10 = *a2; /*0x6a2331*/
  if ( !*a2 || HIBYTE(a8) && v10->members.effectItem->setting->effectCode != 0x46464553 ) /*0x6a2351*/
    JUMPOUT(0x6A239C); /*0x6a239c*/
  return MagicTarget_ProcessEffects_::ProcessEffect(a1, (char)a2, a3, v10, a4, a5, a6, a7, a8, a9, a10);
}
