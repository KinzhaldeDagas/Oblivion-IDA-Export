int __thiscall sub_787160(int *this, float a2)
{
  int result; // eax

  result = *this;
  if ( *this )
    *(float *)(result + 0xB4) = a2;
  return result;
}
