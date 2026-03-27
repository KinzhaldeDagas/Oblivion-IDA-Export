BOOL __thiscall sub_8BB380(FILE **this, int Offset, int Origin)
{
  return fseek(*(this + 2), Offset, Origin) != 0;
}
