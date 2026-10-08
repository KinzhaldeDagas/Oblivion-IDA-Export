// std::fill specialization for float: assigns *value across [first,last) and returns last. Shipped Oblivion callers use it for initialized portions of vector<float> growth/reuse.
float *__cdecl OB_stVectorFloat_CopyFillRange_010201A0(float *first, float *last, const float *value)
{
  float *cursor; // eax

  for ( cursor = first; cursor != last; cursor[0xFFFFFFFF] = *value ) /*0x523afa*/
    ++cursor; /*0x523b02*/
  return cursor; /*0x523b0c*/
}
