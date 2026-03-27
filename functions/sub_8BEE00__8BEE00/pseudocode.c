int __thiscall sub_8BEE00(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 1);
  if ( result )
    *(float *)(result + 0x10) = a2;
  return result;
}
