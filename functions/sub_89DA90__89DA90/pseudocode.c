double __thiscall sub_89DA90(float *this)
{
  if ( *(this + 0x30) == *(float *)&SrcStr )
    return *(float *)&SrcStr;
  else
    return fConstant_1 / *(this + 0x30);
}
