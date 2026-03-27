char __thiscall sub_6D5440(float *this, float a2)
{
  char result; // al

  result = sub_6C36B0(this, a2);
  if ( !result )
    *((_BYTE *)this + 0x54) = 1;
  return result;
}
