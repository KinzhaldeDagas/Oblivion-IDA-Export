signed int __thiscall sub_8F5B40(int *this)
{
  int v1; // eax

  v1 = *(this + 7);
  if ( v1 < 0 )
    return 1;
  *(this + 4) = v1;
  return 0;
}
