char __userpurge ActiveEffect_UnregCasterAndDispel@<al>(
        ActiveEffect *this@<ecx>,
        char a2@<bpl>,
        double a3@<st0>,
        MagicCaster *a4)
{
  char active; // bl

  active = ActiveEffect_Base_UnregCaster(this, a4); /*0x691a5e*/
  if ( active ) /*0x691a62*/
    ActiveEffect_Base_Remove(this, a2, a3, 1); /*0x691a68*/
  return active; /*0x691a6d*/
}
