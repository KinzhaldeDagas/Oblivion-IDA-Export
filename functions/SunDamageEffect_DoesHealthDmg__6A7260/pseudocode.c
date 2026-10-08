char __thiscall SunDamageEffect_DoesHealthDmg(int this)
{
  MagicTarget *p_magicTarget; // eax

  if ( reference ) /*0x6a7260*/
    p_magicTarget = &reference->super.super.magicTarget; /*0x6a7269*/
  else
    p_magicTarget = 0; /*0x6a726e*/
  if ( *(MagicTarget **)(this + 0x20) == p_magicTarget && sub_6A6AF0((float *)this) > flt_A34BA0 ) /*0x6a7285*/
    return 1; /*0x6a7287*/
  else
    return SunDamageEffect_DoesHealthDmg_::Return_False(); /*0x6a7273*/
}
