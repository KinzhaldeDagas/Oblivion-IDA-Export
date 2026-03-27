char __thiscall ActiveEffect_Base_UnregCaster(ActiveEffect *this, MagicCaster *a2)
{
  char result; // al

  result = 0;
  if ( a2 == this->members.caster )
  {
    this->members.caster = 0;
    return 1;
  }
  return result;
}
