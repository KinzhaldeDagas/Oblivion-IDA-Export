double __thiscall sub_7C8480(float *this)
{
  if ( *(this + 0x3A) >= 0.0 && flt_A31C80 <= (double)*(this + 0x3A) ) /*0x7c84ab*/
  {
    return (float)(flt_A31C80 / dbl_A3F3E8); /*0x7c84ff*/
  }
  else if ( *(this + 0x3A) >= 0.0 ) /*0x7c84bc*/
  {
    return (float)(*(this + 0x3A) / dbl_A3F3E8); /*0x7c84e6*/
  }
  else
  {
    return (float)((float)0.0 / dbl_A3F3E8); /*0x7c84cc*/
  }
}
