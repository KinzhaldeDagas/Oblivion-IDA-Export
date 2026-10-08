char __thiscall sub_6D0510(int this)
{
  char result; // al

  result = *(_BYTE *)(this + 8) >> 5; /*0x6d0513*/
  if ( (*(_BYTE *)(this + 8) & 0x20) == 0 ) /*0x6d0518*/
  {
    *(float *)(this + 0x14) = 0.0; /*0x6d051c*/
    *(float *)(this + 0x18) = 0.0; /*0x6d051f*/
  }
  return result; /*0x6d0522*/
}
