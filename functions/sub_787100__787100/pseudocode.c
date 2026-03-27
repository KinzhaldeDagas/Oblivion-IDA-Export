int __thiscall sub_787100(int *this, float a2)
{
  int result; // eax

  result = *this;
  if ( *this )
    *(float *)(result + 0x88) = a2;
  return result;
}
