// vector<float> uninitialized-fill primitive: constructs count four-byte float elements at destination from *value and returns destination+count. Identified from Oblivion call shape and four-byte stride.
float *__stdcall OB_stVectorFloat_UninitializedFillN_010201A0(
        float *destination,
        unsigned int count,
        const float *value)
{
  unsigned int remaining; // eax
  float *cursor; // ecx

  remaining = count; /*0x784b3c*/
  for ( cursor = destination; remaining; ++cursor ) /*0x784b40*/
  {
    --remaining; /*0x784b48*/
    *cursor = *value; /*0x784b4b*/
  }
  return &destination[count]; /*0x784b57*/
}
