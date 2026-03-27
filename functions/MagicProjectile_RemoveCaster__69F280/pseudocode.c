char __thiscall MagicProjectile_RemoveCaster(MagicBallProjectile *this, MagicCaster *a2)
{
  char result; // al

  result = 0;
  if ( a2 == this->super.caster )
  {
    this->super.caster = 0;
    ((void (__thiscall *)(MagicBallProjectile *, int))this->super.super.vtbl->super.super.Unk_23)(this, 1);
    return 1;
  }
  return result;
}
