bool __thiscall sub_72AC80(NiTriBasedGeomData *this, int a2)
{
  return sub_71FDE0(this, a2)
      && *((_WORD *)this + 0x2C) == *(_WORD *)(a2 + 0x58)
      && *((_WORD *)this + 0x2D) == *(_WORD *)(a2 + 0x5A);
}
