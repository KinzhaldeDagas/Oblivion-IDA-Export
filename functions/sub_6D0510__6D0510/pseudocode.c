char __thiscall sub_6D0510(int this)
{
  char result; // al

  result = *(_BYTE *)(this + 8) >> 5;
  if ( (*(_BYTE *)(this + 8) & 0x20) == 0 )
  {
    *(float *)(this + 0x14) = 0.0;
    *(float *)(this + 0x18) = 0.0;
  }
  return result;
}
