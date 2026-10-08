bool *__thiscall sub_910DC0(float *this, bool *a2)
{
  bool *result; // eax

  result = a2; /*0x910dce*/
  *a2 = *(this + 3) > (double)*(float *)&SrcStr; /*0x910dda*/
  return result; /*0x910dd7*/
}
