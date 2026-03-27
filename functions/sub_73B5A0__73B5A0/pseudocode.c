bool __thiscall sub_73B5A0(NiTriBasedGeomData *this, int a2)
{
  return sub_719E80(this, a2)
      && *((_WORD *)this + 0x28) == *(_WORD *)(a2 + 0x50)
      && *((_WORD *)this + 0x29) == *(_WORD *)(a2 + 0x52);
}
