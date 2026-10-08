BOOL __thiscall sub_718B20(NiPoint3 *this, NiPoint3 *a2)
{
  return !sub_70FF20(&this->x, &a2->x) || NiPoint3__NotEqual(this + 3, a2 + 3) || a2[4].x != *((float *)this + 0xC); /*0x718b51*/
}
