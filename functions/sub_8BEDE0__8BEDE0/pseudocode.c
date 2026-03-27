int __thiscall sub_8BEDE0(_DWORD *this, float a2)
{
  int result; // eax

  result = *(this + 1);
  if ( result )
    *(float *)(result + 0x14) = a2;
  return result;
}
