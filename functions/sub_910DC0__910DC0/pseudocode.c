bool *__thiscall sub_910DC0(float *this, bool *a2)
{
  bool *result; // eax

  result = a2;
  *a2 = *(this + 3) > (double)*(float *)&SrcStr;
  return result;
}
