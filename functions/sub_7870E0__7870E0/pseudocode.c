int __thiscall sub_7870E0(int *this, float a2)
{
  int result; // eax

  result = *this;
  if ( *this )
    *(float *)(result + 0x8C) = a2;
  return result;
}
