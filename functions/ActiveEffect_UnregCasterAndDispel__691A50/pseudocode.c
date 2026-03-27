char __userpurge ActiveEffect_UnregCasterAndDispel@<al>(
        ActiveEffect *this@<ecx>,
        char a2@<bpl>,
        double a3@<st0>,
        MagicCaster *a4)
{
  char active; // bl

  active = ActiveEffect_Base_UnregCaster(this, a4);
  if ( active )
    ActiveEffect_Base_Remove(this, a2, a3, 1);
  return active;
}
