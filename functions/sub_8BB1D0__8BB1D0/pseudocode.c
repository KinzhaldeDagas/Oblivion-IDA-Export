BOOL __thiscall sub_8BB1D0(FILE **this, int Offset, int Origin)
{
  return fseek(*(this + 3), Offset, Origin) != 0;
}
