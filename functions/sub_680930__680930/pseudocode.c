float *__thiscall sub_680930(unsigned __int16 *this, float a2)
{
  float *result; // eax

  if ( !_finite(a2) || !_finite(a2) || !_finite(a2) || _isnan(a2) || _isnan(a2) || _isnan(a2) )
  {
    PrintError("Corrupt goal, setting to 0.");
    a2 = 0.0;
  }
  result = (float *)*this;
  if ( (unsigned __int16)result >= (unsigned __int16)word_B3BF04 )
  {
    *(float *)0 = a2;
  }
  else
  {
    result = (float *)((char *)dword_B3BF00 + 0x10 * (unsigned __int16)result);
    *result = a2;
  }
  return result;
}
