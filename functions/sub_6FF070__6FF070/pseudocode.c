bool __thiscall sub_6FF070(float *this, int a2)
{
  bool result; // al

  result = sub_752CD0(this, a2);
  if ( result )
    return *(this + 8) == *(float *)(a2 + 0x20);
  return result;
}
