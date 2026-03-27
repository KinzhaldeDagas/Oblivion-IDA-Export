double __thiscall sub_8B0C30(signed int *this, int a2, signed int a3)
{
  return *(float *)(*(this + 0x18)
                  + 0xC * (a2 + *(this + 3) * Double_To_SInt32((double)*(this + 4) - dbl_A2F928 - (double)a3))
                  + 8);
}
