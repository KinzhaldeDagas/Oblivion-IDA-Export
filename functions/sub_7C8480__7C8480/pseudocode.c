double __thiscall sub_7C8480(float *this)
{
  if ( *(this + 0x3A) >= 0.0 && flt_A31C80 <= (double)*(this + 0x3A) )
  {
    return (float)(flt_A31C80 / dbl_A3F3E8);
  }
  else if ( *(this + 0x3A) >= 0.0 )
  {
    return (float)(*(this + 0x3A) / dbl_A3F3E8);
  }
  else
  {
    return (float)((float)0.0 / dbl_A3F3E8);
  }
}
