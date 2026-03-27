bool __thiscall sub_6FAC70(float *this, int a2)
{
  bool result; // al

  result = sub_752CD0(this, a2);
  if ( result )
    return *(float *)(a2 + 0x18) == *(this + 6);
  return result;
}
