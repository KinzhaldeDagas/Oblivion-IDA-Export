void __thiscall sub_8AA420(int this, int a2)
{
  double v2; // st7

  if ( (*(_BYTE *)(this + 9) & 1) != 0 && *(float *)(this + 0x58) >= 0.0 )
  {
    *(float *)(a2 + 0x14) = *(float *)(this + 0x58);
    *(float *)(a2 + 0x18) = *(float *)(this + 0x5C);
    v2 = flt_A30634;
    *(float *)(this + 0x5C) = flt_A30634;
    *(float *)(this + 0x58) = v2;
  }
}
