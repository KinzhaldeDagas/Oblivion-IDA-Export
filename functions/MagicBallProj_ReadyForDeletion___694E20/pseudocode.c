BOOL __thiscall MagicBallProj_ReadyForDeletion__(MagicBallProjectile *this)
{
  return this->unk080 != 2 && (this->super.super.super.super.flags & 0x20) == 0;
}
