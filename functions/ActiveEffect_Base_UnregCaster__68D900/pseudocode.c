char __thiscall ActiveEffect_Base_UnregCaster(ActiveEffect *this, MagicCaster *a2)
{
  char result; // al

  result = 0; /*0x68d904*/
  if ( a2 == this->members.caster ) /*0x68d909*/
  {
    this->members.caster = 0; /*0x68d90b*/
    return 1; /*0x68d90e*/
  }
  return result; /*0x68d910*/
}
