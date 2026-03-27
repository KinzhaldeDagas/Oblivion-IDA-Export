char __thiscall SunDamageEffect_DoesHealthDmg(int this)
{
  MagicTarget *p_magicTarget; // eax

  if ( TESDataHandler_g_PlayerRef )
    p_magicTarget = &TESDataHandler_g_PlayerRef->super.super.magicTarget;
  else
    p_magicTarget = 0;
  if ( *(MagicTarget **)(this + 0x20) == p_magicTarget && sub_6A6AF0((float *)this) > flt_A34BA0 )
    return 1;
  else
    return SunDamageEffect_DoesHealthDmg_::Return_False();
}
