float *__thiscall sub_88EB60(float *this)
{
  sub_897600(this);
  *(_DWORD *)this = &bhkBlendCollisionObject::`vftable';
  ++dword_BA7A1C;
  *(this + 5) = 0.0;
  *((_WORD *)this + 6) &= ~0x100u;
  *(this + 6) = 1.0;
  *(this + 8) = 0.0;
  *(this + 9) = 0.0;
  *((_DWORD *)this + 7) = 8;
  return this;
}
