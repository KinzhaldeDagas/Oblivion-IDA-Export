float *__cdecl sub_95D860(float a1, float *a2)
{
  float *v2; // eax
  float *result; // eax

  v2 = (float *)FormHeapAlloc(0x14u);
  if ( v2 )
    result = sub_96C420(v2, 1.0, (int)&Vector3_InitValue_);
  else
    result = 0;
  result[4] = a1;
  result[1] = *a2;
  result[2] = a2[1];
  result[3] = a2[2];
  return result;
}
