int __thiscall sub_787180(int *this, float a2)
{
  int result; // eax

  result = *this;
  if ( *this )
    *(float *)(result + 0xB8) = a2;
  return result;
}
