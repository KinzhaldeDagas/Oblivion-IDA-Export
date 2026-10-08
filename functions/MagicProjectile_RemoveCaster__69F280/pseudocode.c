char __thiscall MagicProjectile_RemoveCaster(MagicBallProjectile *this, MagicCaster *a2)
{
  char result; // al

  result = 0; /*0x69f284*/
  if ( a2 == this->super.caster ) /*0x69f289*/
  {
    this->super.caster = 0; /*0x69f28c*/
    ((void (__thiscall *)(MagicBallProjectile *, int))this->super.super.vtbl->super.super.Unk_23)(this, 1); /*0x69f29b*/
    return 1; /*0x69f29d*/
  }
  return result; /*0x69f2a0*/
}
