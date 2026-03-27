bool __stdcall sub_452430(float *a1)
{
  return !_finite(*a1) || !_finite(a1[1]) || !_finite(a1[2]) || _isnan(*a1) || _isnan(a1[1]) || _isnan(a1[2]);
}
